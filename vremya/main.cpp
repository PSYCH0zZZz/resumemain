#include <iostream>
#include <string>
class Time
{
private:
    int _hour, _minute, _second;
public:
    Time() : _hour(0), _minute(0), _second(0) {}
    Time(int h, int m, int s) : _hour(h), _minute(m), _second(s) { optimize(); }
    void optimize()
    {
        _minute += _second / 60;
        _second  = _second % 60;
        _minute += ((_second<0)?-1:0);
        _second += ((_second<0)?60:0);
        _hour   += _minute / 60;
        _minute  = _minute % 60;
        _hour   += ((_minute<0)?-1:0);
        _minute += ((_minute<0)?60:0);
    }
    int hour() const { return _hour; }
    int minute() const { return _minute; }
    int second() const { return _second; }

    friend std::ostream& operator<< (std::ostream& o, const Time& t)
    {
        o << ((t.minute()<10)?"0":"") << t.hour() << ":"
          << ((t.minute()<10)?"0":"") << t.minute() << ":"
          << ((t.second()<10)?"0":"") << t.second();
        return o;
    }

    Time(Time& other)
    {
        _hour = other._hour;
        _minute = other._minute;
        _second = other._second;
    }

    const Time operator+(const Time& other) const
    {
        Time result(other.hour()+_hour, other.minute()+_minute, other.second()+_second);
        return result;
    }

    const Time operator-(const Time& other) const
    {
        Time result(_hour - other.hour(), _minute - other.minute(), _second - other.second());
        return result;
    }

    const signed int compare(const Time& other) const
    {
        if (_hour<other.hour())
            return -1;
        else
        if (_hour>other.hour())
            return +1;
        else
        if (_minute<other.minute())
            return -1;
        else
        if (_hour>other.hour())
            return +1;
        else
        if (_second<other.second())
            return -1;
        else
        if (_second>other.second())
            return +1;
        return 0;
    }

    const bool operator<(const Time& other) const
    {
        return (compare(other) < 0);
    }
    const bool operator>(const Time& other) const
    {
        return (compare(other) > 0);
    }

    const bool operator==(const Time& other) const
    {
        return (compare(other) == 0);
    }

};

int main() {
    Time a(2, 0, 0), b(0, 59, 59);

    std::cout << "(" << a << ")-(" << b << ")=(" << (a-b)  <<  ") " << '\n'
         << "(" << a << ")+(" << b << ")=(" << (a+b) << ")";

    return 0;
}

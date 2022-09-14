#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <chrono>

using namespace std;

class military
{
public:
    string FIO;
    int rank;
    long int numberR;
    int age;
};

string uttodt(long int a) //конвертация unixtime в дату
{
    time_t t = a;
    return asctime(localtime(&t));
}

bool operator >(military first, military second)
{

    if (first.rank > second.rank)
        return true;
    else if (first.rank < second.rank)
        return false;
    else if (first.FIO > second.FIO)
        return true;
    else if (first.FIO < second.FIO)
        return false;
    else if (first.numberR > second.numberR)
        return true;
    else if (first.numberR < second.numberR)
        return false;
    return false;
}

bool operator <(military first, military second)
{
    if (first.rank > second.rank)
        return false;
    else if (first.rank < second.rank)
        return true;
    else if (first.FIO > second.FIO)
        return false;
    else if (first.FIO < second.FIO)
        return true;
    else if (first.numberR > second.numberR)
        return false;
    else if (first.numberR < second.numberR)
        return true;
    return false;
}

bool operator >=(military first, military second)
{

    if (first.rank > second.rank)
        return true;
    else if (first.rank < second.rank)
        return false;
    else if (first.FIO > second.FIO)
        return true;
    else if (first.FIO < second.FIO)
        return false;
    else if (first.numberR > second.numberR)
        return true;
    else if (first.numberR < second.numberR)
        return false;
    return true;
}

bool operator <=(military first, military second)
{

    if (first.rank > second.rank)
        return false;
    else if (first.rank < second.rank)
        return true;
    else if (first.FIO > second.FIO)
        return false;
    else if (first.FIO < second.FIO)
        return true;
    else if (first.numberR > second.numberR)
        return false;
    else if (first.numberR < second.numberR)
        return true;
    return true;
}

vector<military> import(string path)
{
    vector<military> ret; string s;
    ifstream file(path);
    vector<string> elems;
    while (getline(file, s))
    {
        elems.clear();
        char* str = (char*)s.c_str();
        military a;
        char* pch = strtok(str, "/"); //тут и 5 строчек ниже сплитим по символу / если бы я знал, что в c++ нет сплита, я бы пошел писать на qt
        while (pch != NULL)
        {
            elems.push_back(pch);
            pch = strtok(NULL, "/");
        }

        a.FIO = elems.at(0);
        a.rank = stoi(elems.at(1));
        a.numberR = stoi(elems.at(2));
        a.age = stoi(elems.at(3));

        ret.push_back(a);
    }

    return ret;
}

vector<military> SortProstVstavk(vector<military> res1)
{
    vector<military> ready;
    ready.push_back(res1.at(0));
    res1.erase(res1.begin());

    for (int i = 0; i < res1.size(); i++)
    {
        for (int z = 0; z < ready.size(); z++)
        {
            if (res1.at(i) < ready.at(z))
            {
                ready.insert(ready.begin() + z, res1.at(i));
                //res1.erase(res1.begin()+i);

                break;
            }
            else if (z + 1 == ready.size())
            {
                ready.push_back(res1.at(i));
                break;
            }
        }

    }


    return ready;
}

vector<military> simple_push(vector<military> res2)
{
    vector<military> addit_vec;
    addit_vec.push_back(res2.at(0));
    res2.erase(res2.begin());
    for (int i = 0; i < res2.size(); i++)
    {
        for (int j = 0; j < addit_vec.size(); j++)
        {
            if (res2.at(i) < addit_vec.at(j))
            {
                addit_vec.insert(addit_vec.begin() + j, res2.at(i));
                break;
            }
            else if (j + 1 == addit_vec.size())
            {
                addit_vec.push_back(res2.at(i));
                break;
            }
        }
    }
    return addit_vec;


void siftDown(vector<military>& res3, int root, int bottom)
{
    int maxIndex;
    int done = 0;
    while ((root * 2 <= bottom) && (!done))
    {
        if (root * 2 == bottom)
            maxIndex = root * 2;
        else if (res3.at(root * 2) > res3.at(root * 2 + 1))
            maxIndex = root * 2;
        else
            maxIndex = root * 2 + 1;
        if (res3.at(root) < res3.at(maxIndex))
        {
            military temp = res3.at(root);
            res3.at(root) = res3.at(maxIndex);
            res3.at(maxIndex) = temp;
            root = maxIndex;
        }
        else
            done = 1;
    }
}

vector<military> PyramidSort(vector<military> res3)
{
    int size = res3.size();
    for (int i = (size / 2) - 1; i >= 0; i--)
        siftDown(res3, i, size - 1);
    for (int i = size - 1; i >= 1; i--)
    {
        military temp = res3.at(0);
        res3.at(0) = res3.at(i);
        res3.at(i) = temp;
        siftDown(res3, 0, i - 1);
    }
    return res3;
}

int main()
{
    vector<military> a = import("C:\\Users\\ASUS\\Desktop\\met\\15000.txt");
    auto b = a;
    auto start = std::chrono::system_clock::now();
    a = PyramidSort(a);
    auto stop = std::chrono::system_clock::now();
    auto time = stop - start;
    cout << "============================================================================" << endl << "10000:" << endl;
    cout << "piramid Сортировка:" << (float(chrono::duration_cast<chrono::nanoseconds>(time).count()) / 1000000) << endl << endl;

    a = b;
    start = std::chrono::system_clock::now();
    a = simple_push(a);
    stop = std::chrono::system_clock::now();
    time = stop - start;
    cout << "simple_push Сортировка:" << (float(chrono::duration_cast<chrono::nanoseconds>(time).count()) / 1000000) << endl << endl;

    a = b;
    start = std::chrono::system_clock::now();
    a = SortProstVstavk(a);
    stop = std::chrono::system_clock::now();
    time = stop - start;
    cout << "Сортировка вставками:" << (float(chrono::duration_cast<chrono::nanoseconds>(time).count()) / 1000000) << endl;
    cout << "============================================================================" << endl;


    return 0;
}

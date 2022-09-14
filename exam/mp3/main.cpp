#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <chrono>
#include <map>

using namespace std;

int bad_h_counter = 0;
int good_h_counter = 0;

uint64_t bad_H(string param)
{
    uint64_t hash = 0;

    for(int i=0;i<4;i++)
    {
        for(int z = 0;z<param.size();z++)
        {
            hash += uint64_t((z*uint64_t(param[z]))^11) & 0xFFFFFFFF;


        }


    }


    return hash;
}



uint64_t good_H(string param)
{
    uint64_t hash = 0;

    for(int z = 0;z<param.size();z++)
    {
        hash += uint64_t((z*uint64_t(param[z]))-hash*11) & 0xFFFFFFFF;


    }
    return hash;
}


class military
{
public:
    string FIO;
    int rank;
    long int numberR;
    int age;
    uint64_t bad_H;
    uint64_t good_H;
};

string uttodt(long int a)
{
    time_t t = a;
    return asctime(localtime(&t));
}

bool operator >(military first, military second)
{

    if (first.FIO > second.FIO)
        return true;
    else if (first.FIO < second.FIO)
        return false;
    else if (first.rank > second.rank)
        return true;
    else if (first.rank < second.rank)
        return false;
    else if (first.numberR > second.numberR)
        return true;
    else if (first.numberR < second.numberR)
        return false;
    return false;
}

bool operator <(military first, military second)
{
    if (first.FIO > second.FIO)
        return false;
    else if (first.FIO < second.FIO)
        return true;
    else if (first.rank > second.rank)
        return false;
    else if (first.rank < second.rank)
        return true;
    else if (first.numberR > second.numberR)
        return false;
    else if (first.numberR < second.numberR)
        return true;
    return false;
}

bool operator >=(military first, military second)
{

    if (first.FIO > second.FIO)
        return true;
    else if (first.FIO < second.FIO)
        return false;
    else if (first.rank > second.rank)
        return true;
    else if (first.rank < second.rank)
        return false;
    else if (first.numberR > second.numberR)
        return true;
    else if (first.numberR < second.numberR)
        return false;
    return true;
}

bool operator <=(military first, military second)
{

    if (first.FIO > second.FIO)
        return false;
    else if (first.FIO < second.FIO)
        return true;
    else if (first.rank > second.rank)
        return false;
    else if (first.rank < second.rank)
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
        char* pch = strtok(str, "/");
        while (pch != NULL)
        {
            elems.push_back(pch);
            pch = strtok(NULL, "/");
        }

        a.FIO = elems.at(0);
        a.rank = stoi(elems.at(1));
        a.numberR = stoi(elems.at(2));
        a.age = stoi(elems.at(3));
        a.bad_H = bad_H(a.FIO);
        a.good_H = good_H(a.FIO);
        ret.push_back(a);
    }

    return ret;
}
\\\
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
}


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

military StF(vector<military> data,string param)
{
    for(int i = 0;i<data.size();i++)
    {
        if(data.at(i).FIO == param)
        {
            return data.at(i);

        }
    }
}

int ReqBinF(vector<military>& data, string& param,int start, int end)
{
    int mid = (start+end)/2;
    if(data.at(mid).FIO<param)
        ReqBinF(data,param,mid+1,end);
    else if(data.at(mid).FIO>param)
        ReqBinF(data,param,start,mid-1);
    else
        return mid;
}

military BinF(vector<military> data, string param)
{
    int mid = (data.size()/2);
    int start = 0;
    int end = data.size();
    if(data.at(mid).FIO<param)
        return data.at(ReqBinF(data,param,mid+1,end));
    else if(data.at(mid).FIO>param)
        return data.at(ReqBinF(data,param,start,mid-1));
    return data.at(mid);
}

class transl
{
public:
    int rank;
    long int numberR;
    int age;
};

multimap<string,transl> vectomap(vector<military> data)
{
    multimap<string,transl> datamap;
    for(int i = 0; i<data.size();i++)
    {
        transl a;
        a.rank = data.at(i).rank;
        a.numberR = data.at(i).numberR;
        a.age = data.at(i).age;
        string b = data.at(i).FIO;
        datamap.insert({b,a});
    }


    return datamap;
}

map<uint64_t,vector<int>> bad_H_table(vector<military> a)
{
    bad_h_counter = 0;
    map<uint64_t,vector<int>> returned;
    vector<int> index; index.push_back(0);
    returned[a[0].bad_H] = index;
    for(int i=1;i<a.size();i++)
    {
        vector<int> index;
        if(returned.contains(a[i].bad_H))
        {
            //cout << a[i].bad_H << endl;
            index = returned[a[i].bad_H];
            index.push_back(i);
            returned[a[i].bad_H] = index;
            bad_h_counter++;
        }
        else
        {
            index.push_back(i);
            returned[a[i].bad_H] = index;

        }

    }

    return returned;
}


map<uint64_t,vector<int>> good_HT(vector<military> a)
{
    good_h_counter = 0;
    map<uint64_t,vector<int>> returned;
    vector<int> index; index.push_back(0);
    returned[a[0].good_H] = index;
    for(int i=1;i<a.size();i++)
    {
        vector<int> index;
        if(returned.contains(a[i].good_H))
        {
            index = returned[a[i].good_H];
            index.push_back(i);
            returned[a[i].good_H] = index;
            //cout << "Ebat', ya nashel koliziu" << endl;
            good_h_counter++;
        }
        else
        {
            index.push_back(i);
            returned[a[i].good_H] = index;

        }

    }

    return returned;
}

military bad_HS(map<uint64_t,vector<int>> a,string mustsearch,vector<military> b)
{
    if(a[bad_H(mustsearch)].size()>0)
    {
        for(int i=0;i<a[bad_H(mustsearch)].size();i++)
        {
            if(b[a[bad_H(mustsearch)][i]].FIO==mustsearch)
                return b[a[bad_H(mustsearch)][i]];
        }
    }
    else
        return b[a[bad_H(mustsearch)][0]];
}


military good_HS(map<uint64_t,vector<int>> a,string mustsearch,vector<military> b)
{
    if(a[good_H(mustsearch)].size()>0)
    {
        for(int i=0;i<a[good_H(mustsearch)].size();i++)
        {
            if(b[a[good_H(mustsearch)][i]].FIO==mustsearch)
                return b[a[good_H(mustsearch)][i]];

        }

    }
    else
        return b[a[good_H(mustsearch)][0]];
}


int main()
{
    vector<military> a = import("C:\\Users\\ASUS\\Desktop\\met\\100000.txt");
    vector<military> d = a;
    string name = "Matthew Perez";
    ofstream kl;
    kl.open("C:\\Users\\ASUS\\Desktop\\met\\otv.txt");


    cout << "============================================================================" << endl << a.size()<<":" << endl;
    auto bht = bad_H_table(a);
    cout << "size:" << bht.size() << endl;
    auto start = std::chrono::system_clock::now();
    bad_HS(bht,name,a);
    auto stop = std::chrono::system_clock::now();
    cout << "Плохой Хэш:" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< endl;
    kl << bad_h_counter << "\n";
    kl << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000) << "\n";
    cout << "Кол-во коллизий:" << bad_h_counter << endl << endl;


    auto ght = good_HT(a);
    start = std::chrono::system_clock::now();
    good_HS(ght,name,a);
    stop = std::chrono::system_clock::now();
    cout << "Хороший Хэш:" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< endl;
    kl << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< "\n";
    cout << "Кол-во коллизий:" << good_h_counter << endl << endl;

    kl << good_h_counter << "\n";


    start = std::chrono::system_clock::now();
    StF(a,name);
    stop = std::chrono::system_clock::now();
    cout << "Прямой Поиск:" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< endl << endl ;
    kl << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000) << "\n";

    a = PyramidSort(a);
    start = std::chrono::system_clock::now();
    BinF(a,name);
    stop = std::chrono::system_clock::now();
    cout << "Бинарный Поиск:" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< endl << endl ;

    kl << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000) << "\n";

    multimap<string,transl> c;
    c = vectomap(d);

    start = std::chrono::system_clock::now();
    c.find(name);
    stop = std::chrono::system_clock::now();
    cout << "Multimap Поиск:" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/1000000000)<< endl << endl ;
    cout << "============================================================================" << endl;
    kl << ((long double)(chrono::duration_cast<chrono::nanoseconds>(stop-start).count())/10000000000);
    kl.close();
    return 0;
}
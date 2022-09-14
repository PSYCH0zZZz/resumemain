#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <chrono>
#include <map>
/*! \file */
using namespace std;

class Account{
public:
    string FIO;
    string dolgnost;
    string podrazdelenie;
    int zarplata;
};


/// \brief Перегрузка операторов
/// \return Возвращает либо True, либо False
bool operator >(Account first, Account second){
    if(first.FIO > second.FIO)
        return true;
    else if(first.FIO < second.FIO)
        return false;
    else if(first.podrazdelenie > second.podrazdelenie)
        return true;
    else if(first.podrazdelenie < second.podrazdelenie)
        return false;
    else if(first.zarplata > second.zarplata)
        return true;
    else if(first.zarplata < second.zarplata)
        return false;
    return false;
}

bool operator <(Account first, Account second){
    if(first.zarplata > second.zarplata)
        return false;
    else if(first.zarplata < second.zarplata)
        return true;
    else if(first.podrazdelenie > second.podrazdelenie)
        return false;
    else if(first.podrazdelenie < second.podrazdelenie)
        return true;
    else if(first.FIO > second.FIO)
        return false;
    else if(first.FIO < second.FIO)
        return true;
    return false;
}

bool operator >=(Account first, Account second){
    if(first.zarplata > second.zarplata)
        return true;
    else if(first.zarplata < second.zarplata)
        return false;
    else if(first.podrazdelenie > second.podrazdelenie)
        return true;
    else if(first.podrazdelenie < second.podrazdelenie)
        return false;
    else if(first.FIO > second.FIO)
        return true;
    else if(first.FIO < second.FIO)
        return false;
    return true;
}

bool operator <=(Account first, Account second){
    if(first.zarplata > second.zarplata)
        return false;
    else if(first.zarplata < second.zarplata)
        return true;
    else if(first.podrazdelenie > second.podrazdelenie)
        return false;
    else if(first.podrazdelenie < second.podrazdelenie)
        return true;
    else if(first.FIO > second.FIO)
        return false;
    else if(first.FIO < second.FIO)
        return true;
    return true;
}
/// \brief Импорт базы данных
/// \return Возвращает вектор классов Account
vector<Account> import(string path ){
    vector<Account> ret;
    string s;
    ifstream file(path);
    vector<string> element;
    while(getline(file,s)){
        element.clear();
        const char *str = s.c_str();
        Account a;
        char * pch = strtok((char*)str," ");
        while(pch != NULL){
            element.push_back(pch);
            pch = strtok(NULL," ");
        }
        a.FIO = element.at(0);
        a.dolgnost = element.at(1);
        a.podrazdelenie = element.at(2);
        a.zarplata = stoi(element.at(3));

        ret.push_back(a);
    }
    return ret;
}

/// \brief Сортировка простыми вставками
/// \return Возвращает отсортированный vector классов Account
vector<Account> ProstVstav(vector<Account > basic){
    vector<Account> fin;
    fin.push_back(basic.at(0));
    basic.erase(basic.begin());
    for(int i = 0; i < basic.size(); i++) {
        for(int j = 0; j < fin.size(); j++){
            if(basic.at(i) < fin.at(j)){
                fin.insert(fin.begin() + j, basic.at(i));
                break;
            }
            else if(j + 1 == fin.size()){
                fin.push_back(basic.at(i));
                break;
            }
        }
    }
    return fin;
}
/// \brief Шейкер Сортировка
/// \return Возвращает отсортированный vector классов Account
vector<Account> ShakerSort(vector<Account> basic){
    int left = 1;
    int right = basic.size() - 1;
    while (left <= right){
        for (int i = right; i >= left; i--)
            if (basic.at(i - 1) > basic.at(i)){
                Account k;
                k = basic.at(i);
                basic.at(i) = basic.at(i - 1);
                basic.at(i - 1) = k;
            }
        left++;

        for (int i = left; i <= right; i++)
            if (basic.at(i - 1) > basic.at(i)){
                Account k;
                k = basic.at(i);
                basic.at(i) = basic.at(i - 1);
                basic.at(i - 1) = k;
            }
        right--;
    }
    return basic;
}
/// \brief  Сортировка слиянием(метод)
/// \return Возвращает отсортированный vector классов Account
void Merge(vector<Account> basic, int low, int high){
    vector<Account> fin;
    int mid = (low + high) / 2;
    int h = low;
    int i = 0;
    int j = mid +1;
    int k;
    while((h <= mid) && (j <=high)){
        if(basic.at(h) <= basic.at(j)){
            fin.at(i) = basic.at(h);
            h++;
        }
        else{
            fin.at(i) = basic.at(j);
            j++;
        }
        i++;
    }
    if(h > mid){
        for(k = j; k <= high; k++){
            fin.at(i) = basic.at(k);
            i++;
        }
    }
    else{
        for(k = h; k <= mid; k++){
            fin.at(i) = basic.at(k);
            i++;
        }
    }
    for(k = 0; k <= high - low; k++){
        basic.at(k + low) = fin.at(k);
    }
}
/// \brief  Сортировка слиянием
/// \return Возвращает отсортированный vector классов Account
vector<Account> MergeSort(vector<Account> basic, int low, int high){
    int mid;
    if(low < high){
        mid = (low + high) / 2;
        MergeSort(basic, low, (low + high) / 2);
        MergeSort(basic, (low + high) / 2 + 1, high);
        Merge(basic, low, high);
    }
    return basic;
}

/// \brief Прямой поиск
/// \return Возвращает найденый класс Account
Account PrPoisk(vector<Account> basic,string parametr){
    for(int i = 0; i < basic.size(); i++){
        if(basic.at(i).FIO == parametr){
            return i);
        }
    }
}
/// \brief Бинарный Поиск
/// \return Возвращает найденый класса Account
int BinPoisk(vector<Account>& basic, string& parametr,int first, int last){
    int mid = (first + last) / 2;
    if(basic.at(mid).FIO < parametr)
        BinPoisk(basic, parametr, mid + 1, last);
    else if(basic.at(mid).FIO > parametr)
        BinPoisk(basic, parametr, first, mid - 1);
    else
        return mid;
}
Account BinaryPoisk(vector<Account> basic, string parametr)
{
    int mid = (basic.size() / 2);
    int first = 0;
    int last = basic.size();
    if(basic.at(mid).FIO < parametr)
        return basic.at(BinPoisk(basic, parametr, mid + 1, last));
    else if(basic.at(mid).FIO > parametr)
        return basic.at(BinPoisk(basic, parametr, first, mid - 1));
    return basic.at(mid);
}

class ost{
public:
    string dolgnost;
    string podrazdelenie;
    int zarplata;
};
/// \brief Конвертация vector в multimap
/// \return Возвращает конвертируемый multimap
multimap<string,ost> vector_map(vector<Account> basic){
    multimap<string,ost> n_map;
    for(int i = 0; i < basic.size(); i++){
        ost a;
        a.dolgnost = basic.at(i).dolgnost;
        a.podrazdelenie = basic.at(i).podrazdelenie;
        a.zarplata = basic.at(i).zarplata;
        string b = basic.at(i).FIO;
        n_map.insert({b, a});
    }

    return n_map;
}

int main(){
    vector<Account> a = import("C:\\Users\\ASUS\\Desktop\\met\\101.txt");
    vector<Account> b = a;
    string FIO_sample = "Anna_Pukina";

    auto start = std::chrono::system_clock::now();
    PrPoisk(a, FIO_sample);
    auto stop = std::chrono::system_clock::now();
    auto time = stop-start;
    cout << a.size()<<":" << endl;
    cout << "Прямой поиск: " << ((long double)(chrono::duration_cast<chrono::nanoseconds>(time).count())/1000000000)<< endl << endl ;
    a = ProstVstav(a);
    start = std::chrono::system_clock::now();
    BinaryPoisk(a, FIO_sample);
    stop = std::chrono::system_clock::now();
    time = stop-start;
    cout << "Бинарный поиск: " << ((long double)(chrono::duration_cast<chrono::nanoseconds>(time).count())/1000000000) << endl << endl;
    multimap<string, ost> c = vector_map(b);
    start = std::chrono::system_clock::now();
    c.find(FIO_sample);
    stop = std::chrono::system_clock::now();
    time = stop-start;
    cout << "Мультимэп поиск :" << ((long double)(chrono::duration_cast<chrono::nanoseconds>(time).count())/1000000000) << endl;

    return 0;
}
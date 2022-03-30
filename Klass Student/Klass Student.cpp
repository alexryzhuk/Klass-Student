// Klass Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;
class Student {
public:
    string name;
    string surname;
    string midname;
    string date;
    int telephone;
    string city;
    string country;
    string university;
    string cityUniversity;
    string countryUniversity;
    string groupNumber;
    void input() {
        cout << "Введіть прізвище" << endl;
        cin >> surname;        
        cout << "Введіть ім'я" << endl;
        cin >> name;        
        cout << "Введіть по-батькові" << endl;
        cin >> midname;        
        cout << "Введіть дату народження" << endl;
        cin >> date;        
        cout << "Введіть номер телефону" << endl;
        cin >> telephone;        
        cout << "Введіть місто проживання" << endl;
        cin >> city;        
        cout << "Введіть країну проживання" << endl;
        cin >> country;        
        cout << "Введіть назву навчального закладу" << endl;
        cin >> university;        
        cout << "Введіть місто, в якому знаходиться навчальний заклад" << endl;
        cin >> cityUniversity;        
        cout << "Введіть країну, в якому знаходиться навчальний заклад" << endl;
        cin >> countryUniversity;        
        cout << "Введіть номер групи у навчальному закладі" << endl;
        cin >> groupNumber;        
    }
    void output() {
        cout << "Прізвище, ім'я та по-батькові : " << surname << " " << name << " " << midname << endl;
        cout << "Номер телефону : " << telephone << endl;
        cout << "Проживає в " << country << " в місті "<< city << endl;
        cout << "Навчається в  " << university << endl;
        cout << "Номер групи : " << groupNumber << endl;
        cout << "Навчальний заклад знаходиться в " << countryUniversity << " в місті " << cityUniversity << endl;
   }
};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student firstStudent;
    firstStudent.input();
    cout << endl;
    cout << endl;
    firstStudent.output();
}

/*Створіть клас Student, який міститиме інформацію про студента.За допомогою механізму успадкування, реалізуйте клас
Aspirant (аспірант — студент, який готується до захисту кандидатської роботи) похідний від Student*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;// ім'я
    string surname;//прізвище
    string patronymic;//по-батькові
    int numbOfBirthday = 0;//день народження
    string monthOfBirthday;//місяць народження
    int yearOfBirthday = 0;//рік народження
    long long int phone_number = 0;//контактний телефон
    string yourCity;// місто студента
    string university;//назва навчального закладу
    string cityOfUniversity;//місто (де знаходиться навчальний заклад)
    int group_number = 0;// номер групи
public:
    Student() {}


    void Input() {//метод класу  для вводу даних 
        cout << "Student's name- "; getline(cin, name);
        cout << "Student's surname- "; getline(cin, surname);
        cout << "Student's patronymic- "; getline(cin, patronymic);
        cout << "The number of student's birthday- "; cin >> numbOfBirthday; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
        cout << "The month of student's birthday- "; getline(cin, monthOfBirthday);
        cout << "The year of student's birthday- "; cin >> yearOfBirthday;
        cout << "Student's phone number- "; cin >> phone_number; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
        cout << "Student's city- "; getline(cin, yourCity);
        cout << "Student's university- "; getline(cin, university);
        cout << "The city of student's university- "; getline(cin, cityOfUniversity);
        cout << "The number of student's group- "; cin >> group_number; cin.ignore(32767, '\n');//використовуємо cin.ignore для видалення пробілу з пам'яті
    }


    void Output() {//метод класу  для виводу даних 
        cout << "Student's name- " << name << endl;
        cout << "Student's surname- " << surname << endl;
        cout << "Student's patronymic- " << patronymic << endl;
        cout << "The number of student's birthday- " << numbOfBirthday << endl;
        cout << "The month of student's birthday- " << monthOfBirthday << endl;
        cout << "The year of student's birthday- " << yearOfBirthday << endl;
        cout << "Student's phone number- " << phone_number << endl;
        cout << "Student's city- " << yourCity << endl;
        cout << "Student's university- " << university << endl;
        cout << "The city of student's university- " << cityOfUniversity << endl;
        cout << "The number of student's group- " << group_number << endl;
    }


    ~Student() {}
};


class Aspirant :protected Student//клас Aspirant(аспірант — студент, який готується до захисту кандидатської роботи)
{
protected:
    string nameOfWork;//назва кандидатської роботи
    string atComm;//склад атестаційної комісії
    int dayPass;//дата здачі кандидатської роботи
    int numbA;//номер аудиторії для здачі кандидатської роботи


public:
    Aspirant() {}


    void Input() {
        Student::Input();
        cout << "The name of the candidate's work- "; getline(cin, nameOfWork);
        cout << "Composition of the attestation commission- "; getline(cin, atComm);
        cout << "Date of passing- "; cin >> dayPass;
        cout << "Audience number- "; cin >> numbA;
    }


    void Output() {
        Student::Output();
        cout << "The name of the candidate's work- " << nameOfWork << endl;
        cout << "Composition of the attestation commission- " << atComm << endl;
        cout << "Date of passing- " << dayPass;
        cout << "Audience number- " << numbA;
    }


    ~Aspirant() {}
};


int main()
{
    Aspirant A;//об'єкт класу Postgraduate
    A.Input();
    A.Output();
}
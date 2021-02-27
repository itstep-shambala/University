#pragma once

#include <iostream>
#include <string>

#include "Date.h"
#include "Contacts.h"
#include "Person.h"
#include "Teacher.h"

using namespace std;

void PrintDate(Date date)
{
    cout << date.day << ".";
    cout << date.month << ".";
    cout << date.year << endl;
}

void PrintContacts(Contacts contacts)
{
    cout << "Контакты:" << endl;
    cout << "Телефон: " << contacts.tel << endl;
    cout << "e-mail: " << contacts.email << endl;
    cout << "Адрес: " << contacts.address << endl;
}

void PrintPerson(Person person)
{
    cout << "Имя: " << person.firstName << endl;
    cout << "Фамилия: " << person.lastName << endl;
    cout << "Дата рождения: ";
    PrintDate(person.dateOfBirth);
    cout << "Возраст: " << person.age << endl;
    PrintContacts(person.contacts);
}

void PrintDegree(Degree degree)
{
    switch (degree) {
        case Master:
            cout << "Кандидат наук" << endl;
            break;
        case PhD:
            cout << "Доктор наук" << endl;
            break;
    }
}

void PrintSubject(Subject subject)
{
    switch (subject) {
        case Math:
            cout << "Математика" << endl;
            break;
        case CS:
            cout << "Компьютерные науки" << endl;
            break;
        case Ecology:
            cout << "Экология" << endl;
            break;
    }
}

void PrintTeacher(Teacher teacher)
{
    cout << "=== Преподаватель ===" << endl;
    PrintPerson(teacher.personInfo);
    cout << "Специализация: "; PrintSubject(teacher.subject);
    cout << "Учёная степень: "; PrintDegree(teacher.degree)
    cout << "=====================" << endl;
}

Date InputDate()
{
    Date temp;
    cout << "Ввод даты:" << endl;
    cout << "Введите год - "; cin >> temp.year;
    cout << "Введите месяц - "; cin >> temp.month;
    cout << "Введите день - "; cin >> temp.day;

    return temp;
}

Contacts InputContacts()
{
    Contacts temp;
    cout << "Ввод контактных данных:" << endl;
    cout << "Введите телефон - "; cin >> temp.tel;
    cout << "Введите email - "; cin >> temp.email;
    cout << "Введите адрес - "; cin >> temp.address;

    return temp;
}

Person InputPerson()
{
    Person temp;
    cout << "Ввод данных о персоне:" << endl;
    cout << "Введите имя - "; cin >> temp.firstName;
    cout << "Введите фамилию - "; cin >> temp.lastName;
    cout << "Введите возраст - "; cin >> temp.age;
    temp.dateOfBirth = InputDate();
    temp.contacts = InputContacts();

    return temp;
}

Degree InputDegree()
{
    int temp;
    cout << "Ввод учёной степени:" << endl;
    cout << "0 - кандидат наук" << endl;
    cout << "1 - доктор наук" << endl;
    cout << "введите номер - "; cin >> temp;

    switch (temp) {
        case 0:
            return Master;
        case 1:
            return PhD;
    }
}

Subject InputSubject()
{
    int temp;
    cout << "Ввод специализации:" << endl;
    cout << "0 - математика" << endl;
    cout << "1 - компьютерные науки" << endl;
    cout << "2 - экология" << endl;
    cout << "введите номер - "; cin >> temp;

    switch (temp) {
        case 0:
            return Math;
        case 1:
            return CS;
        case 2:
            return Ecology;
    }
}

Teacher InputTeacher()
{
    Teacher temp;

    cout << "Ввод данных о преподавателе:" << endl;
    temp.personInfo = InputPerson();
    temp.degree = InputDegree();
    temp.subject = InputSubject();

    return temp;
}
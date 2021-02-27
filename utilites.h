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

void PrintTeacher(Teacher teacher)
{
    cout << "=== Преподаватель ===" << endl;
    PrintPerson(teacher.personInfo);
    cout << "Специализация: " << teacher.subject << endl;
    cout << "Учёная степень: " << teacher.degree << endl;
    cout << "=====================" << endl;
}

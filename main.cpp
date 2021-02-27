#include <iostream>
#include <vector>

#include "Teacher.h"
#include "utilites.h"

using namespace std;

int main()
{
    system("chcp 65001");

    vector<Teacher> teachers;

    int select;
    char yesNo;
    do {
        cout << "Режимы работы:" << endl;
        cout << "1 - Добавить преподавателя" << endl;
        cout << "2 - Показать всех преподавателей" << endl;
        cout << "Введите номер режима - "; cin >> select;

        switch (select) {
            case 1: {
                Teacher temp = InputTeacher();
                teachers.push_back(temp);
                break;
            }
            case 2:
                for (Teacher element : teachers) {
                    PrintTeacher(element);
                }
                break;
        }
        cout << "Хотите продолжить? Y - да "; cin >> yesNo;
    } while (yesNo == 'Y' || yesNo == 'y');
}

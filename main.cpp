#include <iostream>

#include "Teacher.h"
#include "utilites.h"

using namespace std;

int main()
{
    system("chcp 65001");

    const int SIZE = 2;
    Teacher teacher[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        teacher[i] = InputTeacher();
    }

    for (int i = 0; i < SIZE; ++i) {
        PrintTeacher(teacher[i]);
    }
}

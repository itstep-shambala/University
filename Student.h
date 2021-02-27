#pragma once

#include <string>

#include "Date.h"
#include "Person.h"

using namespace std;

struct Student {
    Person personInfo;
    string group;
    double rating;
    Date dateOfStart;
};
#pragma once

#include <string>

#include "Date.h"
#include "Contacts.h"

using namespace std;

struct Person {
    string firstName;
    string lastName;
    Date dateOfBirth;
    int age;
    Contacts contacts;
};

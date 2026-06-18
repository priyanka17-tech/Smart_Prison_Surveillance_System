#ifndef INMATE_H
#define INMATE_H

#include <iostream>
using namespace std;

class Inmate {
public:
    int id;
    string name;
    int age;
    string crime;
    int cellNo;

    Inmate() {}

    Inmate(int i, string n, int a, string c, int cell) {
        id = i;
        name = n;
        age = a;
        crime = c;
        cellNo = cell;
    }

    void display() {
        cout << id << " " << name << " " << age << " " << crime << " " << cellNo << endl;
    }
};

#endif
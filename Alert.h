#ifndef ALERT_H
#define ALERT_H

#include <iostream>
using namespace std;

class Alert {
public:
    int alertId;
    string desc;
    int threatScore;

    Alert() {}

    Alert(int i, string d, int s) {
        alertId = i;
        desc = d;
        threatScore = s;
    }

    void display() {
        cout << alertId << " " << desc << " " << threatScore << endl;
    }
};

#endif
#include "AlertQueue.h"
#include <iostream>
using namespace std;

void AlertQueue::addAlert() {
    int id, score;
    string desc;

    cout << "Alert ID: ";
    cin >> id;

    cout << "Description: ";
    cin.ignore();
    getline(cin, desc);

    cout << "Score: ";
    cin >> score;

    q.push(Alert(id, desc, score));
}

void AlertQueue::processAlert() {
    if (q.empty()) {
        cout << "No alerts\n";
        return;
    }

    processed.push_back(q.front());
    q.pop();
}

void AlertQueue::showAlerts() {
    queue<Alert> temp = q;

    while (!temp.empty()) {
        temp.front().display();
        temp.pop();
    }
}

int AlertQueue::size() {
    return q.size();
}

vector<Alert>& AlertQueue::getAlerts() {
    return processed;
}
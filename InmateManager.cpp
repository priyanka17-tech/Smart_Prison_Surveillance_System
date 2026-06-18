#include "InmateManager.h"
#include <iostream>
using namespace std;

void InmateManager::addInmate() {
    int id, age, cell;
    string name, crime;

    cout << "ID: ";
    cin >> id;

    cout << "Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cout << "Crime: ";
    cin.ignore();
    getline(cin, crime);

    cout << "Cell: ";
    cin >> cell;

    inmates.push_back(Inmate(id, name, age, crime, cell));
}

void InmateManager::showAll() {
    for (auto &i : inmates)
        i.display();
}

void InmateManager::searchInmate(int id) {
    for (auto &i : inmates) {
        if (i.id == id) {
            i.display();
            return;
        }
    }
    cout << "Not found\n";
}

int InmateManager::count() {
    return inmates.size();
}

int InmateManager::getLastInmateId() {
    if (inmates.empty()) return 0;
    return inmates.back().id;
}
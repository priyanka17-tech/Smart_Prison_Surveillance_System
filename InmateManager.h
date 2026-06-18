#ifndef INMATE_MANAGER_H
#define INMATE_MANAGER_H

#include <vector>
#include "../models/Inmate.h"

class InmateManager {
    vector<Inmate> inmates;

public:
    void addInmate();
    void showAll();
    void searchInmate(int id);
    int count();
    int getLastInmateId();
};

#endif
#ifndef ALERT_QUEUE_H
#define ALERT_QUEUE_H

#include <queue>
#include <vector>
#include "../models/Alert.h"

class AlertQueue {
    std::queue<Alert> q;
    std::vector<Alert> processed;

public:
    void addAlert();
    void processAlert();
    void showAlerts();
    int size();
    std::vector<Alert>& getAlerts();
};

#endif
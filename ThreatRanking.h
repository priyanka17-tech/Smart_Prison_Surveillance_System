#ifndef THREAT_RANKING_H
#define THREAT_RANKING_H

#include <vector>
#include "../models/Alert.h"

class ThreatRanking {
    void quickSort(std::vector<Alert>& a, int l, int r);
    int partition(std::vector<Alert>& a, int l, int r);

public:
    void sortAlerts(std::vector<Alert>& a);
};

#endif
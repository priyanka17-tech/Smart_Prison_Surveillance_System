#include "ThreatRanking.h"
#include <iostream>
using namespace std;

int ThreatRanking::partition(vector<Alert>& a, int l, int r) {
    int pivot = a[r].threatScore;
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (a[j].threatScore > pivot)
            swap(a[++i], a[j]);
    }

    swap(a[i + 1], a[r]);
    return i + 1;
}

void ThreatRanking::quickSort(vector<Alert>& a, int l, int r) {
    if (l < r) {
        int p = partition(a, l, r);
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);
    }
}

void ThreatRanking::sortAlerts(vector<Alert>& a) {
    if (a.empty()) {
        cout << "No alerts\n";
        return;
    }

    quickSort(a, 0, a.size() - 1);

    for (auto &x : a)
        cout << x.alertId << " " << x.desc << " " << x.threatScore << endl;
}
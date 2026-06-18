#include <iostream>
#include "models/Inmate.h"
#include "models/Alert.h"
#include "modules/InmateManager.h"
#include "modules/AlertQueue.h"
#include "modules/ThreatRanking.h"
#include "modules/GangGraph.h"
#include "modules/EscapeRoute.h"

using namespace std;

int main() {

    InmateManager inmateManager;
    AlertQueue alertQueue;
    ThreatRanking threatRanking;
    GangGraph gangGraph;
    EscapeRoute escapeRoute;

    int choice;

    do {
        cout << "\n===================================\n";
        cout << " SMART PRISON SURVEILLANCE SYSTEM\n";
        cout << "===================================\n";

        cout << "1. Add Inmate\n";
        cout << "2. Show All Inmates\n";
        cout << "3. Search Inmate\n";
        cout << "4. Add Security Alert\n";
        cout << "5. Process Alert Queue\n";
        cout << "6. Show Pending Alerts\n";
        cout << "7. Rank Threats\n";
        cout << "8. Add Interaction\n";
        cout << "9. View Gang Network\n";
        cout << "10. Escape Route DFS\n";
        cout << "11. Dashboard\n";
        cout << "0. Exit\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                inmateManager.addInmate();
                gangGraph.addNode(inmateManager.getLastInmateId());
                break;

            case 2:
                inmateManager.showAll();
                break;

            case 3: {
                int id;
                cout << "Enter ID: ";
                cin >> id;
                inmateManager.searchInmate(id);
                break;
            }

            case 4:
                alertQueue.addAlert();
                break;

            case 5:
                alertQueue.processAlert();
                break;

            case 6:
                alertQueue.showAlerts();
                break;

            case 7:
                threatRanking.sortAlerts(alertQueue.getAlerts());
                break;

            case 8: {
                int a, b;
                cout << "Enter A: ";
                cin >> a;
                cout << "Enter B: ";
                cin >> b;
                gangGraph.addEdge(a, b);
                break;
            }

            case 9:
                gangGraph.display();
                break;

            case 10:
                escapeRoute.runDemo();
                break;

            case 11:
                cout << "\nDashboard\n";
                cout << "Inmates: " << inmateManager.count() << endl;
                cout << "Alerts: " << alertQueue.size() << endl;
                cout << "Connections: " << gangGraph.edgeCount() << endl;
                break;

            case 0:
                cout << "System Exit...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}

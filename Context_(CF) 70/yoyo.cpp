#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m; // n = number of processes, m = number of resource types

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resource types: ";
    cin >> m;

    vector<vector<int>> Allocation(n, vector<int>(m));
    vector<vector<int>> Max(n, vector<int>(m));
    vector<vector<int>> Need(n, vector<int>(m));
    vector<int> Available(m);
    vector<bool> Finish(n, false);
    vector<int> SafeSequence(n);

    // Input Allocation Matrix
    cout << "\nEnter Allocation Matrix (" << n << " x " << m << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> Allocation[i][j];

    // Input Max Matrix
    cout << "\nEnter Max Matrix (" << n << " x " << m << "):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> Max[i][j];
            if (Allocation[i][j] > Max[i][j]) {
                cout << "Error: Allocation > Max at P" << i << " R" << j << endl;
                return -1;
            }
        }
    }

    // Input Available Resources
    cout << "\nEnter Available Resources (" << m << "):\n";
    for (int i = 0; i < m; ++i)
        cin >> Available[i];

    // Calculate Need Matrix
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            Need[i][j] = Max[i][j] - Allocation[i][j];

    // Deadlock detection logic
    int count = 0;
    while (count < n) {
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (!Finish[i]) {
                bool canAllocate = true;
                for (int j = 0; j < m; ++j) {
                    if (Need[i][j] > Available[j]) {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate) {
                    for (int j = 0; j < m; ++j)
                        Available[j] += Allocation[i][j];

                    SafeSequence[count++] = i;
                    Finish[i] = true;
                    found = true;
                }
            }
        }

        if (!found) {
            break; // No further process can be allocated
        }
    }

    // Output results
    if (count == n) {
        cout << "\nSystem is in a SAFE state.\nSafe Sequence: ";
        for (int i = 0; i < n; ++i)
            cout << "P" << SafeSequence[i] << " ";
        cout << endl;
    } else {
        cout << "\nDeadlock detected! Processes involved: ";
        for (int i = 0; i < n; ++i)
            if (!Finish[i])
                cout << "P" << i << " ";
        cout << endl;
    }

    return 0;
}

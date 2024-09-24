#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<double> results;
    int participants[4], M, ak, ranking;

    while (cin >> participants[0] >> participants[1] >> participants[2] >> participants[3] >> M >> ak >> ranking) {
        double totalPrize = 0.0;

        for (int i = 0; i < 4; ++i) {
            if (participants[i] > 0) {
                totalPrize += static_cast<double>(M) / participants[i];
            }
        }

        if (ak == 1) {
            totalPrize += 5.00;
        }

        if (ranking == 1) {
            totalPrize += 5.00;
        }
        else if (ranking == 2) {
            totalPrize += 3.00;
        }
        else if (ranking == 3) {
            totalPrize += 1.00;
        }
        results.push_back(totalPrize);
    }

    for (double prize : results) {
        cout << fixed << setprecision(2) << prize << endl;
    }

    return 0;
}
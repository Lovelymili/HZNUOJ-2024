
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    while (std::cin >> n) {
        vector<int> numbers(n);
        int sum = 0, sum1 = 0; float sum2 = 0;

        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
            if (numbers[i] % 2 == 0) {
                sum += numbers[i];
                sum1 += pow((numbers[i]),2);
                sum2 += static_cast<float>(1) / numbers[i];

            }
        }
        cout.setf(ios::fixed);
        cout << sum << " " << sum1 << " " << setprecision(2) << sum2 << endl;
    }
    return 0;
}

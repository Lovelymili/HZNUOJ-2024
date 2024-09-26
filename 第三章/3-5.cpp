#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> numbers(n);
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
            if (numbers[i] % 2 != 0) {
                sum += numbers[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}

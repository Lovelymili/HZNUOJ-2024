#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

float high(int n) {
    return 100 * pow(0.7, n);
}

int main() {
    int n; vector <float> v{};
    cin >> n;
    while (n != 0) {
        if (n >= 1 and n <= 1000)
        {
            v.push_back(n);
        }
        else
        {
            return 0;
        }
        cin >> n;
    }
    if (n == 0)
    {
        for (int i=0; i < v.size(); i++)
        {
            //cout << v[i];
            cout.setf(ios::fixed);
            cout << setprecision(2);
            cout << high(v[i]) << endl;
        }
    }
    return 0;
}


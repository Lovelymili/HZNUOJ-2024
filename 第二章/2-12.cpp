#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, h, m, s;
    cin >> a;
    h = floor(a / 3600);
    m = floor((a % 3600) / 60);
    s = a - (3600 * h + 60 * m);
    cout << h << " "<< m << " " << s;
    return 0;
}
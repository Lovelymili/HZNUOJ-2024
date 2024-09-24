#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout.setf(ios::fixed);
    cout << setprecision(2);
    cout<< a + b << endl;
    cout << a - b << endl;
    cout << (a + b)/2 << endl;
    return 0;
}
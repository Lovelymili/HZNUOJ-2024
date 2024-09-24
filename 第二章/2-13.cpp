#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double f, c;
    cin >> c;
    f = 1.8 * c + 32;
    cout.setf(ios::fixed);
    cout << setprecision(2);
    cout << f;
    return 0;
}

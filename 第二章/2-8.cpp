#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    vector <int> v{};
    int a, b; string c;
    cin >> a;
    for (int i = 0; i <= a - 1; i++)
    {
        cin >> b;
        v.insert(v.end(), b);
    }
    for (int i = 0; i <= a - 1; i++)
    {
        b = v[i];
        c = to_string(b);
        reverse(c.begin(), c.end());
        cout << c << endl;
    }
}


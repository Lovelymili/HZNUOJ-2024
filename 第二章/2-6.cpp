#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;

int main()
{
    int a, b; vector <int> m = {}; char str[100];
    try {
        cin >> a;
        if (cin.fail())
        {
            throw invalid_argument("输入错误");
        }
    }
    catch (invalid_argument)
    {
        return 0;
    }
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        m.insert(m.end(), b);

    }
    for (int i = 0; i <= a-1; i++ )
    {       
        sprintf(str, "%o", m[i]);
        cout << str << endl;
    }
    return 0;
}

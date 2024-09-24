#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a,b; vector <int> m = {};
    try {
        cin >> a;
        if (a <= 0 or a > 10000)
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
        if (b > 0 and b < 1000000000)
        {
            m.insert(m.end(), b);
        }

    }
    for (int i = 0; i <= a-1; i++ )
    {       
        if ((m[i] - 1) % 3 == 0) {
            cout << "showshowshow" << endl;
        }
        else
        {
            cout << "forever love" << endl;
        }
    }
    return 0;
}
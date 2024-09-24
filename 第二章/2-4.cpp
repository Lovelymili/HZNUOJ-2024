#include <iostream>
#include<iomanip>
//#include<list>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;
    //list<double> x= {};
    //list<double> y = {};
    vector <double> x{};
    vector <double> y{};
    for (int i = 0; i <= a-1; i++)
    {
        double m, n;
        cin >> m >> n;
        x.insert(x.end(), m);
        y.insert(y.end(),n);
    }
    for (int i = 0; i <= a-1; i++)
    {
        cout.setf(ios::fixed);
        cout << setprecision(2);
        cout << (float)(x[i] / y[i] )<< endl;
    }
    
    return 0;
}
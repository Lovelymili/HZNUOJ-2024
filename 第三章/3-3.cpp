#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int calculate(int v)
{
	int z1, z2, z3,z4,z5 = 0;
	z1 = floor(v / 100);
	z2 = floor((v % 100) / 50);
	z3 = floor((v - 100 * z1 - 50 * z2)/10);
	z4 = floor((v - 100 * z1 - 50 * z2 - 10 * z3) / 5);
	z5 = v - 100 * z1 - 50 * z2 - 10 * z3 - 5 * z4 ;
	return z1 + z2 + z3 + z4 + z5;
}
int main()
{
	int a = 0;int  b = 0; int c = 0; vector <int> v{};  //写这题时候精神不佳，多次被打断，写出来的可能效果不好
	cin >> b; 
	while (c <= b-1)
	{
		cin >> a;
		if (a >= 0 && a <= 10000)
		{
			v.push_back(a);
			c++;
		}
		
	}
	for (int i = 0; i <= b - 1; i++)
	{
		if (i < b - 1)
		{
			cout << calculate(v[i]) << endl;
		}
		else
		{
			cout << calculate(v[i]);
		}
	}       
    return 0;
}

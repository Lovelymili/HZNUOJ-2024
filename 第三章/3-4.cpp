#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

float calculate(int n)
{
	float a = 0;
	int i = 1;
	while (i <= n)
	{
		if (i % 2 != 0) //奇数
		{
			a += (1 / (float)(2 * i - 1));
		
		}
		if(i % 2 ==0)//偶数
		{
			a -= (1 / (float)(2 * i - 1));
		}
		i++;
	}
	return a;
}

int main()
{
	int n; vector <int> v;
	while (cin >> n)
	{
		v.push_back(n);
	}
	for (int i = 0; i <= v.size()-1; i++)
	{
		cout.setf(ios::fixed);
		cout << setprecision(5);
		if (i < v.size() - 1)
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

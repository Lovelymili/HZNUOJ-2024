#include <iostream>
#include <vector>

using namespace std;


int caculateMin(int a, int b, int c)
{
    int n1 = 0, n2 = 0, n3 = 0;
    int combo = 1;
    for (int i = 1; i <= a ; i++)
    {
        n1 += 300 * (2 * (combo - 1) + 1);
        combo++;
    }
    for (int i = 1; i <=b; i++)
    {
        n2+= 100 * (2 * (combo - 1) + 1);
        combo++;
    }
    for (int i = 1; i <= c; i++)
    {
        n3 +=  50 * (2 * (combo - 1) + 1);
        combo++;
    }
        return (n1 + n2 + n3);

}
int caculateMax(int a, int b, int c)
{
    int n1 = 0, n2 = 0, n3 = 0;
    int combo = 1;
    for (int i = 1; i <= c; i++)
    {
        n1 += 50 * (2 * (combo - 1) + 1);
        combo++;
    }
    for (int i = 1; i <= b; i++)
    {
        n2 += 100 * (2 * (combo - 1) + 1);
        combo++;
    }
    for (int i = 1; i <= a; i++)
    {
        n3 += 300 * (2 * (combo - 1) + 1);
        combo++;
    }
    //cout << n1 + n2 + n3 << endl;
    return (n1 + n2 + n3);

}

int main() {
    int a,b,c,n =0; vector<int> min{}; vector<int> max{};
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        //mins.push_back();
        min.push_back(caculateMin(a, b, c));
        max.push_back(caculateMax(a, b, c));
    }
    for (int i=0; i <= n-1; i++)
    {
        cout << min[i] << " " << max[i] << endl;
    }
   
    return 0;
}
//祝你收歌快乐，FullCombo
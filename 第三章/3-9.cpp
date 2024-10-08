
#include <iostream>
#include <vector>

using namespace std;

int judge(int x) {
    for (int n = 1; n < x; n++) {
        if (x % n == 0 and n != 1)
        {
            return 1;
        }

    }
    return 0;
}
int main() {
    int a,b =0;
    while (cin >> a >> b) {
        vector<int> numbers{};
        for (int i=a; i >= a and i <= b; i++)
        {
            if (judge(i) == 0)
            {
                numbers.push_back(i);
            }
        }
        for (int i=0; i <= numbers.size()-1; i++)
        {
            cout << numbers[i] << endl;
        }
        
    }
    return 0;
}
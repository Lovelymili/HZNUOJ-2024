#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    while (a--) {
        int n;
        cin >> n;
        bool divisible_by_2_and_3 = (n % 2 == 0 && n % 3 == 0);
        bool divisible_by_2_or_3 = (n % 2 == 0 || n % 3 == 0);
        bool divisible_by_2_or_3_not_both = (divisible_by_2_or_3 && !divisible_by_2_and_3);
        cout << n << " divisible by 2 and 3? " << (divisible_by_2_and_3 ? 1 : 0) << endl;
        cout << n << " divisible by 2 or 3? " << (divisible_by_2_or_3 ? 1 : 0) << endl;
        cout << n << " divisible by 2 or 3, but not both? " << (divisible_by_2_or_3_not_both ? 1 : 0) << endl;
    }

    return 0;
}

//似乎这个题目多个答案一起输出就会判错,不是很理解,可能是判定问题吧
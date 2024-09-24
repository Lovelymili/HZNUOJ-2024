#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
using namespace std;

int main()
{
    char cr;
    char str[101];
    cin >> cr;
    cout << "DEC:" << (int)cr << endl;
    sprintf(str, "%o", (int)cr);
    cout << "OCT:" << (string)str << endl;
    sprintf(str, "%x", (int)cr);
    cout << "HEX:" << (string)str << endl;
    return 0;
}
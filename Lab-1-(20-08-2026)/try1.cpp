#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// given intiger num , find even or odd

int main()
{

    int num;
    cin >> num;

    if (num & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
    cout << endl;

    {

        bitset<8> bits1(num);
        bits1[0] = 1;
        // int newb = bits;

        cout << (bits1.to_ullong());
    }
    return 0;
}

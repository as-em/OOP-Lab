#include <bits/stdc++.h>

using namespace std;

// Overload + , - operator in c++

class Money
{
public:
    int taka;
    int poysa;

    Money()
    {
        taka = 0;
        poysa = 0;
    }
    Money(int t, int p)
    {
        taka = t;
        poysa = p;
    }
};

Money operator+(Money &m1, Money &m2)
{
    Money total;
    total.taka = m1.taka + m2.taka;
    total.poysa = m1.poysa + m2.poysa;

    if (total.poysa > 99)
    {
        total.taka++;
        total.poysa = total.poysa - 100;
    }

    return total;
}
Money operator-(Money &m1, Money &m2)
{
    Money remain;
    remain.taka = m1.taka - m2.taka;
    remain.poysa = m1.poysa - m2.poysa;

    if (remain.poysa < 0)
    {
        remain.taka--;
        remain.poysa = 100 + remain.poysa;
    }

    return remain;
}

int main()
{
    Money m1(50, 50);
    Money m2(40, 70);

    Money m3 = m1 + m2;
    Money m4 = m1 - m2;

    cout << m3.taka << "Taka " << m3.poysa << " poysa " << endl;
    cout << m4.taka << "Taka " << m4.poysa << " poysa " << endl;

    return 0;
}

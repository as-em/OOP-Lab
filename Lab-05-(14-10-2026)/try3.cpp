#include <bits/stdc++.h>

using namespace std;

// Overload / , % operator in c++

class Candy
{
public:
    int cnt;

    Candy(int l = 10)
    {
        cnt = l;
    }
};

Candy operator/(Candy &candy, Candy &perbaby)
{
    Candy per;
    per.cnt = candy.cnt / perbaby.cnt;
    return per;
}
Candy operator%(Candy &candy, Candy &perbaby)
{
    Candy remain;
    remain.cnt = candy.cnt % perbaby.cnt;
    return remain;
}

int main()
{
    Candy candy(210);
    Candy baby(25);

    Candy perbaby = candy / baby;
    Candy remain = candy % baby;

    cout << perbaby.cnt << endl;
    cout << remain.cnt << endl;
    return 0;
}

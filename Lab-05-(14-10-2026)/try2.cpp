#include <bits/stdc++.h>

using namespace std;

// Overload * operator in c++

class Rectangle
{
public:
    int length;

    Rectangle(int l = 10)
    {
        length = l;
    }
};

Rectangle operator*(Rectangle &l, Rectangle &b)
{
    Rectangle area;
    area.length = l.length * b.length;
    return area;
}

int main()
{
    Rectangle l(10);
    Rectangle b(7);

    Rectangle area = l * b;

    cout << area.length;
    return 0;
}

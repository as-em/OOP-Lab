#include <bits/stdc++.h>

using namespace std;

// Overload << operator to print an object of a class

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

ostream &operator<<(ostream &PRINT_KORO, Rectangle &obj)
{
    PRINT_KORO << obj.length;
}

int main()
{
    Rectangle l(10);
    Rectangle b(7);

    Rectangle area = l * b;

    cout << area.length << endl;
    cout << area;
    return 0;
}

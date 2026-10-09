#include <bits/stdc++.h>

using namespace std ;

// Write a c++ program implementing a friend function that will compare 3 different private variable from 3 different classes

class A;
class B;
class C;
void compare(A a,B b,C c);


class A {
private :
    int var1;
    friend void compare(A a,B b,C c);

public :
    A(int var1){
        this->var1 = var1; 
    }
};


class B {
private :
    int var2;
    friend void compare(A a,B b,C c);

public :
    B(int var2){
        this->var2 = var2; 
    }
};



class C {
private :
    int var3;
    friend void compare(A a,B b,C c);

public :
    C(int var3){
        this->var3 = var3; 
    }
};



int main() {
    A a(5);
    B b(7);
    C c(9);
    compare(a,b,c);
    return 0;
}





void compare(A a,B b,C c){

    if (a.var1 >= b.var2 && a.var1 >= c.var3) {
        cout << "The largest number is: " << a.var1 << endl;
    } 
    else if (b.var2 >= a.var1 && b.var2 >= c.var3) {
        cout << "The largest number is: " << b.var2 << endl;
    } 
    else {
        cout << "The largest number is: " << c.var3 << endl;
    }
}

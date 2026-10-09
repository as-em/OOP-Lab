#include <bits/stdc++.h>

using namespace std ;

// Write a c++ program implementing a friend function that will 
// add two different length from two different classes & print it in a single unit length.

class L1;
class L2;

void add(L1 a,L2 b);



class L1 {
private :
    double foot , inch;
    friend void add(L1 a,L2 b);

public :
    L1(double f , double i){
        this->foot = f;
        this->inch = i;
    }
};


class L2{
private :
    double meter , cemi;
    friend void add(L1 a,L2 b);
    
public :
    L2(double m,double c){
        this->meter = m;
        this->cemi = c;
    }
};



int main() {
    L1 a(3.25, 39.37);   // 5 foot 6 inch
    L2 b(1, 100);  // 2 meters 30 cm

    add(a, b);
    return 0;
}




// add in cm
void add(L1 a,L2 b){
    
    double cm1 = (a.foot * 12 + a.inch) * 2.54;

    
    double cm2 = (b.meter * 100) + b.cemi;

    
    double total = cm1 + cm2;

    cout << "Total length = " << total << " cm" << endl;

}

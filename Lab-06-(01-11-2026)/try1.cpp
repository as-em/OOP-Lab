
#include <bits/stdc++.h>

using namespace std;


 class Complex{
     public :
     
     int real;
     int img;
     
     Complex(){
         real =0, img = 0;
     }
     Complex(int r,int i){
         real = r; img = i;
     }
     
     void print(){
         cout<<"Number = "<< real <<" + "<< img << "i"; 
     }
 };
 
Complex add (Complex c1,Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img  = c1.img + c2.img;
    
    return c3;
}



int main()
{  
    
    Complex c1(4,6);
    Complex c2(6,4);
    Complex c3;
    
    c3 = add(c1,c2);
    c3.print();

    return 0;
}

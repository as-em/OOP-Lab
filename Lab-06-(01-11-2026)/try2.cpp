#include<bits/stdc++.h>
using namespace std;
class tim{
    public:
    int hour;
    int min;
    int sec;
    tim(){
         min=0; sec =0;  hour=0;
    }
    tim(int h,int T,int s){
        hour=h;
        min=T;
        sec=s;
    }
};
tim add (tim t1 ,tim t2){
    tim t3;
    t3.sec =(t1.sec+t2.sec)%60;
    t3.min =(t1.min+ t2.min +((t1.sec+t2.sec)/60))%60;
    t3.hour=t1.hour+t2.hour+((t1.min+t2.min)/60);
    return t3;
}
int main (){
    tim t1(10,30,40);
    tim t2(5,40,50);
    tim t3 = add(t1,t2);
    cout<<t3.hour<<" Hour "<<t3.min<<" Minites "<<t3.sec<<" Second" ;
    return 0;
}

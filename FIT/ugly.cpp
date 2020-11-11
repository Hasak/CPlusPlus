#include<iostream>
using namespace std;

unsigned nthugly(unsigned x)
{
    unsigned a[x],_2=2,_3=3,_5=5,i=1,i2=0,i3=0,i5=0,r;
    a[0]=1;
    while(x>i){
        r=min(_2,min(_3,_5));
        a[i]=r;
        if(r==_2){_2=a[++i2]*2;}
        if(r==_3){_3=a[++i3]*3;}
        if(r==_5){_5=a[++i5]*5;}
        i++;
        //cout<<r<<endl;
    }
    return r;
}

int main()
{
    cout<<"The 1500'th ugly number is "<<nthugly(1500)<<"."<<endl;
}

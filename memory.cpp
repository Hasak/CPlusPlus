#include<iostream>
using namespace std;

int main()
{
    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    *p=new (int)5;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    return 0;
}

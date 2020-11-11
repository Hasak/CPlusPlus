#include<iostream>
using namespace std;

int main()
{
    int i,j,unospin=0,c=0,op;
    const int pin=4567;
    const int pokusaja=3;
    double pare=134.35,pareunos;


    while(unospin!=pin){
        cout<<"\n Unesi pin (jos "<<pokusaja-c<<" pokusaja): ";
        cin>>unospin;
        c++;
        if(c>=pokusaja){
            cout<<"\n Vas racun je blokiran, pozz"<<endl;
            return 0;
        }
    }
    while(op!=3){
        cout<<"\n Odaberi opciju:\n 1. Stanje\n 2. Dizanje para\n 3. Exit\n\n ";
        cin>>op;
        if(op==1){
            cout<<"\n Stanje: "<<pare<<" KM"<<endl;
        }
        else if(op==2){
            cout<<"\n Koliko: ";
            cin>>pareunos;
            if(pareunos>pare){
                cout<<"\n Zao nam je, nemate toliko para ba\n Idemo ispocetka"<<endl;
            }
            else{
                pare-=pareunos;
                cout<<"\n Svaka cast! Pare ili novac uspjesno isplacen!\n Sada imate "<<pare<<" KM"<<endl;
            }
        }
        else if(op==3){
            cout<<"\n Hvala na koristenju nasih usluga\n Vasa C++ Banka"<<endl;
        }
        else{
            cout<<"\n Pogresan unos, hajmo opet"<<endl;
        }
    }
    return 0;
}

#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    int r,c,auta,voznje,bonus,maxsteps,i,a[10000][6],j,duzine[10000],t,hjoj[10000];
    string b;
    ifstream fin;
    ofstream fout;
    fin.open("e.in");
    fin>>r>>c>>auta>>voznje>>bonus>>maxsteps;
    //cout<<r<<" "<<c<<" "<<auta<<" "<<voznje<<" "<<bonus<<" "<<maxsteps<<endl;
    i=0;
    while(i<voznje*6){
        fin>>a[i/6][i%6];
        i++;
    }
    fin.close();
    for(i=0;i<voznje;i++){
        duzine[i]=abs(a[i][0]-a[i][2])+abs(a[i][1]-a[i][3]);
    }
    for(i=0;i<voznje;i++){
        hjoj[i]=i;
    }
    for(i=0;i<voznje-1;i++){
        for(j=i;j<voznje;j++){
            if(duzine[i]>duzine[j]){
                t=duzine[i];
                duzine[i]=duzine[j];
                duzine[j]=t;

                t=hjoj[i];
                hjoj[i]=hjoj[j];
                hjoj[j]=t;
            }
        }
    }
    /*for(i=0;i<voznje;i++){
        cout<<duzine[i]<<" "<<hjoj[i]<<endl;
    }*/

    /*for(i=0;i<voznje;i++){

    for(j=0;j<6;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }*/
    cout<<endl;
    fout.open("e.out");
    for(i=0;i<auta;i++){
        fout<<voznje/auta<<" ";
        for(j=0;j<voznje/auta;j++){
            fout<<hjoj[i+j*auta]<<" ";
        }
        fout<<endl;
    }
    fout.close();
    cout<<endl;
    cout<<"Program finished"<<endl;
    cout<<endl;
    return 0;
}

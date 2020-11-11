#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int r,c,auta,voznje,bonus,maxsteps,i,a[10000][6],j,inx[10000],duzine[10000],t;
    //bool t[10000];
    string b;
    ifstream fin;
    ofstream fout;
    fin.open("b.in");
    fin>>r>>c>>auta>>voznje>>bonus>>maxsteps;
    //cout<<r<<" "<<c<<" "<<auta<<" "<<voznje<<" "<<bonus<<" "<<maxsteps<<endl;
    i=0;
    while(i<voznje*6){
        fin>>a[i/6][i%6];
        i++;
    }
    fin.close();
    for(i=0;i<voznje;i++){
        //t[i]=0;
        inx[i]=i;
        duzine[i]=a[i][4];
    }

    for(i=0;i<voznje-1;i++){
        for(j=i;j<voznje;j++){
            if(duzine[i]>duzine[j]){
                t=duzine[i];
                duzine[i]=duzine[j];
                duzine[j]=t;

                t=inx[i];
                inx[i]=inx[j];
                inx[j]=t;
            }
        }
    }

    for(i=0;i<voznje;i++){
        cout<<i<<". "<<duzine[i]<<" ["<<inx[i]<<"]\n";
    }

    /*
    for(i=0;i<voznje;i++){
        for(j=0;j<6;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    fout.open("b.out");

    fout.close();
    cout<<endl;
    cout<<"Program finished"<<endl;
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int sirina,visina,i,j,k,kk;
    int redova=4;
    int kocki_u_redu=4;
    cout<<"Unesi sirinu i visinu kocke!"<<endl;
    cin>>sirina>>visina;
    for(i=0;i<redova;i++){
        for(j=0;j<visina;j++){
            for(k=0;k<kocki_u_redu;k++){
                for(kk=0;kk<sirina;kk++){
                    if(i%2==0 && k%2==0 || i%2!=0 && k%2!=0){
                        if(j==0 || j==visina-1 || kk==0 || kk==sirina-1)
                            cout<<"*";
                        else cout<<" ";
                    }
                    else{
                        if(!(j==0 || j==visina-1 || kk==0 || kk==sirina-1))
                            cout<<"*";
                        else cout<<" ";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

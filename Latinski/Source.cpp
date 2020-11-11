#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
int main()
{
    int n;
    char odabir;
    bool a=false;
    string rijec,posnova,nom1,nom2,gen1,gen2,dat1,dat2,aku1,aku2,vok1,vok2,abl1,abl2,ja,mi,ti,vi,on,oni;
    while(1>0)
    {
        system("cls");
        cout<<" _            _     _________  _____  ____  _____   ______   ___  ____   _____"<<endl;
        cout<<"| |          / \\   |  _   _  ||_   _||_   \\|_   _|.' ____ \\ |_  ||_  _| |_   _|"<<endl;
        cout<<"| |         / _ \\  |_/ | | \\_|  | |    |   \\ | |  | (____\\_|  | |_/ /     | |"<<endl;
        cout<<"| |   _    / ___ \\     | |      | |    | |\\ \\| |   _.____`.   |  __'.     | |"<<endl;
        cout<<"| |__/ | _/ /   \\ \\_  _| |_    _| |_  _| |_\\   |_ | \\____) | _| |  \\ \\_  _| |_"<<endl;
        cout<<"|______||____| |____||_____|  |_____||_____|\\____| \\______.'|____||____||_____|"<<endl;
        cout<<endl<<"\nOdaberi\n"<<endl;
        cout<<"1. Deklinacije\n"<<"2. Konjugacije\n"<<"3. Zatvori"<<endl;
        odabir=getch();
        if(odabir=='1')
            while(1>0)
            {
                system("cls");
                cout<<"Odaberi\n"<<endl;
                cout<<"1. Deklinacija\n"<<"2. Deklinacija\n"<<"3. Deklinacija\n"<<"4. Deklinacija\n"<<"5. Deklinacija\n"<<"6. Nazad"<<endl;
                odabir=getch();
                system("cls");
                if(odabir=='1')
                {
                    cout<<"Unesi imenicu\n"<<endl;
                    cin>>rijec;
                    n=rijec.length();
                    if(rijec[n-1]!='a')
                    {
                        cout<<"\nGreska!"<<endl;
                        system("pause");
                        return 0;
                    }
                    posnova=rijec.substr(0,n-1);
                    nom1=posnova+"a";nom2=posnova+"ae";
                    gen1=posnova+"ae";gen2=posnova+"arum";
                    dat1=posnova+"ae";dat2=posnova+"is";
                    aku1=posnova+"am";aku2=posnova+"as";
                    vok1=posnova+"a";vok2=posnova+"ae";
                    abl1=posnova+"a";abl2=posnova+"is";
                    system("cls");
                    cout<<"1. Deklinacija\n"<<endl<<rijec<<"\n\n";
                    cout<<setfill(' ')<<setw(20)<<"Singular"<<setfill(' ')<<setw(18)<<"Plural\n"<<endl;
                    cout<<"Nominativ:  "<<nom1<<setfill(' ')<<setw(19-n)<<" "<<nom2<<endl;
                    cout<<"Genitiv:    "<<gen1<<setfill(' ')<<setw(18-n)<<" "<<gen2<<endl;
                    cout<<"Dativ:      "<<dat1<<setfill(' ')<<setw(18-n)<<" "<<dat2<<endl;
                    cout<<"Akuzativ:   "<<aku1<<setfill(' ')<<setw(18-n)<<" "<<aku2<<endl;
                    cout<<"Vokativ:    "<<vok1<<setfill(' ')<<setw(19-n)<<" "<<vok2<<endl;
                    cout<<"Ablativ:    "<<abl1<<setfill(' ')<<setw(19-n)<<" "<<abl2<<endl<<endl<<endl;
                    system("pause");
                }
                if(odabir=='2' || odabir=='3' || odabir=='4' || odabir=='5')
                {
                    cout<<"\nNismo jos radili\n"<<endl;
                    system("pause");
                }
                if(odabir=='6')
                    break;
            }
        if(odabir=='2')
            while(1>0)
            {
                system("cls");
                cout<<"Odaberi\n"<<endl;
                cout<<"1. Konjugacija\n"<<"2. Konjugacija\n"<<"3. Konjugacija\n"<<"4. Konjugacija\n"<<"5. Nazad"<<endl;
                odabir=getch();
                system("cls");
                if(odabir=='1')
                {
                    cout<<"Unesi glagol\n"<<endl;
                    cin>>rijec;
                    n=rijec.length();
                    if(rijec[n-1]!='e' || rijec[n-2]!='r' || rijec[n-3]!='a')
                    {
                        cout<<"\nGreska!"<<endl;
                        system("pause");
                        return 0;
                    }
                    posnova=rijec.substr(0,n-2);
                    if(posnova[n-3]=='a')
                    {
                        ja=posnova.substr(0,n-3)+"o";
                        a=true;
                    }
                    else
                    ja=posnova+"o";mi=posnova+"mus";
                    ti=posnova+"s";vi=posnova+"tis";
                    on=posnova+"t";oni=posnova+"nt";
                    system("cls");
                    cout<<"1. Konjugacija\n"<<endl<<rijec<<"\n\n";
                    cout<<setfill(' ')<<setw(16)<<"Singular"<<setfill(' ')<<setw(18)<<"Plural\n"<<endl;
                    cout<<"1.      "<<ja;
                    if(a==true)
                        cout<<setfill(' ')<<setw(21-n)<<" "<<mi<<endl;
                    else
                        cout<<setfill(' ')<<setw(20-n)<<" "<<mi<<endl;
                    cout<<"2.      "<<ti<<setfill(' ')<<setw(20-n)<<" "<<vi<<endl;
                    cout<<"3.      "<<on<<setfill(' ')<<setw(20-n)<<" "<<oni<<endl<<endl<<endl;
                    system("pause");
                }
                if(odabir=='2' || odabir=='3' || odabir=='4')
                {
                    cout<<"\nNismo jos radili\n"<<endl;
                    system("pause");
                }
                if(odabir=='5')
                    break;
            }
        if(odabir=='3')
            return 0;
    }
}

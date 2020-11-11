#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    bool prijestupna(int y){
        if(y%4==0)
            if(y%100==0)
                if(y%400==0)
                    return true;
                else return false;
            else return true;
        else return false;
    }

    int dim(int m, int year){
        if(m==2){
            if(prijestupna(year))
                return 29;
            else return 28;
        }
        else if(m==4 || m==6 || m==9 || m==11)
            return 30;
        else return 31;
    }

public:
    Date(){
        day=1;
        month=1;
        year=1997;
    }

    bool datum_normalan(int d, int m, int y){
        if(m<13 && m>0)
            if(d<=dim(m,y) && d>0)
                return true;
            else return false;
        else return false;
    }

    Date(int _day, int _month, int _year){
        if(datum_normalan(_day, _month, _year)){
            day=_day;
            month=_month;
            year=_year;
        }
        else{
            day=1;
            month=1;
            year=1997;
            cout<<"Wrong date"<<endl;
        }
    }

    void setDate(int _day, int _month, int _year){
        if(datum_normalan(_day, _month, _year)){
            day=_day;
            month=_month;
            year=_year;
        }
        else{
            day=1;
            month=1;
            year=1997;
            cout<<"Wrong date"<<endl;
        }
    }

    void showDate(const char* fmt){
        if(*fmt=='.')
            cout<<day<<"."<<month<<"."<<year<<"."<<endl;
        else if(*fmt=='/')
            cout<<month<<"/"<<day<<"/"<<year<<endl;
        else if(*fmt=='-')
            cout<<year<<"-"<<month<<"-"<<day<<endl;
        else
            cout<<"Wrong date format"<<endl;
    }

    void nextDay(){
        day++;
        if(day>dim(month,year)){
            day=1;
            month++;
        }
        if(month>12){
            month=1;
            year++;
        }
    }

    void addDays(int d){
        for(int i=0;i<d;i++)
            nextDay();
    }
};

int main()
{
    Date d1=Date(7,3,1997);
    char *f;
    f=new char('/');

    d1.showDate(f);
    f=new char('.');
    d1.setDate(29,2,2001);
    d1.showDate(f);
}

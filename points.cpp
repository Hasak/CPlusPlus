#include<iostream>
using namespace std;
int main()
{
    int n,i,score=0,total=0,temp; // Declaration
    double result;
    cout<<"Enter N: ";cin>>n; // Entering N
    for(i=0;i<n;i++){ // Ask question N times
        cout<<endl<<"Points earned: ";cin>>temp; // Asking and entering into temporary variable
        score+=temp; // This is same as score=score+temp; Just adding temp to previous value of score
        cout<<"Points possible: ";cin>>temp; // Same here
        total+=temp;
    }
    result=100.0*score/total; // Calculating percentage. We have to use .0 at the end for casting to double. Otherwise it will compute as integer
    cout<<endl<<"Total total: "<<result<<"%"<<endl; // Printing out
    return 0; // Sretno ti ^^
}

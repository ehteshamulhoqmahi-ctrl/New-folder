#include<iostream>
using namespace std;

int main(){
    int p,year;
    float per_of_int;
    cout<<"Enter the principle: ";
    cin>>p;
    cout<<"Enter the percentage of interest: ";
    cin>>per_of_int;
    cout<<"Enter the year: ";
    cin>>year;

    float interest;
    interest=float(p)*(per_of_int/100.00);

    cout<<"Your interest is: "<<interest<<endl;
}
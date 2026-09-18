#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    int x=num;
    while(num!=0){
        int x=num%10;
        rev=rev*10+x;
        num=num/10;
    }
    if(x==rev){
        cout<<"The number is a palidrome.";
    }
    else{
        cout<<"The number is not a palidrome.";
    }

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Number to check: ";
    cin>>x;
    bool isprime=x>1;
    for (int i=1;i*i<=x && isprime;i++)
    {
        if(x%i==0){
            isprime=false;
            break;
        }
    }
    cout<<"The number is "<<(x?"prime\n":"not prime\n");
    

     return 0;  
}
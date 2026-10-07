#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int x=10;
    int count=0;
    while(n>0){
        if(n%x==7||n%x==4){
            count++;
        }
        n=(n-(n%x))/x;
    }
    if(count==7||count==4)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;

return 0;
}
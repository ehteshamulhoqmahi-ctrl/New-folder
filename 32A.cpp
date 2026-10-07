#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    vector<int>soldier(n);
    for(int i=0;i<n;i++){
        cin>>soldier[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(soldier[i]-soldier[j])<=d){
                count++;
            }
        }
    }
    cout<<count*2<<endl;
return 0;
}
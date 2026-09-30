#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    int max=0,min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];    
    }
    cout<<"max= "<<max<<"\nmin= "<<min;

    return 0;
}
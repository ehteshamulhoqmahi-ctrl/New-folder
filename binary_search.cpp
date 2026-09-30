#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    cout<<"Enter your search number: ";
    int x;
    cin>>x;
    int low=0,high=9;
    int mid;
   while (low <= high) {
    mid = low + (high - low) / 2;

    if (arr[mid] == x) {
        cout << "Found at index " << mid;
        return 0;
    }
    else if (arr[mid] > x) {
        high = mid - 1;
    }
    else {
        low = mid + 1;
    }
}
    cout<<"Not Found. ";
    return 0;
}
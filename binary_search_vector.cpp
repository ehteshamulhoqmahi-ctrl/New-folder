#include<iostream>
#include<vector>
using namespace std;

void binary_search(const vector<int>&vec, int target){
    int low = 0;
    int high = vec.size() - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(vec[mid]==target){
            cout<<"Element found at index "<<mid<<endl;
            return;
        }
        if(vec[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<"Element not found"<<endl;
    
}

int main(){
    const vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    int target;
    cin>>target;
    binary_search(vec, target);
}
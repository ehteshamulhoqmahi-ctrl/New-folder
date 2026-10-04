#include<iostream>
#include<vector>
using namespace std;


void bubble_sort(vector<int>& vec){
    int n = vec.size();
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> vec={64, 34, 25, 12, 22, 11, 90};
    bubble_sort(vec);
    cout<<"Sorted array: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int>& vec){
    int n = vec.size();
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(vec[j]<vec[min_index]){
                min_index = j;
            }
        }
        swap(vec[i],vec[min_index]);
    }
}

int main(){
    vector<int> vec={64, 25, 12, 22, 11};
    selection_sort(vec);
    cout<<"Sorted array: ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
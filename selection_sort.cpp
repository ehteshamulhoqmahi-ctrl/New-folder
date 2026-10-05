#include<iostream>
#include<vector>
using namespace std;

int from[1000];
int to[1000];

int selection_sort(vector<int>& vec){
    int n = vec.size();
    int count = 0;
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(vec[j]<vec[min_index]){
                min_index = j;
                swap(vec[i],vec[min_index]);
        count++;
        from[i]=i;
        to[i]=min_index;
            }
        }
        
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int temp;

    temp=selection_sort(vec);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    for(int i=0;i<temp;i++){
        cout<<from[i]<<" "<<to[i]<<endl;
    }
    cout<<endl;
    return 0;
}
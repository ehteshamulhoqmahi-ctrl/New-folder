#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec{1,2,3,4,5,6,7};
    /*cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"size after push back="<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after pop back="<<vec.size()<<endl;   */

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(3)<<endl;


    /*for(int i : v){  //for each loop//
        cout<<i<<endl;

    }
    vector<char>vec{'a','b','c'};

    for(char i : vec){
        cout<<i<<endl;
    }*/
    
    return 0;
}
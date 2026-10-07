#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
   vector<vector<int>>vec(5,vector<int>(5,0));
   int move=0;
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        cin>>vec[i][j];
        if(vec[i][j]==1){
            move=abs(i+1-3)+abs(j+1-3);
        }
      }
   }
   cout<<move<<endl;
return 0;

}
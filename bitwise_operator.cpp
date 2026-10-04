#include<iostream>
using namespace std;

int main(){
    int a=4,b=8;
    cout<<(a & b)<<endl; // bitwise AND
    cout<<(a | b)<<endl; // bitwise OR
    cout<<(a ^ b)<<endl; // bitwise XOR
    cout<<(~a)<<endl; // bitwise NOT
    cout<<(a << 1)<<endl; // left shift
    cout<<(a >> 1)<<endl; // right shift
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the value of a:"; cin >> a;
    cout<<"Enyter the value of b:"; cin>>b;
    int temp = a;
    a=b;
    b=temp;
    cout<<"After swap"<<endl;
    cout<<"The value of a:"<<a<<endl<<"The value of b:"<<b<<endl;
    return 0;
}

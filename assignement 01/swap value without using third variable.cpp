#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "Enter the value of a & b :" <<endl;
    cin>>a>>b;
    cout<<"before swaping the value of "<<"a= " <<a << " & " << "b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping the value of "<<"a= " <<a << " & " << "b= "<<b<<endl;
    return 0;
}

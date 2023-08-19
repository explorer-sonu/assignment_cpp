#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "Enter the value of a & b :" <<endl;
    cin>>a>>b;
    cout<<"before swaping the value of "<<"a= " <<a << " & " << "b= "<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"After swaping the value of "<<"a= " <<a << " & " << "b= "<<b<<endl;
    return 0;
}

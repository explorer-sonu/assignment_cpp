#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a & b:"<<endl;
    cin>>a >>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a is = "<< a <<" b is = "<< b;
    return 0;
}

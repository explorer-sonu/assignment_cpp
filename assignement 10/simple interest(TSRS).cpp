#include<iostream>
using namespace std;
int simple_intrest( int a,int b,int c)
{
    int si;
    si = a*b*c/100;
    return si;
}
int main()
{
    int p,r,t,i;
    cout<< " Enter the princple amount "<< endl;
    cin>>p;
    cout<< " Enter the rate "<< endl;
    cin>>r;
    cout<< " Enter the Time "<< endl;
    cin>>t;
    i = simple_intrest(p,r,t);
    cout<< " Simple intrest is "<< i <<endl;
    return 0;
}

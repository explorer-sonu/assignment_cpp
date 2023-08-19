#include<iostream>
using namespace std;
int main()
{
   int a=-1,b=1,fib,n;
   cout <<  "Enter the value of N:";
   cin >> n;
   for(int i=1;i<=n;i++){
    fib=a+b;
    cout<<fib<< endl;
    a=b;
    b=fib;
   }
}

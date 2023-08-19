#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
     return fact;
}
int main()
{
    int n,x;
    cout<< "enter the value of n"<< endl;
    cin>>n;
    x = factorial(n);
    cout<< "Factorial of "<< n << " is "<< x <<endl;
    return 0;
}

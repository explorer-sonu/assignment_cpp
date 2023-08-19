#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<< "Enter the value of N:"<<endl;
    cin>>n;
    rem = n % 10;
    sum = sum + rem;
    n = n / 10;
    rem = n % 10;
    sum = sum + rem;
    n = n / 10;
    rem = n % 10;
    sum = sum + rem;
    n = n / 10;
    cout<<"sum of number is = "<<sum<<endl;
    return 0;
}

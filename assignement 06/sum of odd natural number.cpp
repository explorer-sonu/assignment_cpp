#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<< "Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum = sum + i*2-1;
    }
    cout<< "sum of odd is "<< sum;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,rem,x;
    cout<<" enter the value of N: "<<endl;
    cin>>n;
    x = n/10;
    rem = n%10;
    n = rem*100+x;
    cout<<n<<endl;
    return 0;
}

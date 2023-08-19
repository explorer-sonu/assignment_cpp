#include<iostream>
using namespace std;
int odd(int n)
{
    for(int i=1;i<=n;i++){
        cout<< i*2-1<< " " ;
    }
    return 0;
}
int main()
{
    int num,x;
    cout<< "Enter the value of Num"<< endl;
    cin>>num;
    x = odd(num);
}

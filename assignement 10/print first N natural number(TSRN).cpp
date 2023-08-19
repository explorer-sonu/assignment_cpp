#include<iostream>
using namespace std;
int natural(int num)
{
    for(int i=1;i<=num;i++){
        cout<< i << " ";
    }
    return 0;
}
int main()
{
    int n;
    cout<< " Enter the value of N "<< endl;
    cin>>n;
    int x = natural(n);
    return 0;
}

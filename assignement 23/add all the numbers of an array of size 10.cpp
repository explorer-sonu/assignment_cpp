#include<iostream>
using namespace std;
int main()
{
    int sum=0,arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=10;i++){
        sum = sum+i;
    }
    cout<<"sum of all element is = "<<sum;
    return 0;
}

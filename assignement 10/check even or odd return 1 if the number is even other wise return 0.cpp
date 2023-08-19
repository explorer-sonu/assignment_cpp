#include<iostream>
using namespace std;
int check(int num)
{
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,x;
    cout<< " Enter the value on N "<< endl;
    cin>>n;
    x = check(n);
    cout<< " Print "<< x << endl;
    return 0;
}

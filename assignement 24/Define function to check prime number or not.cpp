#include<iostream>
using namespace std;
void checkprime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"The number "<< n <<" is a prime number:"<<endl;
    }
    else{
         cout<<"The number "<< n <<" is not a prime number:"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    checkprime(n);
}

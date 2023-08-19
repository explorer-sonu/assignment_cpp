#include<iostream>
using namespace std;
int main()
{
    int n,prev=-1,cur=1,next;
    cout << "Enter the value of N:";
    cin>>n;
    for(int i=1;i<=n;i++){
        next=prev+cur;
        prev=cur;
        cur=next;
    }
    cout << cur << endl;
}

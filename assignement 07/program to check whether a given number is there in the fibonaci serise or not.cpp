#include<iostream>
using namespace std;
int main()
{
    int n,pre=-1,cur=1,next=0;
    cout << "Enter the Value of N:";
    cin >> n;
    for(int i=1;1;i++){
        next=pre+cur;
        pre=cur;
        cur=next;
        if(next == n){
            cout << "Number Found:";
            break;
        }
        if(next > n){
            cout << "Number Not Found:";
            break;
        }
    }
}

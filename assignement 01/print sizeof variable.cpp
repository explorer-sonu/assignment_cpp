#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(char);
    d = sizeof(double);
    cout<<" Size of int = "<< int(a) <<" Size of float = "<<int(b) <<" Size of char = "<<int(c) <<" Size of double = "<<int(d)<<endl;
    return 0;
}

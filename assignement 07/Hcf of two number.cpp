#include<iostream>
using namespace std;
int main()
{
    int a,b,hcf;
    cout << "Enter the value of a & b:";
    cin >> a >> b;
    int min = a < b ? a : b;
    for(int i=1;i<=min;i++){
        if((a%i==0 )&&(b%i==0))
            hcf=i;
    }
     cout<< "Hcf is "<< hcf << endl;
     return 0;

}

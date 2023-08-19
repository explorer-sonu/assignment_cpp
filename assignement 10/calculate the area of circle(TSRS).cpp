#include<iostream>
using namespace std;
float area(float r)
{
    float PI=3.14,a;
    a = PI*r*r;
    return a;
}
int main()
{
  int n;
  cout<< " Enter the value of N: "<<endl;
  cin>>n;
  float x;
  x=area(n);
  cout<< " Area of Circle is "<< x <<endl;
}

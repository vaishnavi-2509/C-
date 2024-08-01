#include<iostream>
using namespace std;
int fibonacci(int n)
{
//   if(n==1)
//   return 0;
//    else if(n==2)
//   return 1;
if (n==0 || n==1)
return n;
  else 
  return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    int num=fibonacci(n);
    cout<<"fibonacci="<<num;
}
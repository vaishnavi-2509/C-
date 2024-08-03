#include<iostream>

using namespace std;
int sum_array(int *arr,int n)
{
    int sum=0;
    if(n==0)
    {
       return sum;
    }
    else if(n==1)
    {
        sum=arr[0];
        return sum;
    }
    else
    {
     return arr[n-1]+sum_array(arr,n-1);   
    }
}
int main()
{
int arr[10];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sum=sum_array(arr,n);
cout<<sum;
}
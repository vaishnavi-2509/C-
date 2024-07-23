#include<iostream>
using namespace std;

int arr_unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
      ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[6]={1,2,3,2,1};
    int a=arr_unique(arr,6);

    cout<<"Unique Element="<<a;
}
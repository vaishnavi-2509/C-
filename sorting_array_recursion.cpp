#include<iostream>

using namespace std;

bool sorting(int *arr,int n)
{
    int i=0;
    if(n==0 || n==1)
    return true;

    if(arr[0]>arr[1])
    return false;

    else
    {
     bool ans=sorting(arr+1,n-1);
         return ans;
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
bool ans=sorting(arr,n);
if(ans)
{
    cout<<"Array is sorted";
}
else
{
    cout<<"Array is not sorted";
}
}
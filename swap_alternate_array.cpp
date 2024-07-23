#include<iostream>
using namespace std;

void  arr_swap(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i+1<n)
        swap(arr[i],arr[i+1]);
        i++;

    }
}

 void arr_print(int arr[],int n)
 {
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl; 
 }

int main()
{
    int arr[6]={1,2,3,4,5,6};
    arr_swap(arr,6);
    arr_print(arr,6);
}
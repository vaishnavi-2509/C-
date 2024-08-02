#include<iostream>
#include<string.h>
using namespace std;

void recursion(char str[],int index,int n) 
{ 
    if(n==index)
    {
       return;
    }
    char temp=str[index];
    recursion(str,index+1,n);
    cout<<temp;
}
int main()
{
    char str[100]="apple";
    int len=strlen(str);
    recursion(str,0,len);

}
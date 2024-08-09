#include<iostream>
using namespace std;

void reverse(int *arr,int *rev,int i, int j)
{
    if(i>j) return;
    rev[i]=arr[j];
    rev[j]=arr[i];
    return reverse(arr,rev,++i,--j);
}
int main ()
{
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    int* result=new int[n];
    reverse(arr,result,i,j);
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    delete[] result;
}


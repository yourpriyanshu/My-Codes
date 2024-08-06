//You buy the share on the day when price is less than current day

// #include <iostream>
// using namespace std;
// int* wait(int arr[],int n)
// {
//     int* res=new int[n];
//    int jump=0;
//    for(int i=0;i<n;i++)
//    {
//     res[i]=-1;
//     for(int j=i+1;j<n;j++)
//     {
//         jump++;
//         if(arr[j]<arr[i])
//         {
//            res[i]=jump;break;   
//         }
//     }
//     jump=0;
//    }
//    return res;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;
//     int* arr=new int[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Input Array : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int* res=wait(arr,n);
//     cout<<" output : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<res[i]<<" ";
//     }
//     delete[] arr;
//     delete[] arr;
// }

//with vector

#include <iostream>
#include<vector>
using namespace std;

vector<int> wait(int arr[], int n)
{
    vector<int> res(n);
    for(int i=0;i<n;i++)
    {
        int  jump=0;
        res[i]=-1;
        for(int j=i+1;j<n;j++)
        {
            jump++;
            if(arr[j]<arr[i])
            {
                res[i]=jump;break;
            }
        }
        
    }
    return res;
}

int main()
{
    int n,element;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Input Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    vector<int> res=wait(arr.data(),n);
    cout<<"Output Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}
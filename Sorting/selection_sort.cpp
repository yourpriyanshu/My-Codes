class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        int len=sizeof(arr)/sizeof(arr[i]);
        selectionSort(arr,len);
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
      for(int i=0;i<n-1;i++)
      {
          int mini=i;
          for(int j=i;j<n;j++)
          {
              if(arr[j]<arr[mini])
              {
                  mini=j;
              }
          }
          swap(&arr[mini],&arr[i]);
      }
    }
};
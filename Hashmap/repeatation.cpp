// Frequencies of Limited Range Array Elements

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        unordered_map<int,int> m;
        for(auto i:arr)
        m[i]++;
        for(int i=0;i<arr.size();i++)
        arr[i]=m[i+1];
    }
};
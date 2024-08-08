class Solution {
  public:
  int count=0;
    void printNos(int N) {
        // code here
        if(N == 0 ) return;
        count=N;
        cout<<count<<" ";
        printNos(N-1);

    }
};
//Print GFG N times using recursion
class Solution {
  public:
  int count=0;
    void printGfg(int N) {
        // Code here
        
        if(count == N) return;
        cout<<"GFG"<<" ";
        count++;
        printGfg(N);
    }
};
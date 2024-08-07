//Print Numbers using recursion
class Solution{
    public:
    //Complete this function
    int count=0;
    void printNos(int N)
    {
        //Your code here
        count++;
        cout<<count<<" ";
        if(count<N) printNos(N);
        return;
    }
};
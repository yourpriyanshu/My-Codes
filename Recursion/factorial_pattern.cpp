// A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.
// Input: n = 6
// Output: 1 2 6
// Explanation: The first three factorial numbers are less than equal to n but the fourth factorial number 24 is greater than n. So we print only first three factorial numbers.

class Solution {
  public:
  long long factorial=1,i=1;
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> result;
        factorial*=i;
        if(factorial>n) return result;
        result.push_back(factorial);
        i++;
        return factorialNumbers(n);
    }
};
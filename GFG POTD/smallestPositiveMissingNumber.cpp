//You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing 
number is 6.//
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        set<int>s;
        for(int i=0;i<n;i++)
        s.insert(arr[i]);
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            return i;
        }
       return n+1;
    } 
};

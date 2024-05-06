#include<iostream>

using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long sum=0;
        long maxi=arr[0];
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	bool checkTriplet(int arr[], int n) {
	    // code here
	    
	      for (int i = 0; i < n; i++) {
            arr[i] = arr[i] * arr[i];
        }
 
        unordered_set<int> squaredValues(arr, arr + n);
 
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sumOfSquares = arr[i] + arr[j];
                if (squaredValues.find(sumOfSquares) != squaredValues.end()) {
                    return true; 
                }
            }
        }
 
        return false;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

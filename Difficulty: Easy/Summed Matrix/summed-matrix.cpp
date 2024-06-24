//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        // int count = 0;
        // for(int i = 1 ; i <= n ; i++){
        //     for(int j = 1 ; j <= n ; j++){
        //         if(i+j == q)count++;
        //     }
        // }
        if(q < 2 || q > 2*n)return 0;
        if(q > n+1){
            return 2*n - q + 1;
        }
        else{
            return q - 2 + 1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends
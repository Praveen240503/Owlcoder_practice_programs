//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string d = "", s1 = s;
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j <= n; j++) {
                if(s1[j] == '1') d += "10";
                else d+="01";
            }
            s1 = d;
            d = "";
            // cout<< s1 <<"\n";
        }
        // cout<<d;
        return s1[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
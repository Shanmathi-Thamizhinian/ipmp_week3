//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long sN=(n*(n+1))/2;
        long long s2N=(n*(n+1)*(2*n+1))/6;
        vector<int> ans;
        long long s=0,s2=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            s2+=(long long)arr[i]*(long long)arr[i];
        }
        long long diff=s-sN;
        long long sr=s2-s2N;
        long long sum=sr/diff;
        long long tr=(diff+sum)/2;
        ans.push_back((int)tr);
        ans.push_back((int)sum-tr);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends

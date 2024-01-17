//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int N) {
    long long count=0,prev=0;
    if(A[0]>0) count=1;
    for(int i=1;i<N;i++){
        if(A[i-1]>0 && A[i]>0){
           count++;
        }
        else if(A[i-1]<0 && A[i]>0){
            count=1;
        }
        else if(A[i-1]<0 && A[i]<0){
            count=0;
        }
        prev=max(count,prev);
    }
    return prev;
}

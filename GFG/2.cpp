//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector <vector<int>> arr, int n, int m) {
	    
	    int maxcount=INT_MIN;
	    int rowindex=0,count;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        if(count>maxcount)
	        {
	            maxcount=count;
	            rowindex=i;
	           
	        }
	    }
	    if(maxcount==0)//understood why maxcount taken instead of count
	    //because count=0 for every row whereas maxcount is not
	    {
	        return -1;
	    }
	    return rowindex;
	    
	    
	    // code here
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

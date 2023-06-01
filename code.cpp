#include <bits/stdc++.h>
using namespace std;
int rowwithmax1(vector<vector<int>> arr, int n , int m){
    int prev =0 , ans = -1;
    for(int i=0;i<n;i++){
        int low = 0;
        int high = m-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(arr[i][mid]==1){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        if(arr[i][low]==1){
            if(m-low>prev){
                ans = i;
                prev = m-low;
            }
        }
        else{
            if(m-low-1>prev){
                ans = i;
                prev = m-low-1;
            }
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>> arr[i][j];
            }
        }
        int ans = rowwithmax1(arr,n,m);
    }
    return 0;
}
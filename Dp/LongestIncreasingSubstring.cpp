#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(50, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i]=1;
        for (int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        ans = max(ans, dp[i]);
        
    }
    
    cout << ans << endl;
    return 0;
}
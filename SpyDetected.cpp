#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        vector<int> arr;
        while(n--){
            cin >> a;
            arr.push_back(a);
        }
        if(arr[0]!=arr[1]) {
            if(arr[0] == arr[2]) cout << 2 << endl;
            else cout << 1 << endl;
        }
        else{
            for (int i = 2; i < arr.size(); i++)
            {
                if(arr[i-1] != arr[i]) cout << i+1 << endl;
            }
            
        }
    }
    

    return 0;
}
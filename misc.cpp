#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool ifContains(string s, int index){
    for(int i = index; i<index+5; i++){
        if(s[i] == '?') return true;
    }
    return false;
}
bool isPal(string s, int index){
    int j = index+4;
    for(int i = index; i<=j; i++){
        if(s[i]!= s[j]) return false;
    }
    return true;
}


int main(){
   ll t, x=1;
   cin >> t;
   while (t--)
   {
       int n;cin >> n;
       string s;
       cin >> s;
       if(s.size()<5){
           cout << "Case #" << x << ": " << "POSSIBLE" << endl; 
       }
       else{
           bool ans = true;
           for(int i=0; i<s.size()-4; i++){
               bool con = ifContains(s, i);
               if(!con){
                   bool pal = isPal(s, i);
                    if(pal) {
                        cout << "Case #" << x << ": " << "IMPOSSIBLE" << endl;
                        ans = false;
                        break;
                    }
               }
               else{
                   while(s[i] != '?'){
                       i++;
                   }
               }
           }
           if(ans){
               cout << "Case #" << x << ": " << "POSSIBLE" << endl;
           }
       }
       x++;
   }
   
    return 0;
}
// cout << "Case #" << x << ": " << "IMPOSSIBLE";
// cout << "Case #" << x << ": " << n;
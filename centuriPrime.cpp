#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=0;
    cin >> t;
    while (t--)
    {
        string kingDom;
        cin >> kingDom;
        char l = kingDom[kingDom.size()-1];
        if(l =='A' or  l =='E' or l == 'I' or  l =='O' or l =='U' or  l =='a' or l == 'e' or l =='i' or l =='o' or l == 'u' )
        {
            cout << "Case " << "#" << i+1 << ": " << kingDom << " is ruled by Alice." << endl;
        }
        else if(l == 'y' or l == 'Y'){
            cout << "Case " << "#" << i+1 << ": " << kingDom << " is ruled by nobody." << endl;
        }
        else{
            cout << "Case " << "#" << i+1 << ": " << kingDom << " is ruled by Bob." << endl;
        }
        i++;
        
    }
    

    return 0;
}
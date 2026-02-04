#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n < 5){
            cout << -1 << "\n";
            continue;
        }
        vector<int> evens, odds;
        for(int i = 2; i <= n; i += 2){
            if(i != 4) evens.push_back(i);
        }
        for(int i = 1; i <= n; i += 2){
            if(i != 5) odds.push_back(i);
        }
        for(int x : evens) cout << x << " ";
        cout << 4 << " " << 5 << " ";
        for(int x : odds) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
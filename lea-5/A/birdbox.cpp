#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int o;
    cin >> o;

    map<string, int> cnt;
    for(int i = 0; i < o; i++){
        string m;
        cin >> m;
        cnt[m]++;
    }

    cout << fixed << setprecision(2);
    for(auto &p : cnt){
        cout << p.first << " " << (p.second * 100.00 / o) << "\n";
    }

    return 0;
}
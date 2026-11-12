#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int p[3];
        cin >> p[0] >> p[1] >> p[2];
        bool ok = false;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(i == j) continue;
                int q[3] = {p[0], p[1], p[2]};
                q[i]--;
                q[j]++;
                if(q[0] == q[1] && q[1] == q[2]) ok = true;
            }
        }
        cout << (ok ? "yes" : "no") << "\n";
    }
}
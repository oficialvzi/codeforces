#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--){
        string a, b;
        cin >> a >> b;

        bool ok = (a.size() == b.size());
        if (ok){
            int f[26], g[26];
            fill(f, f + 26, -1);
            fill(g, g + 26, -1);
            
            for(auto i = 0; i < a.size() && ok; i++){
                int x = a[i] - 'a', y = b[i] - 'a';
                if (f[x] == -1 && g[y] == -1){
                    f[x] = y;
                    g[y] = x;
                }
                else if (f[x] != y || g[y] != x){
                    ok = false;
                }
            }
        }
        cout << (ok ? "sim" : "nao") << "\n";
    }
    return 0;
}
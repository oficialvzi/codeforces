#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> linhas(26,0);

    while(n--){
        string s;
        cin >> s;
        set<char> letras(s.begin(), s.end());
        for(char c : letras){
            linhas[c - 'A']++;
        }
    }

    cout << *max_element(linhas.begin(), linhas.end()) << "\n";
    return 0;
}

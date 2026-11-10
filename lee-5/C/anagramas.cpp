#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string r, s;
        cin >> r >> s;

        //conta quantas vezes cada letra aparece em cada palavra
        vector<int> contR(256, 0), contS(256, 0);

        for(int i = 0; i < r.size(); i++){
            contR[(unsigned char)r[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            contS[(unsigned char)s[i]]++;
        }

        //é anagrama se as contagens forem iguais
        if(contR == contS){
            cout << "ANAGRAMAS" << "\n";
        }else{
            cout << "DIFERENTES" << "\n";
        }
    }
}

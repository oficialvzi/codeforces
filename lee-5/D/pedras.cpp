#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string c, p;
        cin >> c >> p;

        set<char> catalogo;
        for(int i = 0; i < c.size(); i++){
            catalogo.insert(c[i]);
        }

        int qnt = 0;
        for(int i = 0; i < p.size(); i++){
            if(catalogo.count(p[i]) > 0){
                qnt++;
            }
        }

        cout << "Contem " << qnt << " pedras negociaveis" << "\n";
    }
}

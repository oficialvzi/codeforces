#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    //o set nao deixa repetir e ja guarda tudo em ordem alfabetica
    set<string> itens;

    while(a--){
        int p;
        cin >> p;

        while(p--){
            string s;
            cin >> s;

            if(itens.count(s) > 0){
                cout << s << " ja tem" << "\n";
            }else{
                itens.insert(s);
                cout << "adicionando " << s << "\n";
            }
        }
    }

    cout << "Itens do churrasco:" << "\n";
    for(string s : itens){
        cout << s << "\n";
    }
}

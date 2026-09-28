#include <bits/stdc++.h>
using namespace std;

//compara as pecas so pelo tamanho do nome
bool comparar(const string& a, const string& b){
    return a.size() < b.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> pecas(n);
        for(int i = 0; i < n; i++){
            cin >> pecas[i];
        }

        //stable_sort mantem a ordem da entrada quando dois nomes tem o mesmo tamanho
        stable_sort(pecas.begin(), pecas.end(), comparar);

        for(int i = 0; i < n; i++){
            if(i == n - 1){
                cout << pecas[i];
            }else{
                cout << pecas[i] << " ";
            }
        }
        cout << "\n";
    }
}

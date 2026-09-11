#include <bits/stdc++.h>
using namespace std;

int main(){
    // optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while(cin >> n && n != -1){
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        if (n == 1){ //se apenas tiver um número, ele é o desafortunado
            cout << v[0] << "\n";
            continue;
        }

        sort(v.begin(), v.end()); //colocar o vetor em ordem

        //percorrer tudo um a um, mas apenas fazer alguma quando o indice for ímpar
        for(int i = 1; i < n; i++){
            if(i % 2 != 0){ //se for impar
                // se o numero que estou for igual ao anterior, imprimir que o anterior é o diferente
                if(v[i] != v[i-1]){
                    cout << v[i-1] << "\n";
                    break;
                //se não, significa que o desafortunado é o último número
                }else if (i == n - 2){
                    cout << v[n-1] << "\n";
                    break;
                }
            }
        }
    }
}
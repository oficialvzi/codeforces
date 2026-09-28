#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> precos(n);
    for(int i = 0; i < n; i++){
        cin >> precos[i];
    }

    //ordena os precos pra poder usar busca binaria
    sort(precos.begin(), precos.end());

    int p;
    cin >> p;

    while(p--){
        int q;
        cin >> q;

        //upper_bound acha o primeiro cafe que custa MAIS que q
        //entao todos antes dele da pra comprar
        int qnt = upper_bound(precos.begin(), precos.end(), q) - precos.begin();

        cout << qnt << "\n";
    }
}

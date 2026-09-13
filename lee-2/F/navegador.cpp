#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<string> historico;
    string atual = "pagina em branco";

    while(n--){
        string s;
        cin >> s;

        if(s == "<"){
            if(historico.empty()){
                atual = "pagina em branco";
            }else{
                atual = historico.top();
                historico.pop();
            }
       }else{
        historico.push(atual);
        atual = s;
       }
        
        cout << atual << "\n";
    }
}
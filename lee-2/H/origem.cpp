#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    cin >> a;

    stack<string> sonhos;

    while (a--){
        string s;
        cin >> s;

        if(s == "infiltrar"){
            string nome;
            cin >> nome;

            sonhos.push(nome);
        }else if(s == "chute"){
            if(!sonhos.empty()){
                sonhos.pop();
            }
        }else{
            if (sonhos.empty()){
                cout << "acordado" << "\n";
            }else{
                cout << "dentro do sonho de " << sonhos.top() << "\n";
            }
        }
    }
}
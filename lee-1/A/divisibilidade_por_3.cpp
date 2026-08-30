#include <iostream>

int main(){
    //optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int D;
    std::string N;
 

    while (std::cin >> D && D != -1){
        std::cin >> N;
        
        int soma = 0;

        for (int i = 0; i < D; i++){
            soma += N[i] - '0';
        }

        std::cout << soma << " " << (soma % 3 == 0 ? "sim" : "nao") << '\n';
    }

    return 0;
}
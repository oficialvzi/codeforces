#include <iostream>

int main(){
    // optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long D;

    while(std::cin >> D && D != -1){
        std::string N;
        std::cin >> N;

        long long P = 0, I = 0; //pares e impares
        for(size_t i = 0; i < N.size(); i++){
            int digito = N[i] - '0'; 
            if (i % 2 == 0){
                P += digito;
            }else{
                I += digito;
            }
        }
        long long S = P - I; //todos os pares - todos os impares do numero
        //se o resultado da soma for divisivel por 11, o numero original é divisível por 11
        std::string T = (S % 11 == 0) ? "sim" : "nao";

        std::cout << N << ": " << P << " - " << I << " = " << S << " - " << T << '\n';
    
    }

    return 0;
}
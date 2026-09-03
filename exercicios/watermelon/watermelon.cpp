#include <iostream>

int main(){
    int a = 0;
    std::cin >> a;

    if(a == 0 || a == 2){
        std::cout << "NO" << "\n";
    }else if(a % 2 == 0){
        std::cout << "YES" << "\n";
    }else{
        std::cout << "NO" << "\n";
    }
}
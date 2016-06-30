#include <iostream>
#include <cstdio>
void ConvertToBinary(int);

int main(){
    int x;
    std::cout << "Enter the value you wish to convert to binary: " << std::endl;
    std::cin >> x;
    std
    ConvertToBinary(x);
    return 0;
}


void ConvertToBinary(int n ){
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    printf("%d", n % 2);
}

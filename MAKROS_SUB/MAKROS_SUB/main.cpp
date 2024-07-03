//
//  main.cpp
//  MAKROS_SUB
//
//  Created by Anastasiya Charykova on 03.07.2024.
//

#include <iostream>


// Определение макроса SUB для вычитания чисел (псевдофункция)
#define SUB(x, y) ((x) - (y))

int main() {
    int a = 6;
    int b = 5;
    int c = 2;

    // Использование макроса SUB
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << SUB(a, b + c) * c << std::endl;

    return 0;
}


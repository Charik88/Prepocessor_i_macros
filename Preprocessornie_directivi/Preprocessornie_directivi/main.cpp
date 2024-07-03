//
//  main.cpp
//  Preprocessornie_directivi
//
//  Created by Anastasiya Charykova on 03.07.2024.
//

#include <iostream>
#define MODE 1 // определяем идентификатор MODE со значением 1
#ifndef MODE // если он не определен
#error "MODE не определена." // выводим ошибку
#endif

// функция ADD, которая складывает два числа
#if MODE == 1
int ADD (int x , int y){
    return x + y;
}
#endif

int main(int argc, const char * argv[]) {
    // проверка значения MODE
#if MODE == 0
    std::cout << "Работаю в режиме тренировки!" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int a, b;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std:: cout << "Результат сложения: " << ADD(a, b)<< std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы. " << std::endl;

#endif
    return 0;
}

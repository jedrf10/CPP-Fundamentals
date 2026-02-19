#include <iostream>

int main ()
{

    long number;
    int pasos = 0;

    std::cout << "Ingresa un numero entero positivo: " << std::endl;
    std::cin >> number;

    if (number <= 0)
    {
    std::cout << "El numero que ingresaste no es valido" << std::endl;
    
    return 1;
    } 

    while (number != 1)
    {

        std::cout << number << std::endl;

        if (number % 2 == 0)
        {

            number = number / 2;

        } else {

            number = number * 3 + 1;
        }   

        pasos++;

    }

    std::cout << "1" << std::endl;
    std::cout << "Pasos = " << pasos << std::endl;


    return 0;
}
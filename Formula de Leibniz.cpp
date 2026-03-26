#include <iostream>

int main (){

    double pi = 0;
    long n;
    double div = 1;

    std::cout << "Cuantos numeros de interacciones deseas?" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++){

        if (i % 2 == 1)

        pi -= (1. / div);

        else

        pi += (1. / div);

    div += 2.;        


    }

    std::cout.precision(20);

    std::cout << "El valor de PI es: " << (pi * 4) << std::endl;


    return 0;
}
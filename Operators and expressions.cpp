#include <iostream>

using namespace std;

	int main (void){
		
		int i, j, k;
		
		cout << "Ingresa un valor para i: " << endl;
		cin >> i;
		cout << "Ingresa un valor para j: " << endl;
		cin >> j;
		
			
			//Incrementando i por 2
			i += 2; 
			
			//Redujendo j por i
			j -= i;
			
			//Dividiendo i por j para dar k
			k = i / j;
			
			//Incrementando k por k
			k += k;
			
			//Redujendo k por si misma
			k--;
			
			//Operacion de modulo entre k e i para dar el resto de su division a j
			j = k % i;
			
			//Operacion para incrementar k sobre si misma agregandole i
			k += (k+i);
			
			//Operacion para incrementar k sobre si misma dividiendole j
			k += (k/j);
			
			//Operacion para resultado de k, multiplicando k por k por k;
			k = k * k * k;
			
			//Incrementando k por i por j
			k += (i*j);
			
			

		
		
		cout << "K tiene un valor de: " k;
		return 0;
		
		
		
		
	}

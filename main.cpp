#include <iostream>
#include "CNumber.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int num1, num2, num3;
    cout << "Ingrese 3 numeros: ";
    cin >> num1 >> num2 >> num3;
    
    CNumber num = CNumber(num1, num2, num3);
    num.max();
    num.min();
    num.prom();
    num.par();
    num.impar();
	return 0;
}

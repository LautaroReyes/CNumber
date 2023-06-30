#include "CNumber.h"
#include<iostream>
using namespace std;

CNumber::CNumber(int _n1, int _n2, int _n3) {
    n1 = _n1;
    n2 = _n2;
    n3 = _n3;
}

void CNumber::max() {
    if (n1 > n2 && n1 > n3) {
        cout << "El numero " << n1 << " es el mayor." << endl;
    } else if (n2 > n1 && n2 > n3) {
        cout << "El numero " << n2 << " es el mayor" << endl;
    } else if (n3 > n1 && n3 > n2) {
        cout << "El numero " << n3 << " es el mayor" << endl;
    }
}

void CNumber::min() {
    if (n1 < n2 && n1 < n3) {
        cout << "El numero " << n1 << " es el menor" << endl;
    } else if (n2 < n1 && n2 < n3) {
        cout << "El numero " << n2 << " es el menor" << endl;
    } else if (n3 < n2 && n3 < n1) {
        cout << "El numero " << n3 << " es el menor" << endl;
    }
}

void CNumber::prom() {
    float prom = 0;
    prom = n1 + n2 + n3;
    prom = prom / 3;
    cout << "El promedio de los 3 numeros es " << prom << endl;
}

void CNumber::par() {
    if (n1 % 2 == 0) {
        cout << "El numero " << n1 << " es par" << endl;
    }
    if (n2 % 2 == 0) {
        cout << "El numero " << n2 << " es par" << endl;
    }
    if (n3 % 2 == 0) {
        cout << "El numero " << n3 << " es par" << endl;
    }
}

void CNumber::impar() {
    if (n1 % 2 != 0) {
        cout << "El numero " << n1 << " es impar" << endl;
    }
    if (n2 % 2 != 0) {
        cout << "El numero " << n2 << " es impar" << endl;
    }
    if (n3 % 2 != 0) {
        cout << "El numero " << n3 << " es impar" << endl;
    }
}

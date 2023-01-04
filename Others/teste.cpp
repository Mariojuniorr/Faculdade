#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    float N;
    int cem, cinquenta, vinte, dez, cinco, dois, real, cents50, cents25, cents10, cents5, cents1;
    cin >> N;
    cem = N / 100;
    N -= cem * 100; // N = N - (cem * 100)
    cinquenta = N / 50;
    N -= cinquenta *50;
    vinte = N / 20;
    N -= vinte * 20;
    dez = N / 10;
    N -= dez * 10;
    cinco = N / 5;
    N -= cinco * 5;
    dois = N / 2;
    N -= dois *2;
    real = N / 1;
    N -= real *1;
    cents50 = N / 0.50;
    N -= cents50 * 0.50;
    cents25 = N / 0.25;
    N -= cents25 * 0.25;
    cents10 = N / 0.10;
    N -= cents10 * 0.10;
    cents5 = N / 0.05;
    N -= cents5 * 0.05;
    cents1 = (N / 0.01) + 0.01;   
    

    cout << "NOTAS:" << endl << cem << " nota(s) de R$ 100.00" << endl << cinquenta << " nota(s) de R$ 50.00" << endl <<
    vinte << " nota(s) de R$ 20.00" << endl << dez << " nota(s) de R$ 10.00" << endl << cinco << " nota(s) de R$ 5.00" << endl <<
    dois << " nota(s) de R$ 2.00" << endl << "MOEDAS:" << endl << real << " moeda(s) de R$ 1.00" << endl << cents50 << " moeda(s) de R$ 0.50"<< endl <<
    cents25 << " moeda(s) de R$ 0.25" << endl << cents10 << " moeda(s) de R$ 0.10" << endl << cents5 << " moeda(s) de R$ 0.05" << endl << cents1 << " moeda(s) de R$ 0.01" <<endl;
    return 0;
}
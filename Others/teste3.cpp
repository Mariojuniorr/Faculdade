#include <iostream>
 
using namespace std;
 
int main() {
    
    int horasx, horasy, minx, miny, resultado;
    cin >> horasx >> minx >> horasy >> miny;

    if(horasx>horasy){
        resultado=(24-horasx) + horasy;
        cout << "O JOGO DUROU " << resultado << " HORA(S)";
    }
    else if (horasy==horasx){
        cout << "O JOGO DUROU 24 HORA(S)"; 
    }

    else if(horasy>horasx){
        resultado= horasy - horasx;
        if ((miny-minx)< 0){
            resultado=(horasy - horasx) - 1;
            cout << "O JOGO DUROU " << resultado << " HORA(S)";

        }
        else{
            cout << "O JOGO DUROU " << resultado << " HORA(S)";
        }
    }
    

    if (miny>minx){
        resultado=miny-minx;
        cout << " E " << resultado << " MINUTO(S)" << endl;
    }

    else if (minx>miny){
        resultado=(60-minx) + miny;
        cout << " E " << resultado << " MINUTO(S)" << endl;
    }

    else if (minx == miny){
        cout << " E 0 MINUTO(S)" << endl;
    }

    return 0;
}
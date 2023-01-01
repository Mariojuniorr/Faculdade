#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    double x, imposto,sobra;
    cin >> x;
    cout << fixed << setprecision(2);
    if((x>=0)&&(x<=2000.00)){
        cout << "Isento" << endl;
    }
    else if ((x>=2000.01)&&(x<=3000.00)){
        imposto=(x-1000)*0.08;
        cout << "R$ " << imposto << endl;
    }
    else if ((x>=3000.01)&&(x<=4500.00)){
        sobra= x-3000;
        imposto=(((x-2000)*0.08) + sobra*0.18);
        cout << "R$ " << imposto << endl;
    }
    else if (x>=4500.00){
        sobra=(x-4500.00);
        imposto=((x-1000)-sobra)*0.28;
        cout << "R$ " << imposto << endl;
    }
 
    return 0;
}

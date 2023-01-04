#include <iostream>
#include <math.h> 

using namespace std;
 
int main() {
    int N, i, x, y, cont, soma;
    cin >> N;
    soma=0;

    for (i=0; i<=N; i++){
        cin >> x >> y;
        
        for( ; x<y; x++){
            if(x%2==1){
                soma += x;
                cout << soma << endl;
            }
        }
        for( ; x>y; y++){
            if(y%2==1){
                soma += y;
                cout << soma << endl;
            }
        }
        }
        return 0;
    }       

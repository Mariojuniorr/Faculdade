    #include <iostream>
    
    using namespace std;
    
    int main(){
    
        int N;
        while(cin>>N){
            if (N == 2002){
                cout<<"Acesso permitido"<< endl;
                break;
            }
            else {
                cout<<"Senha Invalida"<< endl;
            }
        }
        return 0;
    }
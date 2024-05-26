#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float r, f1, f2;
    int n1,n2;    
    char op;


    while (op != 'b'){
    
        cout << "Insira dois numeros inteiros: ";
        cin >> n1 >> n2;
        cout << "m = media" << endl << "s = soma" << endl;
        cout << "d = modulo(resto da divisão)" << endl;
        cout << "> = maior" << endl << "< = menor"<< endl;
        cout << "Opcao: ";
        cin >> op;
        f1 = n1;
        f2 = n2;

        switch (op){

            case 'm':
                r = (f1+f2)/2;
                break;

            case 's':

                r = n1+n2;
                break;

            case 'd':

                r = n1%n2;
                break;

            case '>':

                if (n1 > n2)
                    r = n1;
                else
                    r = n2;
                break;

            case '<':

                if (n1 < n2)
                    r = n1;
                else
                    r = n2;
                break;

            default:

                break;
            }
    
    cout << "numeros informados: " << n1 << " e " << n2 << endl;
    cout << "operacao: " << op << endl;
    cout << "resultado: " << r << endl << endl;

    }

    

    return 0;
}
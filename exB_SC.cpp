#include<iostream>
using namespace std;

int main(){
    float f1,f2, r;
    char op;


    while (op != 'b'){

    cout << "Insira dois numeros: ";
    cin >> f1 >> f2;
    cout << "(+) soma" << endl << "(-) subtracao" << endl;
    cout << "(*) multiplicacao" << endl;
    cout << "(/) divisao" << endl << "(b) sair" << endl;
    cout << "Opcao: ";
    cin >> op;
    
    
    switch (op){
        case '+':
            r = f1 + f2;
            break;

        case '-':
            r = f1 - f2;
            break;

        case '*':
            r = f1*f2;
            break;

        case '/':
            r = f1/f2;
            break;

        case 'b':
            exit(0);
            
        default:
            cout << endl << "opcao invalida!" << endl << endl;
            break;
    }
    
    cout << "numeros informados: " << f1 << " e " << f2 << endl;
    cout << "operacao: " << op << endl;
    cout << "resultado: " << r << endl << endl;
    }


    return 0;
}
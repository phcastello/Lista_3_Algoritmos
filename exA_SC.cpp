#include<iostream>
using namespace std;

int main(){
    float n1;
    char op;

    while (op != 'e'){

        cin >> n1;
        cin >> op;

        switch (op){
            case '2':
                cout << n1*2 << endl;
                break;
            
            case '3':
                cout << n1*3 << endl;
                break;
            case '4':
                cout << n1*4 << endl;
                break;
            case '5':
                cout << n1*5 << endl;
                break;

            default:
                cout << "Valor invalido!";
                break;
        }
    }

    return 0;
}
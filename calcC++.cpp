#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Calc em C++" << endl;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o operador: ";
    cin >> op;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Resultado: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Erro: Divisao por zero." << endl;
            break;
        default:
            cout << "Operador invalido." << endl;
            break;
    }

    cin.ignore();
    cin.get();

    return 0;
}

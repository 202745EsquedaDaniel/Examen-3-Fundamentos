// multifactorial.cpp Esqueda Daniel

#include <iostream>
using namespace std;

/**
 * @brief Calcular el Factorial Usando Recursion.
 * 
 * @param n El numero al cual calcularemos el factorial.
 * @return int el factorial del numero.
 */
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/**
 * @brief Muestra las opciones del cajero ATM.
 */
void atm() {
    int balance = 20000;
    int choice, amount;

    while (true) {
        cout << "ATM Menu:\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Elija una opción: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Saldo actual: " << balance << endl;
                break;
            case 2:
                cout << "Ingrese el monto a retirar: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Retiro exitoso. Saldo restante: " << balance << endl;
                } else {
                    cout << "Fondos insuficientes.\n";
                }
                break;
            case 3:
                return;
            default:
                cout << "Opción inválida.\n";
        }
    }
}

int main() {
    int choice;
    cout << "Seleccione una función:\n";
    cout << "1. Calcular factorial\n";
    cout << "2. Usar cajero automático\n";
    cout << "Elija una opción: ";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Ingrese un número: ";
        cin >> num;
        cout << "El factorial de " << num << " es " << factorial(num) << endl;
    } else if (choice == 2) {
        atm();
    } else {
        cout << "Opción inválida.\n";
    }

    return 0;
}
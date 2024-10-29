#include <iostream>

int factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}
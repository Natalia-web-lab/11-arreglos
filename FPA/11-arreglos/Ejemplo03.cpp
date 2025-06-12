#include <iostream>
using namespace std;

int main() {
    int n;
    int A[100], aux;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    
    for (int i = 0; i < n / 2; i++) {
        aux = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = aux;
    }

    
    cout << "\nArreglo resultante:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    cout << endl;
    return 0;
}
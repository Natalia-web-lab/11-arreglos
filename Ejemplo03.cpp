#include <iostream>
using namespace std;

void leerArreglo(int A[],int n){
    for (int i=0;i<n;i++){
        cout << " A[" << i << "]:  ";
        cin >> A[i];
    }
}
void imprimirArreglo(int A[], int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout << endl;
}
void invertirArreglo(int A[],int n){
    int aux;
    for (int i = 0; i < n / 2; i++) {
        aux = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = aux;
    }
}
int main() {
    int n;
    int A[100];

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    leerArreglo(A,n);
    cout<<"Arreglo original";
    imprimirArreglo (A,n);
    invertirArreglo(A,n);
    cout<<"arreglo invertido";
    imprimirArreglo (A,n);
    
    
    return 0;
}
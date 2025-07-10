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
int sumarArreglo(int A[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum=sum +A[i];
    }
    return sum;
}
int main() {
    int n;
    int A[100];

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    leerArreglo(A,n);
    cout<<"Arreglo original";
    imprimirArreglo (A,n);
    int sumaOriginal=sumarArreglo(A,n);
    cout<<"la suma de los elementos del Arreglo original es: "<<sumaOriginal<<endl;
    invertirArreglo(A,n);
    cout<<"arreglo invertido";
    imprimirArreglo (A,n);
    imprimirArreglo(A,n);
    int sumaInvertido=sumarArreglo(A,n);
    cout<<"la suma de los elementos del Arreglo invertido es: "<<sumaInvertido<<endl;
    
    return 0;
}
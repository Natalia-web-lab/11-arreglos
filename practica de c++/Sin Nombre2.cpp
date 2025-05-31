#include<iostream>
using namespace std;
int main (){
	float a,b,c;
	cout<<"Ingrese la variable a:"<<endl;
	cin>>a;
	cout<<"Ingrese la variable b:"<<endl;
	cin>>b;
	if(b==0){//b es igual a cero?
	cout<<"ERROR DENOMINADOR CERO."<<endl;
	}
	else{
		c=a/b;
		cout<<"LA DIVISION ES:"<<endl;
	}
	return 0;
}

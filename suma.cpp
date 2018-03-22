#include <iostream>

using std::cout;
using std::endl;

/*
	esto es un comentario
*/
//comentario una linea

int suma(int x, int y);
int mayor(int x, int y);
void suma_dos(int x);
void suma_dos_direccion(int * x);
int main(){
	int a;
	int b;
	int c;
	int d;

	a=1000;
	b=243;
	c=suma(a,b);
	d=mayor(a,b);
	
	cout<<"la variable a vive en"<<&a<<endl;
	cout << "entrada "<< a << endl;
	suma_dos(a);
	cout << "salida " << a << endl;
	cout << "entrada "<< a << endl;
	suma_dos_direccion(&a);
	cout << "salida " << a << endl;

	return 0;	

}

int suma(int x, int y){
	return (x+y);
}

int mayor(int x, int y){
	int max;
	if(x>y){
		max=x;
	} else{
		max=y;	
	}
	return max;
}
void suma_dos(int x){
	cout << "adentro entra "<< x << endl;
	x=x+2;
	cout << "adentro sale "<< x << endl;
}
//int * es de tipo direccion
void suma_dos_direccion(int * x){
	cout << "adentro entra "<< *x << endl;
	*x=*x + 2;
	cout << "adentro sale "<< *x << endl;
}

#include <iostream>
using namespace std;

int main(){
	
	int a = 12;
	int *p = &a;
	
	cout<<"p : "<<p<<endl;    
	cout<<"&a : "<<&a<<endl;
	cout<<"*p : "<<*p<<endl;
	cout<<"a : "<<a<<endl;
	
	// *p adresini tuttu�u  de�i�kene de�i�im uyguluyoruz
	*p = 220;   // adres de�i�mez, adresini tuttu�u de�i�ken art�k 12 de�il 220 olur
	
	cout<<"Degisimden Sonra"<<endl;
	
	cout<<"p : "<<p<<endl;    
	cout<<"&a : "<<&a<<endl;
	cout<<"*p : "<<*p<<endl;
	cout<<"a : "<<a<<endl;

}

#include <iostream>
using namespace std;

	// Fonksiyonlar

void Toplama()
{
	int a,b;   // Local De�i�kenler  ==> Sadece bu fonsiyona �zg� a ve b de�erleridir.
	
	cout<<"Birinci Sayiyi girin :"<<endl;
	cin>>a;
	
	cout<<"Ikinci sayiyi girin :"<<endl;
	cin>>b;
	
	cout<<"Iki sayinin toplami = "<<a + b<<endl;
}

void Cikar()
{
	int a,b;   // local De�i�kenler
	
	cout<<"Birinci Sayiyi girin :"<<endl;
	cin>>a;
	
	cout<<"Ikinci sayiyi girin :"<<endl;
	cin>>b;
	
	cout<<"Iki sayinin farki = "<<a - b<<endl;
}

int main(){
	
	Toplama();
	Cikar();
	
	
	
	
	
}









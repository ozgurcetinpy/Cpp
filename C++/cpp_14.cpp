#include <iostream>
using namespace std;


	// For D�ng�s�

int main(){
	/*
	int a = 50;
	int b = 30;
	
	cout<<a++<<endl;   // �nce yazd�r sonra art�r.
	cout<<++b<<endl;   // �nce art�r sonra yazd�r.
	cout<<a;    // art�r�lm�� hali
	*/
	
	
	/*
	int i;
	for (i=1;i<=10;i++)    // i, 1 den 10 kadar 1'er 'er artaracak �ekilde d�ng�y� sa�la
	{
		cout<<"Merhaba Dunya"<<endl;
	}
	*/
	
	int a;
	int i;
	//cout<<"Bir sayi giriniz :"<<endl;
	//cin>>a;
	
	for (i=1;i<=10;i++)
	{
		cout<<"Bir sayi giriniz :"<<endl;
		
		cin>>a;
		
		if (a % 2 == 0)
		{
			cout<<"Cifttir "<<endl;
		}
		else
		{
			cout<<"Tektir. "<<endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

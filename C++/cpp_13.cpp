#include <iostream>
using namespace std;

	// Switch-Case  Karar Yap�s�

int main(){
	
	int i;
	cout<<"1-4 arasinda bir sayi giriniz :\t";
	cin>>i;
	
	switch(i){
		case 1:      // case i'nin de�eri :     �eklinde tan�mlan�r
			cout<<"1 Girdiniz";
			break;              // Switch-case karar yap�s�ndan ��kar.
		case 2:
			cout<<"2 Girdiniz";
			break;
		case 3:
			cout<<"3 Girdiniz";
			break;
		case 4:
			cout<<"4 Girdiniz";
			break;
		default:           // default yaz�lmad��� takdirde de program �al���r.
			cout<<"Yanlis deger girdiniz.";
	}
}

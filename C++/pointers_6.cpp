#include <iostream>
using namespace std;

int main(){
	
	int a[] = {1,2,3,4,5};	
	char t[] = "Sel";
	
	cout<<a<<endl;
	cout<<t<<endl;
	
	int *p = a;  // a de�i�keni bir dizi oldu�u i�in & i�areti konulmaz.
	
	cout<<*p<<endl;		   // {1,2,3,4,5};   ==> 1 de�eri   // a�a��daki de ayn�s�
	
	cout<<p[0]<<endl;	//1
	cout<<p[3]<<endl;   // 4     
	
	cout<<*(p+1)<<endl; 	// {1,2,3,4,5};   ==> 2 de�eri
	cout<<*(p+3);   // 4      // p + 4bit x 3  ==> p + 12bit
}

#include <iostream>
using namespace std;

int main(){
	
	int i;
	// Break �fadesi  == > D�ng�y� Orada Kapat�r.
	// Continue �fadesi ==> D�ng� O ifadeye gelince atlar
	for (i=1;i<=10;i++)
	
	{
		if (i == 5)
			//break;      // D�ng� biter, en son 5 g�r�n�r.
			continue;    // 5 yazd�r�lmaz , 6 dan devam eder.
		cout<<i<<endl;
		
	}
	
	
}

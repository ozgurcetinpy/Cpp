#include <iostream>  
using namespace std;

	// String Fonksiyonlar�    lenght() - append() - assign()

int main(){
	
	string a = "Ozgur Cetin";
	cout<<a<<endl;
	cout<<a.length()<<endl;     //   lenght  ==>  string ifadenin karakter uzunlu�unu geriye d�nd�r�r.
	
	string b = "Marmara Universitesi ";
	cout<<b<<endl;
	cout<<b.append("Eklendi")<<endl;    //  append  ==>  Sadece eklendi olarak ��kt� vermez, ekleyerek haf�zaya atar.
	cout<<b.append("Eklendi",2)<<endl;
	
	string c = "Mekatronik";          
	cout<<c<<endl;						// assign  ==>  de�i�kenin i�eri�ini de�i�tirir.
	cout<<c.assign("Yeni String")<<endl;
	cout<<c<<endl;	
}


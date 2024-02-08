#include<iostream>
using namespace std;
int main (){
	float base1, base2,altura,area;
	cout<<"ingrese la base mayor: ";
	cin>>base1;
	cout<<"ingrese la base menor: ";
	cin>>base2;
	cout<<"ingrese la altura: "; 
	cin>> altura;
	
	area =(base1+base2)*altura/2;
	
	cout<<"el area del trapecio es : "<<area;
	return 0;
	
	}

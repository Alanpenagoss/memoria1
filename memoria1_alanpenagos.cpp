#include<iostream>

using namespace std;

int main(){
	int var = 5;
	int * pointVar;
	pointVar = &var;
	
	cout<<" var = "<<var<<endl;
	cout<<"direccion de la variable var (&var) = "<<&var<<endl<<endl;
	cout<<"apuntador pointVar = "<<pointVar<<endl<<endl;
	cout<<"cambia de valor de var a 7"<<endl<<endl;
	var = 7;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"*pointVar = "<<*pointVar<<endl<<endl;
	cout<<"cambia el valor de *pointVar a 16"<<endl;
	*pointVar = 16;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"apuntador pointVar ="<<*pointVar<<endl<<endl;
	cout<<"*pointVar"<<*pointVar<<endl<<endl;
	cout<<"var = "<<var<<endl<<endl;
	
	
	return 0;
}

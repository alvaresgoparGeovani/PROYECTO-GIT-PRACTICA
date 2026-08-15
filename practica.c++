#include<iostream>
#include<string>
using namespace std;
int main(){
float cal1,cal2,cal3,prom,suma,div;

	cout<<"Ingresa tu primera calificacion:\n";
	cin>>cal1;
	cout<<"Ingresa tu segunda calificacion:\n";
	cin>>cal2;
	cout<<"Ingresa tu tercera calificacion:\n";
	cin>>cal3;

	prom = cal1 + cal2 + cal3/3;

	cout<<"Tu promedio es de "<< div<<"\n";

	if(div >= 9 )
	{
	cout<<"Aprobaste con excelencia";
	}
	else if(div >= 8)
	{
	cout<<"Muy bien aprobaste";
	}
	else if(div >= 7 )
	{
	cout<<"Bien pasaste";
	}
	else if (div >= 6)
	{
	cout << "Pasaste de panzaso";
	}
	else{
	cout<<"REPROBADO";
	}
	return 0;

}

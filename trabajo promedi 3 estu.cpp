#include<iostream>

using namespace std;

int main (){
	
	float nota1es1=0,nota2es1=0,nota3es1=0,promfinal1=0,nota1es2=0,nota2es2=0,nota3es2=0,promfinal2=0,nota1es3=0,nota2es3=0,nota3es3=0,promfinal3=0;
	
	cout<<"Diga la nota del primer periodo de el estudiante 1:  ";cin>>nota1es1;
    cout<<"Diga la nota del segundo periodo de el estudiante 1:  ";cin>>nota2es1;
	cout<<"Diga la nota del tercero periodo de el estudiante 1:  ";cin>>nota3es1;
	
	cout<<"Diga la nota del primer periodo de el estudiante 2:  ";cin>>nota1es2;
    cout<<"Diga la nota del segundo periodo de el estudiante 2:  ";cin>>nota2es2;
	cout<<"Diga la nota del tercero periodo de el estudiante 2:  ";cin>>nota3es2;	
	
	cout<<"Diga la nota del primer periodo de el estudiante 3 : ";cin>>nota1es3;
    cout<<"Diga la nota del segundo periodo de el estudiante 3 :  ";cin>>nota2es3;
	cout<<"Diga la nota del tercero periodo de el estudiante 3 :  ";cin>>nota3es3;
	
	promfinal1= (nota1es1+nota2es1+nota3es1)/3;
	
	cout<<"El promedio del estudiante 1 es: "; cout<<promfinal1<<endl<<endl;
	
	if(promfinal1>=3.0){
		cout.precision(2);
		cout<<"El estudiante 1 pasa con un promedio de:  "; cout<<promfinal1<<endl<<endl;
	}else{
		cout.precision(2);
		cout<<"El estudiante 1 perdio con un promedio de:  "; cout<<promfinal1<<endl<<endl;
	}
		promfinal2= (nota1es2+nota2es2+nota3es2)/3;
	
	cout<<"El promedio del estudiante 2 es: "; cout<<promfinal2<<endl<<endl;
	
	if(promfinal2>=3.0){
		cout.precision(2);
		cout<<"El estudiante 2 pasa con un promedio de:  "; cout<<promfinal2<<endl<<endl;
	}else{
		cout.precision(2);
		cout<<"El estudiante 2 perdio con un promedio de:  "; cout<<promfinal2<<endl<<endl;
	}
		promfinal3= (nota1es3+nota2es3+nota3es3)/3;
	
	cout<<"El promedio del estudiante 3 es: "; cout<<promfinal3<<endl<<endl;
	
	if(promfinal3>=3.0){
		cout.precision(2);
		cout<<"El estudiante 3 pasa con un promedio de:  "; cout<<promfinal3<<endl<<endl;
	}else{
		cout.precision(2);
		cout<<"El estudiante 3 perdio con un promedio de:  "; cout<<promfinal3<<endl;
	}
	
	
	
	
	return 0;
}

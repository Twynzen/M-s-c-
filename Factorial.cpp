#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero, factorial = 1;
	
	cout<<"Digite un n�mero:  "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		
		factorial = factorial *i;
		
	}

    cout<<"\nLa factorial del numero es:  "<<factorial<<endl;
    
    system("pause");





return 0;

}

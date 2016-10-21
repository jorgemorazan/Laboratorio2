#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
	int opc=0;
	while(opc!=4){
		cout << "Menu \n1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n";
		cin >> opc;
		cin.ignore();
		if(opc==1){
			cout<<"prueba" <<endl;
			cout << "Ingrese un numero:\n";
			string numero;
			getline(cin,numero);
			cout << numero << endl;
			int otronum = numero.size()+1;
			int a[otronum];
			int mayor=0;
			cout<< "hola" << endl;
			for (int i = 0; i < numero.size(); ++i)
			{
				cout<< "hola" << endl;
				a[i] = (int)numero[i];
				a[i] = a[i]-48;
			}//String  a Array

			for (int i = 0; i < numero.size(); ++i)
			{
				if(mayor<a[i]){
					mayor=a[i];
				}
			}//for consigue el mayor
			bool exists = false;
			int cont=0;
			for (int i = 0; i <= mayor; ++i)
			{//0
				for (int j = 0; j < numero.size(); ++i)
				{
					if(a[j]==i){
						exists = true;
					}
					if(exists){
						cont++;
					}
				}
			}
			int decimalBase = 0;
			int contador=0;
			for (int i = numero.size()-1; i >= 0 ; --i)
			{
				decimalBase += a[contador] * pow(mayor+1,i);
				contador++;
			}
			if(cont==mayor){
				cout<< numero << " es base " << mayor+1 << " y su base decimal es " << decimalBase<<endl;
			} else {
				cout<< "No es base pandigital"<<endl;
			}
		}else if(opc==2){
			int numero2;
			int ecuacionResultado=0;
			int resultadoTotal=0;
			bool primo= false;
			cout << "Ingrese un Numero"<<endl;
			cin >> numero2;
			//int arreglodelNumero;
			int cont=0;
			for (int i = 1; i <= numero2; ++i)
			{
				
				if(numero2%i==0){
					ecuacionResultado = (i+numero2)/i;
					for (int j= 1; j <= ecuacionResultado; ++j)
					{
						if(ecuacionResultado%j==0){
							cont++;
							//cout<<"Contador"<<cont;
						}
					}//verifica
					if(cont==2){
						resultadoTotal+=ecuacionResultado;
					}//Permite el primo
				}//Agarra todos aquellos que son divisibles
				primo= false;
				cont=0;
			}//Recorre de 1-numero
			cout << "Resultado: "resultadoTotal<<endl;
		}else if(opc=3){//Ej 2
			string numero3;
			cout << "\nIngrese el numero";
			cin >> numero3;
			int num;
			stringstream(numero3);
			int arreglo[numero3.size()];
			int suma=0;
			for (int i = 0; i < numero3.size(); ++i)
			{
				int a = (int)numero3[i];
				suma+=a+48
			}
		}
	}//Cierra do/while
	return 0;
}//Fin main
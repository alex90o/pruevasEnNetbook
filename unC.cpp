//3. Realice una función que dado dos cstring, cuente las ocurrencias del segundo en el primero.
using namespace std;
#include iostream;
int LongitudDeCadena(char *texto)
{
	int cant_Caracteres=0;
	while(texto[cant_Caracteres]!='\0'){
		cant_Caracteres++;}
	
	return cant_Caracteres;
	
}
int ocurencias(char * palabra, char otrapalabra) {
	int cant = LongitudDeCadena(palabra);
	int aux=0;
	for(int i = 0; i < cant; i++) {
		if (palabra[i] == otrapalabra) ++aux;
	}
	return aux;
}


int main(int argc, char *argv[]) {
	
		char palabra[100];
        char a;		
		//char palabra2[100];
		cout<<"ingrese la cadena 1: "; cout<<endl;
		cin.getline(palabra,100); cout<<endl;
		cout<<"el texto es : "<< palabra <<endl;
		cout<<"ingrese el caracter: "; cout<<endl;
		cin>>a;
		cout<<"la cantidad de ocurencias es : "<<ocurencias(palabra,a)<<endl;
		//cout<<"ingrese la cadena 2: "; cout<<endl;
		//cin.getline(palabra2,100); cout<<endl;
		//cout<<"el texto es : "<< palabra2 <<endl;
		
		//cout<<"la cantidad de ocurencias es : "<<ocurencias(palabra,palabra2)<<endl;
		//cout<<"la cantidad de caracteres es : "<<count(palabra)<<endl;
		
	
	return 0;
}


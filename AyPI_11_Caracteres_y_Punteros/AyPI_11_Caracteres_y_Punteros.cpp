// Consigna: Utilizar aritmetica de punteros para resolver las implementaciones pedidas
// y que sean compactas
#include <iostream>
using namespace std;

// Precondicion: @destino es una cadena de caracteres. El tamano de destino es igual o mayor al de origen
// Postcondcion: Copia @origen en @destino
void Copiar(char* origen, char*destino); //Finalmente deberia ser una linea codigo

// Precondicion: @cadena es una cadena de caracteres
// Postcondcion: Devuelve la cantidad de caracteres de @cadena
int ContarCaracteres(char *cadena); ////Finalmente deberia ser 4 0 3 lineas de codigo

// Precondicion: @cadena y @subcadena son cadena de caracteres. El tamano de @cadena es suficiente para agregar la @subcadena
//Postcondicion: Agrega al final de @cadena la @subcadena
void Concatenar(char *cadena, char* subcadena); //Finalmente deberia ser una linea codigo

int main() {
	char texto[100];
	Copiar("Hola", texto);
	int a = '\0';

	//Concatenar(texto, " curso de AyP1!");
	cout << texto << endl;//Hola  curso de AyP1!
	cout << ContarCaracteres(texto);

	return 0;
}

// =
// ++
// *

// Dominio para entender esto
// - Saber punteros: Aritmetica de punteros y relacion con los vectores
// - Precedencia de operadores
// - Cositas de bajo nivel (toda sentencia devuelve un valor, el '\0' tienen una codificacion entera de 0 y el false es un 0 (true es distinto de cero)
void Copiar(char* cadenaOrigen, char* cadenaDestino) {
	while (*cadenaDestino++ = *cadenaOrigen++);
}

int ContarCaracteres(char *cadena) {
	char* direccionInicial = cadena;
	while (*cadena++);
	char* direccionFinal = cadena - 1;
	return direccionFinal - direccionInicial;
}

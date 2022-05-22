/* 
Autor: Franciscomilan
Realizado: 28/04/2022
Escuela: Universidad UVM
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 1 del 3 parcial en C que pida el nombre de un archivo e imprima su contenido en pantalla
imprimiendo caracter por caracter para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
#include"miLibreria.h" 

//Principal
int main () {
	//Variables
	char nombre[50], c;
	FILE *f;
	int n=0, lineas=0;
	//Entrada de datos
	leers(" Nombre del archivo: ",nombre,50);
	//Abrir el archivo
	f=fopen(nombre,"r");
	//Verificar si se abrio correctamente el archivo
	if (f==NULL) {
		printf("Error al tratar de abrir el archivo\n");
	} else {
		//Proceso del archivo
		while (1) { 
			//Leer cada caracter del archivo
			c=fgetc(f);	
			//Imprimir caracter por caracter
			printf("%c",c);
			n++;
			if(c==EOF) {
				//EOF-FinalDelArchivo
				break;
			}
			else if (c==10) {
				lineas++;
			}
		}
		//Cerrar el proceso del archivo
		fclose(f);
		printf("\n---> El archivo contiene %d caracteres \n", n);
		printf("\n---> El archivo contiene %d lineas \n", lineas);
	}
	//Retorno
	return 0;
}

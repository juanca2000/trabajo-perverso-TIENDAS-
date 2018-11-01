/*
Tema: Eercicio perverso
Fecha: 31/10/2018
Nombre Del Programador: Juan Camilo Valenzuela Giraldo
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct producto{
	
	int cod;
	char nom[30];
	float precio;
	struct tiendas;
	
}prod[4],datosT[4];

int main() 
{
	
	int opciones, contador = 0, i = 0,n=0;
	printf("\n           BIENVENIDO PAAAAAA \n");
	do{
		printf("\n");
		printf(" 1. ingrese los datos de la tienda 1\n");
		printf(" 2. ingrese los datos de la tienda 2\n");
		printf(" 3. ingrese los datos de la tienda 3\n");
		printf(" 4. ingrese los datos de la tienda 4\n");	
		printf(" 5. suma todos los productos de todas las tiendas\n");
		printf(" 0. puede salir paaaaa\n");
		scanf("%i", &opciones);
		
		
		switch(opciones)
		{
			
		case 1:
			
			
			for(i = 0; i < 4; i++)
			{
				
				printf("ingrese el codigo del producto:\n ");
				scanf("%i", &prod[i].cod);
				fflush(stdin);
				printf("\n");
				printf("ingrese la descripcion: \n ");
				gets(prod[i].nom);
				fflush(stdin);
				printf("\n");
				printf("ingrese el precio:\n ");
				scanf("%f", &prod[i].precio);
				getch();
			}
			n++;
			break;
			
			
			
		case 2:
			
			
			for(i = 0; i < 4; i++)
			{
				
				printf("ingrese el codigo del producto: \n");
				scanf("%i", &prod[i].cod);
				fflush(stdin);
				printf("\n");
				printf("ingrese la descripcion: \n ");
				gets(prod[i].nom);
				fflush(stdin);
				printf("\n");
				printf("ingrese el precio: \n ");
				scanf("%f", &prod[i].precio);
				getch();
			}
			n++;
			break;
			
		case 3:
			
			
			for(i = 0; i < 4; i++)
			{
				
				printf("ingrese el codigo del producto: \n ");
				scanf("%i", &prod[i].cod);
				fflush(stdin);
				printf("\n");
				printf("ingrese la descripcion: \n ");
				gets(prod[i].nom);
				fflush(stdin);
				printf("\n");
				printf("ingrese el precio: \n ");
				scanf("%f", &prod[i].precio);
				getch();
			}
			n++;
			break;
			
			
		case 4:
			
			
			for(i = 0; i < 4; i++)
			{
				
				printf("ingrese el codigo del producto: \n ");
				scanf("%i", &prod[i].cod);
				fflush(stdin);
				printf("\n");
				printf("ingrese la descripcion: \n ");
				gets(prod[i].nom);
				fflush(stdin);
				printf("\n");
				printf("ingrese el precio: \n ");
				scanf("%f", &prod[i].precio);
				getch();
			}
			n++;
			break;
			
		case 5:
			
			
			for(i = 0; i < 4; i++)
			{
				if (n == 4)
				{
					printf("\n suma de todos los productos es: %2.f\n",prod[i].precio);
					//falta hacer la suma de todos los productos
				}
				else{				
					printf("Falta la suma de los productos");
				}
				
			}
			
		} while(opciones != 6);
	
		
		printf("\n                UN SABIO DIJO UNA VEZ: \n\n");
		printf("\n NO TRATES MAL A ALGUIEN QUE ESTA HACIENDO TODO POR ESTAR BIEN CONTIGO\n");
		printf("\n\n");
		printf("\n               LAS MUJERES PIENSAN ASI: \n\n");
		printf("\n *SI SOMOS CURSIS, FLORERO\n");
		printf("\n *SI SOMOS AVENTADOS, PATAN\n");
		printf("\n *SI SOCIALIZAMOS, MUJERIEGOS");
		printf("\n *SI SOMOS BUENOS Y FIELES, MEJORES AMIGOS\n");
		printf("\n\n");
		printf("\n TAL VEZ ALGUN DIA, ALGUIEN ME DIGA:\n");
		printf("\n ME SIENTO FELIZ DE HABERTE CONOCIDO\n");
	
		
		
   return 0;
	}
}

	

#include <iostream>
#include "string"
#include "stdlib.h"
#include <cstdlib>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
/*Betzabé, soy Dante, te dejo instrucciones en la línea 386 y 500. Atiendo cualquier duda que tengas sobre el trabajo.
Termina lo antes posible para que tú o alguien más prosiga con los productos de otra categoría.*/

//A quien corresponda: Te toca el mismo trabajo que realizó ayer Betzabé, que deberás hacer en la línea 2423, para la segunda categorái de productos, del 36 al 58, y alguien más le tocará la tercera, que tendrá del caso 59 al 68

//Declarar strings de concatenado
		string concatenado1 = "1.- Curzate M8, $459.9 por Kg. Las unidades disponibles son: ";
		string concatenado2 = "2.- Spectrum , $357 por Kg. Las unidades disponibles son: ";
		string concatenado3 = "3.- Surestart, $536.26 por L. Las unidades disponibles son: ";
		string concatenado4 = "4.- Crosser, $199.87 por L. Las unidades disponibles son: ";
		string concatenado5 = "5.- Agriducor 500, $368.55 por Kg. Las unidades disponibles son: ";
		string concatenado6 = "6.- Terraductor, $94.5 por 400 g. Las unidades disponibles son: ";
		string concatenado7 = "7.- Cobrezate M, $231.11 por Kg. Las unidades disponibles son: ";
		string concatenado8 = "8.- Vydate L, $672.15 por L. Las unidades disponibles son: ";
		string concatenado9 = "9.- Exalt, $300.3 por 100 ml. Las unidades disponibles son: ";
		string concatenado10 = "10.- Exalt, $3276 por L. Las unidades disponibles son: ";
		string concatenado11 = "11.- Lannate 90, $105 por 100 gr. Las unidades disponibles son: ";
		string concatenado12 = "12.- Imidafix, $283.5 por 250 ml. Las unidades disponibles son: ";
		string concatenado13 = "13.- Imidafix, $918.12 por L. Las unidades disponibles son: ";
		string concatenado14 = "14.- Agrocin 20, $84.29 por 240 ml. Las unidades disponibles son: ";
		string concatenado15 = "15.- Accent L, $922.74 por L. Las unidades disponibles son: ";
		string concatenado16 = "16.- Durango, $226.59 por L. Las unidades disponibles son: ";
		string concatenado17 = "17.- Tordon XT 472, $139.23 por L. Las unidades disponibles son: ";
		string concatenado18 = "18.- Atrafix 90, $190.82 por Kg. Las unidades disponibles son: ";
		string concatenado19 = "19.- Agropa Fix 25, $135.4 por 900 ml. Las unidades disponibles son: ";
		string concatenado20 = "20.- Titanit, $389.81 por 200 ml. Las unidades disponibles son: ";
		string concatenado21 = "21.- Minoquel Fe 13% EDTA, $278.25 por Kg. Las unidades disponibles son: ";
		string concatenado22 = "22.- Minoquel Fe 9% IDHA, $304.5 por Kg. Las unidades disponibles son: ";
		string concatenado23 = "23.- Toretto, $685.42 por 150 ml. Las unidades disponibles son: ";
		string concatenado24 = "24.- Toretto, $4341.12 por L. Las unidades disponibles son: ";
		string concatenado25 = "25.- Rally, $609.84 por 114 gr. Las unidades disponibles son: ";
		string concatenado26 = "26.- Totalflix 480, $154.89 por 960 ml. Las unidades disponibles son: ";
		string concatenado27 = "27.- Enable, $1420.18 por L. Las unidades disponibles son: ";
		string concatenado28 = "28.- OPTYSIL, $563.75 por 500 ml. Las unidades disponibles son: ";
		string concatenado29 = "29.- ABAMEFIX 1.8%, $685 por 960 ml. Las unidades disponibles son: ";
		string concatenado30 = "30.- Fontelis, $1884.96 por L. Las unidades disponibles son: ";
		string concatenado31 = "31.- CPF, $262.67 por 960 ml. Las unidades disponibles son: ";
		string concatenado32 = "32.- Zero 5% sc, $501.18 por L. Las unidades disponibles son: ";
		string concatenado33 = "33.- Diazinon, $255.91 por L. Las unidades disponibles son: ";
		string concatenado34 = "34.- Zierra, $1883.92 por L. Las unidades disponibles son: ";
		string concatenado35 = "35.- Equation Pro/ zorvec, $2205 por 500gr o 150 ml. Las unidades disponibles son: ";

		string concatenado36 = "36.- Nitrato de Calcio, $278.25 por 25 Kg. Los bultos disponibles son: ";
		string concatenado37 = "37.- Nitrato de Potasio, $619.5 por 25 Kg. Los bultos disponibles son: ";
		string concatenado38 = "38.- Sulfato de Potasio, $488.25 por 25 Kg. Los bultos disponibles son: ";
		string concatenado39 = "39.- MAP, $609 por 25 Kg. Los bultos disponibles son: ";
		string concatenado40 = "40.- Nitrato de Magnesio, $341.25 por 25 kg. Los bultos disponibles son: ";
		string concatenado41 = "41.- Claruro de Potasio, $279.3 por 25 Kg. Los bultos disponibles son: ";
		string concatenado42 = "42.- PEKACID, $1491 por 25 Kg. Los bultos disponibles son: ";
		string concatenado43 = "43.- NOVA-MAP, $724.5 por 25 Kg. Los bultos disponibles son: ";
		string concatenado44 = "44.- MAGPHOS, $1501.5 por 25 Kg. Los bultos disponibles son: ";
		string concatenado45 = "45.- MKP, $934.5 por 25 Kg. Los bultos disponibles son: ";
		string concatenado46 = "46.- Crecimiento, $525 por 25 Kg. Los bultos disponibles son: ";
		string concatenado47 = "47.- Desarrollo, $561.75 por 25 Kg. Los bultos disponibles son: ";
		string concatenado48 = "48.- Produccion, $630 por 25 Kg. Los bultos disponibles son: ";
		string concatenado49 = "49.- Multiproposito, $619.5 por 25 Kg. Los bultos disponibles son: ";
		string concatenado50 = "50.- Minoquel Mix EDTA, $4541.25 por 25 Kg. Los bultos disponibles son: ";
		string concatenado51 = "51.- Minoquel Mix EDTA, $199.5 por 1 Kg. Los bultos disponibles son: ";
		string concatenado52 = "52.- Inkabor 21, $1785 por 25 Kg. Los bultos disponibles son: ";
		string concatenado53 = "53.- Inkabor 21, $78.75 por 1 Kg. Los bultos disponibles son: ";
		string concatenado54 = "54.- Hunter 5%G, $596.7 por 20 Kg. Los bultos disponibles son: ";
		string concatenado55 = "55.- DUCORCOTE ULTRA, $801.63 por 25 Kg. Los bultos disponibles son: ";
		string concatenado56 = "56.- DUCORMIX PLUS, $609.59 por 25 Kg. Los bultos disponibles son: ";
		string concatenado57 = "57.- VIGOTEC TOP, $305.37 por 2 Kg. Los bultos disponibles son: ";
		string concatenado58 = "58.- Sulfato de Magnesio- HEPTA 16%, $157.5 por 25 Kg. Los bultos disponibles son: ";
		
		string concatenado59 = "59.- UREA, $485 por 50 Kg. Los bultos disponibles son: ";
		string concatenado60 = "60.- CAPITAN, $350 por 50 Kg. Los bultos disponibles son: ";
		string concatenado61 = "61.- DAP 18-46, $705 por 50 Kg. Los bultos disponibles son: ";
		string concatenado62 = "62.- SULFATO DE AMONIO, $290 por 50 Kg. Los bultos disponibles son: ";
		string concatenado63 = "63.- CLORURO DE POTASIO, $430 por 50 Kg. Los bultos disponibles son: ";
		string concatenado64 = "64.- CAUSILLO NARANJA, $425 por 50 Kg. Los bultos disponibles son: ";
		string concatenado65 = "65.- NITROPERFECTO, $530 por 50 Kg. Los bultos disponibles son: ";
		string concatenado66 = "66.- MICROESSENCIALS, $741 por 50 Kg. Los bultos disponibles son: ";
		string concatenado67 = "67.- MEZCLA PLATA, $580 por 50 Kg. Los bultos disponibles son: ";
		string concatenado68 = "68.- MAP GRANULAR, $715 por 50 Kg. Los bultos disponibles son: ";

	//Declaración de variables
	//Precio de cada producto
		float precio1 = 459.9;
		float precio2 = 357;
		float precio3 = 536.26;
		float precio4 = 199.87;
		float precio5 = 368.55;
		float precio6 = 94.5;
		float precio7 = 231.11;
		float precio8 = 672.15;
		float precio9 = 300.3;
		float precio10 = 3276;
		float precio11 = 105;
		float precio12 = 283.5;
		float precio13 = 918.12;
		float precio14 = 84.29;
		float precio15 = 922.74;
		float precio16 = 226.59;
		float precio17 = 139.23;
		float precio18 = 190.82;
		float precio19 = 135.4;
		float precio20 = 389.81;
		float precio21 = 278.25;
		float precio22 = 304.5;
		float precio23 = 685.42;
		float precio24 = 4341.12;
		float precio25 = 609.84;
		float precio26 = 154.89;
		float precio27 = 1420.18;
		float precio28 = 563.75;
		float precio29 = 685;
		float precio30 = 1884.96;
		float precio31 = 262.67;
		float precio32 = 501.18;
		float precio33 = 255.91;
		float precio34 = 1883.92;
		float precio35 = 2205;
		
		float precio36 = 278.25;
		float precio37 = 619.5;
		float precio38 = 488.25;
		float precio39 = 609;
		float precio40 = 341.25;
		float precio41 = 279.3;
		float precio42 = 1491;
		float precio43 = 724.5;
		float precio44 = 1501.5;
		float precio45 = 934.5;
		float precio46 = 525;
		float precio47 = 561.75;
		float precio48 = 630;
		float precio49 = 619.5;
		float precio50 = 4541.25;
		float precio51 = 199.5;
		float precio52 = 1785;
		float precio53 = 78.75;
		float precio54 = 596.7;
		float precio55 = 801.63;
		float precio56 = 609.59;
		float precio57 = 305.37;
		float precio58 = 157.5;

		float precio59 = 485;
		float precio60 = 350;
		float precio61 = 705;
		float precio62 = 290;
		float precio63 = 430;
		float precio64 = 425;
		float precio65 = 530;
		float precio66 = 741;
		float precio67 = 580;
		float precio68 = 715;	
		
		int existencia1 = 67;
		int existencia2 = 42;
		int existencia3 = 36;
		int existencia4 = 28;
		int existencia5 = 72;
		int existencia6 = 102;
		int existencia7 = 18;
		int existencia8 = 56;
		int existencia9 = 48;
		int existencia10 = 27;
		int existencia11 = 65;
		int existencia12 = 33;
		int existencia13 = 29;
		int existencia14 = 54;
		int existencia15 = 12;
		int existencia16 = 19;
		int existencia17 = 48;
		int existencia18 = 36;
		int existencia19 = 9;
		int existencia20 = 15;
		int existencia21 = 26;
		int existencia22 = 54;
		int existencia23 = 64;
		int existencia24 = 11;
		int existencia25 = 78;
		int existencia26 = 45;
		int existencia27 = 18;
		int existencia28 = 27;
		int existencia29 = 29;
		int existencia30 = 89;
		int existencia31 = 24;
		int existencia32 = 42;
		int existencia33 = 5;
		int existencia34 = 18;
		int existencia35 = 30;
		
		int existencia36 = 561;
		int existencia37 = 151;
		int existencia38 = 145;
		int existencia39 = 976;
		int existencia40 = 121;
		int existencia41 = 584;
		int existencia42 = 774;
		int existencia43 = 313;
		int existencia44 = 78;
		int existencia45 = 94;
		int existencia46 = 211;
		int existencia47 = 141;
		int existencia48 = 98;
		int existencia49 = 301;
		int existencia50 = 454;
		int existencia51 = 980;
		int existencia52 = 431;
		int existencia53 = 1016;
		int existencia54 = 12;
		int existencia55 = 45;
		int existencia56 = 123;
		int existencia57 = 251;
		int existencia58 = 145;

		int existencia59 = 212;
		int existencia60 = 145;
		int existencia61 = 321;
		int existencia62 = 545;
		int existencia63 = 546;
		int existencia64 = 431;
		int existencia65 = 144;
		int existencia66 = 314;
		int existencia67 = 51;
		int existencia68 = 121;

		float cantidad; //Precio de productos a llevar
		
		float contador; //Cantidad
		float impuesto; //Porcentaje de impuesto (a dividirse entre 100)
		int opcion;
		int otroProducto;
		float acumulador;
		float porcentaje_de_impuesto;
		float precio_total;
		float subtotal;
		char categProduct;
		int agroq;
		int iniciarOsalir;
		int otraVenta;
		int importe;
		float totalFinal;
		int impuestoDecimal;
		double decimalImpuestoCompleto;
		int ferso;
		int fergra;
/*findecompra () //me puso muchos "peros"
{
	cout<<"¿Quiere añadir elementos?"<<endl;
    cout<<"1.- Si"<<endl;
    cout<<"2.- No"<<endl;
   	cin>>otroProducto;
   	if(otroProducto<2)			
    {			
  		break;
	}
	else
	{
		cout << "Ingrese el valor de porcentaje de impuesto: ";
		cin >> porcentaje_de_impuesto;
		impuesto = acumulador*porcentaje_de_impuesto/100;
		cout << "El impuesto es de: $" << impuesto << endl;
		totalFinal = acumulador+impuesto;		
		cout<<"El total será de $"<<totalFinal<<endl;
    	cout<<"¿Desea realizar otra venta?"<<endl;
    	cout<<"1. Si."<<endl;
		cout<<"2. No."<<endl;
		acumulador=0;
		contador=0;
		importe=0;
		totalFinal = 0;
		cin>>otraVenta;
		if(otraVenta<2)
		{
			break;
		}
		else
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n";
			cout<<"					Hasta luego					";
			cout<<"\n\n\n\n\n\n\n\n";
			Sleep(3000);
			exit(1);
		}
	}
}*/
abandonarEjecucion ()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"					Hasta luego					";
	cout<<"\n\n\n\n\n\n\n\n";
	Sleep(100);
	exit(1);
}

int main()
	{
	setlocale(LC_ALL, "");
	system("title SISTEMA DE VENTA DE PRODUCTOS AGRÍCOLAS");
  	    system("color fc");
  	    
		cout<<"		Bienvenido al sistema de venta de productos agrícolas."<<endl;
		cout<< endl << "¿Quiere iniciar o salir?"<<endl;
		cout<<"	1. Iniciar"<<endl;
		cout<<"	2. Salir"<<endl;
		cin>>iniciarOsalir;
		if (iniciarOsalir<2)
		{
			while(otraVenta=1)
			{
				system("cls");
				cout << "			Productos" << endl;
				cout << "================================================================="<<endl;
				cout << "A- Agroquímicos" << endl;
				cout << "B- Fertilizantes solubles" << endl;
				cout << "C- Fertilizantes granulados" << endl;
				cout << "D- Salir" << endl;
				cout << "Seleccione una opción: " << endl;
				cin >> categProduct;
				switch (categProduct) 
				{	
					case 'D':
						abandonarEjecucion();
					case 'A':
						system("cls");
						system("title Agroquímicos");
  	 				    system("color fc");
						cout << "				Agroquímicos disponibles" << endl;
						cout << "=================================================================" << endl;		
						cout<<concatenado1<<existencia1<<endl;
						cout<<concatenado2<<existencia2<<endl;
						cout<<concatenado3<<existencia3<<endl;
						cout<<concatenado4<<existencia4<<endl;
						cout<<concatenado5<<existencia5<<endl;
						cout<<concatenado6<<existencia6<<endl;
						cout<<concatenado7<<existencia7<<endl;
						cout<<concatenado8<<existencia8<<endl;
						cout<<concatenado9<<existencia9<<endl;
						cout<<concatenado10<<existencia10<<endl;
						cout<<concatenado11<<existencia11<<endl;
						cout<<concatenado12<<existencia12<<endl;
						cout<<concatenado13<<existencia13<<endl;
						cout<<concatenado14<<existencia14<<endl;
						cout<<concatenado15<<existencia15<<endl;
						cout<<concatenado16<<existencia16<<endl;
						cout<<concatenado17<<existencia17<<endl;
						cout<<concatenado18<<existencia18<<endl;
						cout<<concatenado19<<existencia19<<endl;
						cout<<concatenado20<<existencia20<<endl;
						cout<<concatenado21<<existencia21<<endl;
						cout<<concatenado22<<existencia22<<endl;
						cout<<concatenado23<<existencia23<<endl;
						cout<<concatenado24<<existencia24<<endl;
						cout<<concatenado25<<existencia25<<endl;
						cout<<concatenado26<<existencia26<<endl;
						cout<<concatenado27<<existencia27<<endl;
						cout<<concatenado28<<existencia28<<endl;
						cout<<concatenado29<<existencia29<<endl;
						cout<<concatenado30<<existencia30<<endl;
						cout<<concatenado31<<existencia31<<endl;
						cout<<concatenado32<<existencia32<<endl;
						cout<<concatenado33<<existencia33<<endl;
						cout<<concatenado34<<existencia34<<endl;
						cout<<concatenado35<<existencia35<<endl;
			
						cout<<"0- Salir."<<endl;
						
						cout << "Seleccione un producto a comprar: " << endl;
						cin >> agroq;
						switch (agroq) 
							{
								case 0:
									abandonarEjecucion();
								case 1: //Observa que cada case empieza a 8 tabulaciones del margen Betzabé
									system("cls");
									cout<<"Usted eligió: "<<concatenado1<<existencia1<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio1*cantidad;
    									cout<<"El precio de este producto es de $"<<precio1<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia1 = existencia1-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia1 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia1<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
								case 2:
									system("cls");
									cout<<"Usted eligió: "<<concatenado2<<existencia2<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia2)
									{
										importe = precio2*cantidad;
    									cout<<"El precio de este producto es de $"<<precio2<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia2 = existencia2-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia2 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia2<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								
								//Betzabé, copia desde la línea 384 a la 440, que es el caso 1, y pega después de esta serie de comentarios, y modifica
								//todas las varibles como existencia1 a existencia3, precio1 a precio3, etc., sin espacios entre el nombre de la variable
								//y el número. Asegúrate de pegar la parte de caso
								//JUSTO AQUÍ, porque debes asegurarte de que los case quden en la misma alineación. Te toca hacer del caso 3 al 34 de los
								//productos agrícolas. ¡Gracias por la ayuda!
								case 3:
									system("cls");
									cout<<"Usted eligió: "<<concatenado3<<existencia3<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia3)
									{
										importe = precio3*cantidad;
    									cout<<"El precio de este producto es de $"<<precio3<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia3 = existencia3-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia3 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia3<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 4:
									system("cls");
									cout<<"Usted eligió: "<<concatenado4<<existencia4<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia4)
									{
										importe = precio4*cantidad;
    									cout<<"El precio de este producto es de $"<<precio4<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia4 = existencia4-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia4 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia4<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 5: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado5<<existencia5<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia5)
									{
										importe = precio5*cantidad;
    									cout<<"El precio de este producto es de $"<<precio5<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia5 = existencia5-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia5 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia5<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 6: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado6<<existencia6<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia6)
									{
										importe = precio6*cantidad;
    									cout<<"El precio de este producto es de $"<<precio6<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia6 = existencia6-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia6 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia6<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 7: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado7<<existencia7<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia7)
									{
										importe = precio7*cantidad;
    									cout<<"El precio de este producto es de $"<<precio7<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia7 = existencia7-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia7 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia7<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 8: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado8<<existencia8<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia8)
									{
										importe = precio8*cantidad;
    									cout<<"El precio de este producto es de $"<<precio8<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia8 = existencia8-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia8 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia8<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 9: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado9<<existencia9<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia9)
									{
										importe = precio9*cantidad;
    									cout<<"El precio de este producto es de $"<<precio9<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia9 = existencia9-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia9 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia9<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 10: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado10<<existencia10<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio10*cantidad;
    									cout<<"El precio de este producto es de $"<<precio10<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia10 = existencia10-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia10 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia10<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 11: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado11<<existencia1<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia11)
									{
										importe = precio11*cantidad;
    									cout<<"El precio de este producto es de $"<<precio11<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia11 = existencia11-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia1 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia11<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 12:
									system("cls");
									cout<<"Usted eligió: "<<concatenado12<<existencia12<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia12)
									{
										importe = precio12*cantidad;
    									cout<<"El precio de este producto es de $"<<precio12<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia12 = existencia12-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia12 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia12<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
								case 13:
									system("cls");
									cout<<"Usted eligió: "<<concatenado13<<existencia13<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia13)
									{
										importe = precio13*cantidad;
    									cout<<"El precio de este producto es de $"<<precio13<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia13 = existencia13-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia13 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia13<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}		
								case 14: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado14<<existencia14<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio14*cantidad;
    									cout<<"El precio de este producto es de $"<<precio14<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia14 = existencia14-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia14 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia14<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 15:
									system("cls");
									cout<<"Usted eligió: "<<concatenado15<<existencia15<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia15)
									{
										importe = precio15*cantidad;
    									cout<<"El precio de este producto es de $"<<precio15<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia15 = existencia15-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia15 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia15<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}									
								case 16:
									system("cls");
									cout<<"Usted eligió: "<<concatenado16<<existencia16<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia16)
									{
										importe = precio16*cantidad;
    									cout<<"El precio de este producto es de $"<<precio16<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia16 = existencia16-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia16 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia16<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 17: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado17<<existencia17<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia17)
									{
										importe = precio17*cantidad;
    									cout<<"El precio de este producto es de $"<<precio17<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia17 = existencia17-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia17 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia17<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 18: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado18<<existencia18<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio18*cantidad;
    									cout<<"El precio de este producto es de $"<<precio18<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia18 = existencia18-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia18 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia18<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 19: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado19<<existencia19<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia19)
									{
										importe = precio19*cantidad;
    									cout<<"El precio de este producto es de $"<<precio19<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia19 = existencia19-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia19 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia19<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}			
								case 20:
									system("cls");
									cout<<"Usted eligió: "<<concatenado20<<existencia20<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia20)
									{
										importe = precio20*cantidad;
    									cout<<"El precio de este producto es de $"<<precio20<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia20 = existencia20-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia20 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia20<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 21: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado21<<existencia21<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia21)
									{
										importe = precio21*cantidad;
    									cout<<"El precio de este producto es de $"<<precio21<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia21 = existencia21-cantidad;
										cout << "La cantidad de productos restantes es: "<<existencia21<< endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia21<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;	
									}
								case 22: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado22<<existencia22<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio22*cantidad;
    									cout<<"El precio de este producto es de $"<<precio22<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia22 = existencia22-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia22 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia22<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
							case 23: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado23<<existencia23<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio23*cantidad;
    									cout<<"El precio de este producto es de $"<<precio23<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia23 = existencia23-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia1 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia23<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 24:
									system("cls");
									cout<<"Usted eligió: "<<concatenado24<<existencia24<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio24*cantidad;
    									cout<<"El precio de este producto es de $"<<precio24<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia24 = existencia24-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia24 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia24<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 25:
									system("cls");
									cout<<"Usted eligió: "<<concatenado25<<existencia25<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia25)
									{
										importe = precio25*cantidad;
    									cout<<"El precio de este producto es de $"<<precio25<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia25 = existencia25 - cantidad;
										cout << "La cantidad de productos restantes es: " << existencia25 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia25<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
									}	
								case 26: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado26<<existencia26<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia26)
									{
										importe = precio25*cantidad;
    									cout<<"El precio de este producto es de $"<<precio26<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia26 = existencia26-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia26 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia26<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 27: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado27<<existencia27<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio27*cantidad;
    									cout<<"El precio de este producto es de $"<<precio27<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia27 = existencia27-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia27 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia27<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 28:
									system("cls");
									cout<<"Usted eligió: "<<concatenado28<<existencia28<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia28)
									{
										importe = precio28*cantidad;
    									cout<<"El precio de este producto es de $"<<precio28<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia28 = existencia28-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia28 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia28<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}		
								case 29: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado29<<existencia29<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia29)
									{
										importe = precio29*cantidad;
    									cout<<"El precio de este producto es de $"<<precio29<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia29 = existencia29-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia29 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia29<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 30:
									system("cls");
									cout<<"Usted eligió: "<<concatenado30<<existencia30<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia30)
									{
										importe = precio30*cantidad;
    									cout<<"El precio de este producto es de $"<<precio30<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia30 = existencia30-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia30 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia30<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
								case 31: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado31<<existencia31<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia31)
									{
										importe = precio31*cantidad;
    									cout<<"El precio de este producto es de $"<<precio31<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia31 = existencia31-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia31 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia31<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
								case 32: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado32<<existencia32<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia32)
									{
										importe = precio32*cantidad;
    									cout<<"El precio de este producto es de $"<<precio32<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia32 = existencia32-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia32 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia32<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
								case 33: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado33<<existencia33<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia33)
									{
										importe = precio33*cantidad;
    									cout<<"El precio de este producto es de $"<<precio33<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia33 = existencia33-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia33 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia33<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
								case 34: 
									system("cls");
									cout<<"Usted eligió: "<<concatenado34<<existencia34<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia1)
									{
										importe = precio34*cantidad;
    									cout<<"El precio de este producto es de $"<<precio34<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia34 = existencia34-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia34 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia34<<" unidades."<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
														
								case 35:
									system("cls");
									cout<<"Usted eligió: "<<concatenado35<<existencia35<<endl;
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia35)
									{
										importe = precio35*cantidad;
    									cout<<"El precio de este producto es de $"<<precio35<<", el total de estos productos es de $"<<importe<<"."<<endl;
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia35 = existencia35-cantidad;
										cout << "La cantidad de productos restantes es: " << existencia35 << endl;
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: ";
											cin >> porcentaje_de_impuesto;
											impuesto = acumulador*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, solo se poseen "<<existencia35<<" unidades"<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
					case 'B':
						system("cls");
						system("title Fertilizantes solubles");
  	    				system("color fc");
						cout << "				Fertilizantes solubles" << endl;
						cout << "=================================================================" << endl;		
						cout<<concatenado36<<existencia36<<endl;
						cout<<concatenado37<<existencia37<<endl;
						cout<<concatenado38<<existencia38<<endl;
						cout<<concatenado39<<existencia39<<endl;
						cout<<concatenado40<<existencia40<<endl;
						cout<<concatenado41<<existencia41<<endl;
						cout<<concatenado42<<existencia42<<endl;
						cout<<concatenado43<<existencia43<<endl;
						cout<<concatenado44<<existencia44<<endl;
						cout<<concatenado45<<existencia45<<endl;
						cout<<concatenado46<<existencia46<<endl;
						cout<<concatenado47<<existencia47<<endl;
						cout<<concatenado48<<existencia48<<endl;
						cout<<concatenado49<<existencia49<<endl;
						cout<<concatenado50<<existencia50<<endl;
						cout<<concatenado51<<existencia51<<endl;
						cout<<concatenado52<<existencia52<<endl;
						cout<<concatenado53<<existencia53<<endl;
						cout<<concatenado54<<existencia54<<endl;
						cout<<concatenado55<<existencia55<<endl;
						cout<<concatenado56<<existencia56<<endl;
						cout<<concatenado57<<existencia57<<endl;
						cout<<concatenado58<<existencia58<<endl;
						cout<<"0- Salir."<<endl;
						
						cout << "Seleccione un producto a comprar: " << endl;
						cin >> ferso;
						switch (ferso) //En este switch debe haber casos de 36 al 58
							{
								case 0:
									abandonarEjecucion();
								case 36: //Aquí empieza el case 36
									system("cls");
									cout<<"Usted eligió: "<<concatenado36<<existencia36<<endl; //Cambiar el número inmediato después de "concatenado"
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia36) //Cambiar el número inmediato después de "existencia"
									{
										importe = precio36*cantidad; //Cambiar el número inmediato después de "precio"
    									cout<<"El precio de este producto es de $"<<precio36<<", el total de estos productos es de $"<<importe<<"."<<endl; //Cambiar el número inmediato después de "precio"
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia36 = existencia36-cantidad; //Cambiar el número inmediato después de ambas "existencia"
										cout << "La cantidad de productos restantes es: " << existencia36 << endl; //Cambiar el número inmediato después de "existencia"
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: "; 
											cin >> porcentaje_de_impuesto;
											impuesto = importe*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia36<<" unidades"<<endl; //Cambiar el número inmediato después de "existencia"
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									} //Esta llave es lo último del case 36
							}	//Esta llave cierra el menú switch de fertilizantes solubles
					case 'C':
						system("cls")
						system("title Fertilizantes granulados");
  	  				    system("color fc");
						cout << "				Fertilizantes granulados" << endl;
						cout << "=================================================================" << endl;		
						cout<<concatenado59<<existencia59<<endl;
						cout<<concatenado60<<existencia60<<endl;
						cout<<concatenado61<<existencia61<<endl;
						cout<<concatenado62<<existencia62<<endl;
						cout<<concatenado63<<existencia63<<endl;
						cout<<concatenado64<<existencia64<<endl;
						cout<<concatenado65<<existencia65<<endl;
						cout<<concatenado66<<existencia66<<endl;
						cout<<concatenado67<<existencia67<<endl;
						cout<<concatenado68<<existencia68<<endl;

						cout<<"0- Salir."<<endl;
						
						cout << "Seleccione un producto a comprar: " << endl;
						cin >> fergra;
						switch (fergra)
						{
							case 59:
								system("cls");
									cout<<"Usted eligió: "<<concatenado59<<existencia59<<endl; //Cambiar el número inmediato después de "concatenado"
    								cout<<"¿Cuántos productos llevará?"<<endl;
   					 				cin>>cantidad;
    								if(cantidad<=existencia59) //Cambiar el número inmediato después de "existencia"
									{
										importe = precio59*cantidad; //Cambiar el número inmediato después de "precio"
    									cout<<"El precio de este producto es de $"<<precio59<<", el total de estos productos es de $"<<importe<<"."<<endl; //Cambiar el número inmediato después de "precio"
    									acumulador = acumulador+importe;
    									contador = contador+cantidad;		
    									existencia59 = existencia59-cantidad; //Cambiar el número inmediato después de ambas "existencia"
										cout << "La cantidad de productos restantes es: " << existencia59 << endl; //Cambiar el número inmediato después de "existencia"
    									cout<<"¿Quiere añadir elementos?"<<endl;
    									cout<<"1.- Si"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto: "; 
											cin >> porcentaje_de_impuesto;
											impuesto = importe*porcentaje_de_impuesto/100;
											cout << "El impuesto es de: $" << impuesto << endl;
											
											totalFinal = acumulador+impuesto;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Si."<<endl;
				    						cout<<"2. No."<<endl;
											acumulador=0;
											contador=0;
											importe=0;
											totalFinal = 0;
											cin>>otraVenta;
											if(otraVenta<2)
											{
												break;
											}
											else
											{
												abandonarEjecucion();
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, sólo se poseen "<<existencia59<<" unidades"<<endl; //Cambiar el número inmediato después de "existencia"
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}
							case 60: //Les toca 
							case 61: //Les toca 
							case 62: //Les toca 
							case 63: //Les toca 
							case 64: //Les toca 
							case 65: //Les toca 
							case 66: //Les toca 
							case 67: //Les toca 
							case 68: //Les toca 
						}
				}	//Esta llave cierra el menú de categorías 
			}
		}
		else
		{
			abandonarEjecucion();
		}
	}

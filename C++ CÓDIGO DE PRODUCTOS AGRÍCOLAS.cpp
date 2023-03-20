
#include "iostream"
#include "string"
#include "stdlib.h"
#include <cstdlib>
#include <locale.h>
#include <windows.h>
#include <conio.h>

using namespace std;
//Declarar strings de concatenado
		string concatenado1 = "1.- Curzate M8, $459.9 por Kg. Hay 67 unidades disponibles.";
		string concatenado2 = "2.- Spectrum , $357 por Kg. Hay 42 unidades disponibles.";
		string concatenado3 = "3.- Surestart, $536.26 por L. Hay 36 unidades disponibles.";
		string concatenado4 = "4.- Crosser, $199.87 por L. Hay 28 unidades disponibles.";
		string concatenado5 = "5.- Agriducor 500, $368.55 por Kg. Hay 72 unidades disponibles.";
		string concatenado6 = "6.- Terraductor, $94.5 por 400 g. Hay 102 unidades disponibles.";
		string concatenado7 = "7.- Cobrezate M, $231.11 por Kg. Hay 18 unidades disponibles.";
		string concatenado8 = "8.- Vydate L, $672.15 por L. Hay 56 unidades disponibles.";
		string concatenado9 = "9.- Exalt, $300.3 por 100 ml. Hay 48 unidades disponibles.";
		string concatenado10 = "10.- Exalt, $3276 por L. Hay 27 unidades disponibles.";
		string concatenado11 = "11.- Lannate 90, $105 por 100 gr. Hay 65 unidades disponibles.";
		string concatenado12 = "12.- Imidafix, $283.5 por 250 ml. Hay 33 unidades disponibles.";
		string concatenado13 = "13.- Imidafix, $918.12 por L. Hay 29 unidades disponibles.";
		string concatenado14 = "14.- Agrocin 20, $84.29 por 240 ml. Hay 54 unidades disponibles.";
		string concatenado15 = "15.- Accent L, $922.74 por L. Hay 12 unidades disponibles.";
		string concatenado16 = "16.- Durango, $226.59 por L. Hay 19 unidades disponibles.";
		string concatenado17 = "17.- Tordon XT 472, $139.23 por L. Hay 48 unidades disponibles.";
		string concatenado18 = "18.- Atrafix 90, $190.82 por Kg. Hay 36 unidades disponibles.";
		string concatenado19 = "19.- Agropa Fix 25, $135.4 por 900 ml. Hay 9 unidades disponibles.";
		string concatenado20 = "20.- Titanit, $389.81 por 200 ml. Hay 15 unidades disponibles.";
		string concatenado21 = "21.- Minoquel Fe 13% EDTA, $278.25 por Kg. Hay 26 unidades disponibles.";
		string concatenado22 = "22.- Minoquel Fe 9% IDHA, $304.5 por Kg. Hay 54 unidades disponibles.";
		string concatenado23 = "23.- Toretto, $685.42 por 150 ml. Hay 64 unidades disponibles.";
		string concatenado24 = "24.- Toretto, $4341.12 por L. Hay 11 unidades disponibles.";
		string concatenado25 = "25.- Rally, $609.84 por 114 gr. Hay 78 unidades disponibles.";
		string concatenado26 = "26.- Totalflix 480, $154.89 por 960 ml. Hay 45 unidades disponibles.";
		string concatenado27 = "27.- Enable, $1420.18 por L. Hay 18 unidades disponibles.";
		string concatenado28 = "28.- OPTYSIL, $563.75 por 500 ml. Hay 27 unidades disponibles.";
		string concatenado29 = "29.- ABAMEFIX 1.8%, $685 por 960 ml. Hay 29 unidades disponibles.";
		string concatenado30 = "30.- Fontelis, $1884.96 por L. Hay 89 unidades disponibles.";
		string concatenado31 = "31.- CPF, $262.67 por 960 ml. Hay 24 unidades disponibles.";
		string concatenado32 = "32.- Zero 5% sc, $501.18 por L. Hay 42 unidades disponibles.";
		string concatenado33 = "33.- Diazinon, $255.91 por L. Hay 5 unidades disponibles.";
		string concatenado34 = "34.- Zierra, $1883.92 por L. Hay 18 unidades disponibles.";
		string concatenado35 = "35.- Equation Pro/ zorvec, $2205 por 500gr o 150 ml. Hay 30 unidades disponibles.";

		string concatenado36 = "36.- Nitrato de Calcio, $278.25 por 25 Kg. Hay 561 bultos disponibles.";
		string concatenado37 = "37.- Nitrato de Potasio, $619.5 por 25 Kg. Hay 151 bultos disponibles.";
		string concatenado38 = "38.- Sulfato de Potasio, $488.25 por 25 Kg. Hay 145 bultos disponibles.";
		string concatenado39 = "39.- MAP, $609 por 25 Kg. Hay 976 bultos disponibles.";
		string concatenado40 = "40.- Nitrato de Magnesio, $341.25 por 25 kg. Hay 121 bultos disponibles.";
		string concatenado41 = "41.- Claruro de Potasio, $279.3 por 25 Kg. Hay 584 bultos disponibles.";
		string concatenado42 = "42.- PEKACID, $1491 por 25 Kg. Hay 774 bultos disponibles.";
		string concatenado43 = "43.- NOVA-MAP, $724.5 por 25 Kg. Hay 313 bultos disponibles.";
		string concatenado44 = "44.- MAGPHOS, $1501.5 por 25 Kg. Hay 78 bultos disponibles.";
		string concatenado45 = "45.- MKP, $934.5 por 25 Kg. Hay 94 bultos disponibles.";
		string concatenado46 = "46.- Crecimiento, $525 por 25 Kg. Hay 211 bultos disponibles.";
		string concatenado47 = "47.- Desarrollo, $561.75 por 25 Kg. Hay 141 bultos disponibles.";
		string concatenado48 = "48.- Produccion, $630 por 25 Kg. Hay 98 bultos disponibles.";
		string concatenado49 = "49.- Multiproposito, $619.5 por 25 Kg. Hay 301 bultos disponibles.";
		string concatenado50 = "50.- Minoquel Mix EDTA, $4541.25 por 25 Kg. Hay 454 bultos disponibles.";
		string concatenado51 = "51.- Minoquel Mix EDTA, $199.5 por 1 Kg. Hay 980 bultos disponibles.";
		string concatenado52 = "52.- Inkabor 21, $1785 por 25 Kg. Hay 431 bultos disponibles.";
		string concatenado53 = "53.- Inkabor 21, $78.75 por 1 Kg. Hay 1016 bultos disponibles.";
		string concatenado54 = "54.- Hunter 5%G, $596.7 por 20 Kg. Hay 12 bultos disponibles.";
		string concatenado55 = "55.- DUCORCOTE ULTRA, $801.63 por 25 Kg. Hay 45 bultos disponibles.";
		string concatenado56 = "56.- DUCORMIX PLUS, $609.59 por 25 Kg. Hay 123 bultos disponibles.";
		string concatenado57 = "57.- VIGOTEC TOP, $305.37 por 2 Kg. Hay 251 bultos disponibles.";
		string concatenado58 = "58.- Sulfato de Magnesio- HEPTA 16%, $157.5 por 25 Kg. Hay 145 bultos disponibles.";

		string concatenado59 = "59.- UREA, $485 por 50 Kg. Hay 212 bultos disponibles.";
		string concatenado60 = "60.- CAPITAN, $350 por 50 Kg. Hay 145 bultos disponibles.";
		string concatenado61 = "61.- DAP 18-46, $705 por 50 Kg. Hay 321 bultos disponibles.";
		string concatenado62 = "62.- SULFATO DE AMONIO, $290 por 50 Kg. Hay 545 bultos disponibles.";
		string concatenado63 = "63.- CLORURO DE POTASIO, $430 por 50 Kg. Hay 546 bultos disponibles.";
		string concatenado64 = "64.- CAUSILLO NARANJA, $425 por 50 Kg. Hay 431 bultos disponibles.";
		string concatenado65 = "65.- NITROPERFECTO, $530 por 50 Kg. Hay 144 bultos disponibles.";
		string concatenado66 = "66.- MICROESSENCIALS, $741 por 50 Kg. Hay 314 bultos disponibles.";
		string concatenado67 = "67.- MEZCLA PLATA, $580 por 50 Kg. Hay 51 bultos disponibles.";
		string concatenado68 = "68.- MAP GRANULAR, $715 por 50 Kg. Hay 121 bultos disponibles.";

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
		int categProduct;
		int agroq;
		int iniciarOsalir;
		int otraVenta;
		int importe;
		float totalFinal;
		int impuestoDecimal;
		double decimalImpuestoCompleto;
int main()
	{
	setlocale(LC_ALL, "es_ES");
	system("title SISTEMA DE VENTA DE PRODUCTOS AGRÍCOLAS");
  	    system("color 0a");
		cout<<"Bienvenido al sistema de venta de productos agrícolas."<<endl;
		cout<<"¿Quiere iniciar o salir?"<<endl;
		cout<<"1. Iniciar"<<endl;
		cout<<"2. Salir"<<endl;
		cin>>iniciarOsalir;
		if (iniciarOsalir<2)
		{
			while(otraVenta=1)
			{
				system("cls");
				cout << "Productos" << endl;
				cout << "================================================================="<<endl;
				cout << "1- Agroquimicos" << endl;
				cout << "2- Fertilizantes solubles" << endl;
				cout << "3- Fertilizantes granulados" << endl;
				cout << "4- SALIR" << endl;
				cout << "Selecciona un produco a comprar : " << endl;
				cin >> categProduct;
				switch (categProduct) 
				{
					case 1:
						system("cls");
						cout << "Agroquimicos disponibles" << endl;
						cout << "=================================================================" << endl;		
						cout<<"1.- Curzate M8, $459.9 por Kg. Hay 67 unidades disponibles."<<endl;
						cout<<"2.- Spectrum , $357 por Kg. Hay 42 unidades disponibles."<<endl;
						cout<<"3.- Surestart, $536.26 por L. Hay 36 unidades disponibles."<<endl;
						cout<<"4.- Crosser, $199.87 por L. Hay 28 unidades disponibles."<<endl;
						cout<<"5.- Agriducor 500, $368.55 por Kg. Hay 72 unidades disponibles."<<endl;
						cout<<"6.- Terraductor, $94.5 por 400 g. Hay 102 unidades disponibles."<<endl;
						cout<<"7.- Cobrezate M, $231.11 por Kg. Hay 18 unidades disponibles."<<endl;
						cout<<"8.- Vydate L, $672.15 por L. Hay 56 unidades disponibles."<<endl;
						cout<<"9.- Exalt, $300.3 por 100 ml. Hay 48 unidades disponibles."<<endl;
						cout<<"10.- Exalt, $3276 por L. Hay 27 unidades disponibles."<<endl;
						cout<<"11.- Lannate 90, $105 por 100 gr. Hay 65 unidades disponibles."<<endl;
						cout<<"12.- Imidafix, $283.5 por 250 ml. Hay 33 unidades disponibles."<<endl;
						cout<<"13.- Imidafix, $918.12 por L. Hay 29 unidades disponibles."<<endl;
						cout<<"14.- Agrocin 20, $84.29 por 240 ml. Hay 54 unidades disponibles."<<endl;
						cout<<"15.- Accent L, $922.74 por L. Hay 12 unidades disponibles."<<endl;
						cout<<"16.- Durango, $226.59 por L. Hay 19 unidades disponibles."<<endl;
						cout<<"17.- Tordon XT 472, $139.23 por L. Hay 48 unidades disponibles."<<endl;
						cout<<"18.- Atrafix 90, $190.82 por Kg. Hay 36 unidades disponibles."<<endl;
						cout<<"19.- Agropa Fix 25, $135.4 por 900 ml. Hay 9 unidades disponibles."<<endl;
						cout<<"20.- Titanit, $389.81 por 200 ml. Hay 15 unidades disponibles."<<endl;
						cout<<"21.- Minoquel Fe 13% EDTA, $278.25 por Kg. Hay 26 unidades disponibles."<<	endl;
						cout<<"22.- Minoquel Fe 9% IDHA, $304.5 por Kg. Hay 54 unidades disponibles."<<endl;
						cout<<"23.- Toretto, $685.42 por 150 ml. Hay 64 unidades disponibles."<<endl;
						cout<<"24.- Toretto, $4341.12 por L. Hay 11 unidades disponibles."<<endl;
						cout<<"25.- Rally, $609.84 por 114 gr. Hay 78 unidades disponibles."<<endl;
						cout<<"26.- Totalflix 480, $154.89 por 960 ml. Hay 45 unidades disponibles."<<endl;
						cout<<"27.- Enable, $1420.18 por L. Hay 18 unidades disponibles."<<endl;
						cout<<"28.- OPTYSIL, $563.75 por 500 ml. Hay 27 unidades disponibles."<<endl;
						cout<<"29.- ABAMEFIX 1.8%, $685 por 960 ml. Hay 29 unidades disponibles."<<endl;
						cout<<"30.- Fontelis, $1884.96 por L. Hay 89 unidades disponibles."<<endl;
						cout<<"31.- CPF, $262.67 por 960 ml. Hay 24 unidades disponibles."<<endl;
						cout<<"32.- Zero 5% sc, $501.18 por L. Hay 42 unidades disponibles."<<endl;
						cout<<"33.- Diazinon, $255.91 por L. Hay 5 unidades disponibles."<<endl;
						cout<<"34.- Zierra, $1883.92 por L. Hay 18 unidades disponibles."<<endl;
						cout<<"35.- Equation Pro/ zorvec, $2205 por 500gr o 150 ml. Hay 30 unidades disponibles."<<endl;			
						cout<<"36- Salir."<<endl;
						
						cout << "Seleccione un producto a comprar: " << endl;
						cin >> agroq;
						switch (agroq) 
							{
								case 1:
									system("cls");
									cout<<"Usted eligió: "<<concatenado1<<endl;
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
    									cout<<"1.- Sí"<<endl;
    									cout<<"2.- No"<<endl;
   					 					cin>>otroProducto;
   					 					if(otroProducto<2)			
    									{			
  		  									break;
										}
										else
										{
    										cout << "Ingrese el valor de porcentaje de impuesto:"; //Arregla esto por favor Jeremy
											cin >> porcentaje_de_impuesto;
											
											totalFinal = acumulador*;
														
											cout<<"El total será de $"<<totalFinal<<endl;
    										cout<<"¿Desea realizar otra venta?"<<endl;
    										cout<<"1. Sí."<<endl;
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
												cout<<"Hasta luego."<<endl;
												Sleep(3000);
												exit(1);
											}
										}
										
									}
									else
									{
										system("cls");
										cout<<"La cantidad de productos es insuficiente, solo se poseen "<<existencia1<<" unidades"<<endl;
										cout<<"Intente de nuevo..."<<endl;
										Sleep(3000);
										break;
									}	
							}				
				}					
			}
		}
		else
		{
			cout<<"¡Hasta pronto!"<<endl;
			Sleep(100);
			exit(1);
		}
	}

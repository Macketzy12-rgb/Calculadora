#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include<vector>
#include<array>
#include<string>
using namespace std;
void pausa();

#define DEFAULT0 "\x1b[0m" //TEXTO
#define DEFAULT1 "\x1b[39m" // COLOR
#define DEFAULTF "\x1b[49m" // FONDO

//== = Colores == = 
//== = Texto == = 
//-Rojo 
#define RED "\x1b[31m" 
//- Verde 
#define GREEN "\x1b[32m" 
//- Negro
#define BLACK "\x1b[30m" 
//- Azul 
#define BLUE "\x1b[34m" 
//- Amarillo 
#define YELLOW "\x1b[33m" 
//- Magenta 
#define MAGENTA "\x1b[35m" 
//- Cyan
#define CYAN "\x1b[36m" 
//- Blanco 
#define WHITE "\x1b[37m" 
//- Gris Claro
#define LIGHT_GRAY "\x1b[90m" 
//- Rojo Claro 
#define LIGHT_RED "\x1b[91m" 
//- Verde Claro 
#define LIGHT_GREEN "\x1b[92m" 
//- Amarillo Claro
#define LIGHT_YELLOW "\x1b[93m" 
//- Azul Claro 
#define LIGHT_BLUE "\x1b[94m" 
//- Magenta Claro 
#define LIGHT_MAGENTA "\x1b[95m" 
//- Cyan Claro 
#define LIGHT_CYAN "\x1b[96m"
//- Blanco Claro 
#define LIGHT_WHITE "\x1b[97m" 

//== = Modificadores == = 
//== = Texto == = 
//-Dim(No identificado aun) 
#define DIM "\x1b[2m" 
//- Reverse(Si el fondo es negro, el texto sera blanco y al contrario) 
#define REVERSE "\x1b[7m"
//- Hidden(No identificado aun) 
#define HIDDEN "\x1b[8b" 
//- Bold(ON / OFF) (No identificado aun) 
#define BOLD_ON "\x1b[1m" 
#define BOLD_OFF "\x1b[21m" 
//- Underline(ON / OFF) (Subraya el texto) 
#define UNDERLINE_ON "\x1b[4m" 
#define UNDERLINE_OFF "\x1b[24m" 
//- Blink(ON / OFF) (No identificado aun) 
#define BLINK_ON "\x1b[5m" 
#define BLINK_OFF "\x1b[25m" 

//== = Fondos == = 
//== = Texto == = 
//-Negro 
#define BLACKF "\x1b[40m" 
//- Rojo 
#define REDF "\x1b[41m" 
//- Verde 
#define GREENF "\x1b[42m" 
//- Amarillo 
#define YELLOWF "\x1b[43m" 
//- Azul 
#define BLUEF "\x1b[44m" 
//- Magenta
#define MAGENTAF "\x1b[45m" 
//- Cyan
#define CYANF "\x1b[46m" 
//- Blanco
#define WHITEF "\x1b[47m"
//- Gris Claro
#define LIGHT_GRAYF "\x1b[100m" 
//- Rojo Claro
#define LIGHT_REDF "\x1b[101m" 
//- Verde Claro
#define LIGHT_GREENF "\x1b[102m" 
//- Amarillo Claro
#define LIGHT_YELLOWF "\x1b[103m" 
//- Azul Claro 
#define LIGHT_BLUEF "\x1b[104m" 
//- Magenta Claro
#define LIGHT_MAGENTAF "\x1b[105m" 
//- Cyan Claro 
#define LIGHT_CYANF "\x1b[106m" 
//- Blanco Claro
#define LIGHT_WHITEF "\x1b[107m" 

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		system("cls");
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << BLINK_ON << "||    P R O G R A M A    C A L C U L A D O R A              ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "|| " DEFAULT0 << LIGHT_YELLOWF << RED << "E s t a s   s o n   l a s   o p c i o n e s:" DEFAULT0 << LIGHT_YELLOWF << BLUE << "             ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t1.- OPCION SUMA                ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t2.- OPCION RESTA               ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t3.- OPCION MULTIPLICACION      ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t4.- OPCION DIVISION            ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << BLUEF << BLACK << "||  H A S   E L E G I D O  OPCION SUMA  ||" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_GREEN << "||                                                          ||" DEFAULT0 << endl; // 54 + 8
			{
				int resuno;
				int numuno;
				int numdos;
				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;
				cin >> numuno;
				cout << WHITEF << GREEN << "||INTRODUCE EL SEGUNDO NUMERO:                             ||" DEFAULT0 << endl;
				cin >> numdos;
				resuno = numuno + numdos;
				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << WHITEF << GREEN << "||  El resultado es: " << resuno << "                                       ||" DEFAULT0 << endl;
				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "||  H A S   E L E G I D O  OPCION RESTA   ||" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl; //61
			{
				int resultrest;
				int numerouno;
				int numerodos;
				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;
				cin >> numerouno;
				cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;
				cin >> numerodos;
				resultrest = numerouno - numerodos;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "|| El resultado seria: " << resultrest << "                                 ||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
			}
			pausa();
			break;
		case '3':
			system("cls");
			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << GREENF << RED << "||    H A S   E L E G I D O   LA OPCION MULTIPLICACION    ||" DEFAULT0 << endl;
			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << GREENF << RED << "||                                                          ||" DEFAULT0 << endl;
			{
				int resultmult;
				int numerou;
				int numerod;
				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;
				cin >> numerou;
				cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;
				cin >> numerod;
				resultmult = numerou * numerod;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "|| El resultado seria: " << resultmult << "                                 ||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;

			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "|| E L E G I S T E   LA OPCION DIVISION ||" << endl;
			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "|| " DEFAULT0 << LIGHT_WHITEF << CYAN << "NOTA: Favor de no ingresar mas de 9 digitos." DEFAULT0 << LIGHT_WHITEF << MAGENTA << "             ||" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl; {

				int resultadodiv;
				int numeuno;
				int numedos;

				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;
				cin >> numeuno;
				cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;
				cin >> numedos;
				resultadodiv = numeuno / numedos;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "|| El resultado seria: " << resultadodiv << "                                 ||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
			}
			pausa();
			break;

		case '7':
			bandera = true;
			getwchar();
			return 0;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}

//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}

/*  Crear una function que reciba el promedio de clase de un estudiante 
    y retorne una nota con un 


Variables que necesito
double promedio, nota 
*/ 

// creado por Bryan Chavez

#include <iostream>
using namespace std; 

int main(){

    // definir las variables necesarias para que le programa pueda ejecutar su funcion.
    double promedio;
    

    // pedir al usuario que entre su promedio.
    cout << "Entre el promedio obtenido en clase: " << endl;
    cin >> promedio;

    // crear la funcion del programa, crear un if para evaluar los promedios e imprimir el resultado
    if (promedio <= 59)
        cout << "No pasaste la clase. Mejor suerte la proxima vez." << endl;
    else if (promedio <= 69)
        cout << "Pasaste la clase con D" << endl;
    else if (promedio <=79)
        cout << "Pasaste con C" << endl;
    else if (promedio <= 89)
        cout << "Pasaste la clase con B" << endl;
    else if (promedio <= 100)
        cout << "Felicitaciones, pasaste la clase con A" << endl;
    else
        cout << "Entraste un valor invalido. Intenta de nuevo con valores del 0 al 100." << endl;
    
    return 0;

}


	
	

		
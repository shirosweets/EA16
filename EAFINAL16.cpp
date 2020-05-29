 -------------------------------------------------------------------   
*/

// Bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;

// Constantes Globales
const int MAX = 21; 

// Escriba los prototipos de las funciones a continuacion:











// Programa Principal: NO DEBE SER MODIFICADO
int main() 
{
  int    lon;
  int    matriz[10][10];
  double vector[MAX];
  double rango, xmax, xmin, x, min1, min2;
  
  lon = cargar_vector(vector);

  imprimir_vector(vector, lon);

  encontrar_1er_y_2do_minimo(vector, lon, min1, min2);

  cout << "\n El 1er minimo es: " << min1;
  cout << "\n El 2do minimo es: " << min2;

  cout << "\n\n Ingrese en valor de X: ";
  cin >> x;
  
  buscar_xmax_xmin(vector, lon, x, xmax, xmin);

  cout << "\n El mayor numero menor a X es: " << xmin;
  cout << "\n El menor numero mayor a X es: " << xmax;

  ordenar_vector(vector, lon);

  cout << "\n El vector ordenado se imprime a continuacion: ";

  imprimir_vector(vector, lon);
  
  guardar_vector(vector, lon);

  cout << "\n\n";
  return 0;
}

// Escriba las funciones a continuación:

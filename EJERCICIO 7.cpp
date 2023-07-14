#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Crear un archivo de texto
  ofstream archivo("amigos.txt");

  // Escribir en el archivo
  archivo << "amigo1@example.com" << endl;
  archivo << "amigo2@example.com" << endl;
  archivo << "amigo3@example.com" << endl;

  // Cerrar el archivo
  archivo.close();
}

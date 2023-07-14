//Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un número cualquiera por pantalla,
// el número se pedirá en el programa principal. Usar procedimiento 5. Hacer un programa que pida por pantalla una temperatura en grados Celsius,
 //muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por pantalla, utilizar funciones. 
 
 #include <iostream>
using namespace std;

void tablaMultiplicar(int num) {
    for (int i = 1; i <= 20; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    tablaMultiplicar(num);
    return 0;
}

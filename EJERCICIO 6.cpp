#include <stdio.h>

int main()
{
    FILE *archivo;
    char nombreArchivo[] = "archivo.txt";

    archivo = fopen(nombreArchivo, "r");

    if (archivo == NULL)
    {
        printf("El archivo no existe.\n");
    }
    else
    {
        printf("El archivo existe.\n");
        fclose(archivo);
    }

    return 0;
}

// Crear e imprimir todos los elementos de un arreglo tridimensional,
// cuyas dimensiones sean ingresadas por el usuario.
// El programa debe inicializar todas las matrices del arreglo en ceros, a excepción de la última matriz que debe ser inicializada en unos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // ingreso y reconocimiento de variables y generacion del codigo
    int n, m, z;
    // Escaneamos la dimension de la matriz que ingrese el usuario
    printf("Ingrese el valor de las matrices que quiera: ");
    scanf("%d", &z);
    printf("Ingrese el valor para las filas ");
    scanf("%d", &n);
    printf("Ingrese el valor para las columnas ");
    scanf("%d", &m);
    // Agregamos la matriz con los numeros aliatorios y la imrpimimos
    int matrix1[n][m];
    printf("La primera matriz es: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrix1[i][j] = 0;
            ;
            printf("%d\t", matrix1[i][j]);
        }
    }
    // Colocamos la segunada matriz con numeros aleatorios que se van a sumar y la imprimimos
    int matrix2[m][n];
    printf("\n");
    printf("\nLa segunda matriz es: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix2[i][j] = 0;
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    // Colocamos la tercera matriz para que guarde el resultado matricial y imprimimos las misma
    int matrix3[n][m];
    printf("\n");
    printf("\nEl resultado de la suma de las matrices es : \n ");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrix3[i][j] = 1;
            // Imprimimos la matriz resultante
            printf("%d\t", matrix3[i][j]);
        }
    }
    printf("\n\nGracias por utilizar el programa de suma de matrices aleatorias\n\n");
    return 0;
}
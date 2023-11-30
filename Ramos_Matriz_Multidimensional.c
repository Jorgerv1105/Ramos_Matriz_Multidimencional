// Crear e imprimir todos los elementos de un arreglo tridimensional,
// cuyas dimensiones sean ingresadas por el usuario.
// El programa debe inicializar todas las matrices del arreglo en ceros, a excepción de la última matriz que debe ser inicializada en unos.
#include <stdio.h>
int main(){
    //Ingreso de variables y se escanean las mismas
int n,m,z,x;
printf("Coloque el numero de matrices: \n");
scanf("%d", &z);
printf("Coloque el numero de filas: \n");
scanf("%d", &n);
printf("Coloque el numero de columnas:\n");
scanf("%d", &m);
int matrix[n][m];
z=z-1;
for (int k = 0; k < z; k++)
{  
    x=k;
    printf("\n");
    printf("\n");
    printf("Matriz numero %d\n",k);
 
 
    for (int i = 0; i < n; i++)
{
    printf("\n");
 
    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=0;
        printf("%d \t", matrix[i][j]);
    }
   
}
}
    x=x+1;
    printf("\n");
    printf("\n");
    printf("Matriz numero %d\n",x);
 
for (int i = 0; i < n; i++)
{
    printf("\n");
 
    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=1;
        printf("%d \t", matrix[i][j]);
    }
   
}
}
 
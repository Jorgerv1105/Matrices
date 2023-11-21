// Cree una matriz cuyas dimensiones sean ingresadas por el usuario. La matriz puede tener cualquier dimensión.
// Inicialice toda la matriz en ceros.
// Imprima la matriz con la diagonal principal con valores en 1.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // ingreso y reconocimiento de variables
    int n, m;
    // Escaneamos la dimension de la matriz que ingrese el usuario
    printf("Ingrese el valor para filas: ");
    scanf("%d", &n);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", &m);
    //Agregamos la matriz con los casos de las fials y las columnas 
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            //Colocamos la condicion para que la diagonal principal sea de 1
            if (i == j)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
            //Imprimimos la matriz resultante 
            printf("%d\t", matrix[i][j]);
        }
    }

    return 0;
}
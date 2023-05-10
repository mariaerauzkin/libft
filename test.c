#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	*p;             // Puntero a entero
	int	n = 10;         // Número de elementos
	int	i = 0;          // Contador

   // Reservar memoria con malloc
   p = (int*)malloc(n * sizeof(int));
   
   // Comprobar si se reservó correctamente
	if (p == NULL) 
	{
	printf("Error: No se pudo reservar memoria\n");
	exit(1);
	}
   
   // Inicializar valores del arreglo
   while (i < n)
	{
	p[i] = i + 1;
	i++;
	}
   
   // Imprimir valores del arreglo
	i = 0;
	while (i < n) {
	printf("%d ", p[i]);
	i++;
	}
   
   // Liberar memoria
	free(p);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t count, size_t size) {
    void *ptr = malloc(count * size);
    if (!ptr) {
        return NULL; // Manejo de error
    }
    // Inicializa la memoria a cero
    memset(ptr, 0, count * size);
    return ptr;
}

int main() {
    int *arr;
    size_t n = 5;

    // Usamos ft_calloc para asignar memoria
    arr = (int *)ft_calloc(n, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Error al asignar memoria\n");
        return 1;
    }

    // Imprimimos el contenido del arreglo
    for (size_t i = 0; i < n; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Liberamos la memoria
    free(arr);
    return 0;
}

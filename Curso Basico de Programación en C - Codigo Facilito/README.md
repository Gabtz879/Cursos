```markdown
## ✅ Temas cubiertos en esta etapa (Capítulos 15 al 20)

- **Arreglos variables y matrices**  
  - Declaración de VLA (Variable Length Arrays) con tamaño leído en tiempo de ejecución  
  - Inicialización y recorrido con bucle `for`  
  - Creación y acceso a matrices 2D usando dimensiones dinámicas

- **Control de flujo con `break` y `continue`**  
  - Uso de `continue` para saltar a la siguiente iteración  
  - Interrupción de bucles con `break`  
  - Aplicación práctica dentro de un `while`

- **Funciones y prototipos**  
  - Declaración de prototipos antes de `main()`  
  - Definición de funciones `void` y con valor de retorno  
  - Llamadas limpias y modularización del código

- **Funciones recursivas**  
  - Implementación de `factorial(n)` con caso base y recursividad  
  - Retorno de valores de tipo `long` para evitar overflow  
  - Lectura de datos por `scanf()` e impresión del resultado

- **Punteros y llamada por referencia**  
  - Declaración de punteros (`int *`) para recibir direcciones  
  - Paso de `&variable` para modificarla dentro de la función  
  - Desreferenciación con `*` para acceder y actualizar el dato apuntado

---

## 🧠 Ejemplo de función por referencia (punteros)

```c
#include <stdio.h>

void cubo(int *n);    // Prototipo

int main() {
    int numero = 2;
    cubo(&numero);   
    printf("Valor al cubo: %i\n", numero);  // Imprime 8
    return 0;
}

void cubo(int *n) {
    *n = (*n) * (*n) * (*n);
}
```

> 🎯 Tip: Pasar la dirección con `&numero` permite modificar directamente la variable original sin necesidad de `return`.

---

📅 Última actualización: *14/07/2025*  
👨‍💻 Autor: Gabriel Jiménez  
🚀 Progreso: 20/29 capítulos completados  
📁 Archivos generados hoy:  
- `arreglos_matrices.c`  
- `break_continue.c`  
- `funciones_basicas.c`  
- `funciones_recursivas.c`  
- `punteros_referencia.c`

> Esta sección consolida el dominio de estructuras dinámicas, control de flujo, modularidad y manejo de memoria con punteros en C. ⚙️🧠📘  
```
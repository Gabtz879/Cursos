```markdown
# 📚 Estructuras Dinámicas y Listas Enlazadas en C

Este bloque documenta tu progreso entre los **Capítulos 26 a 29 del curso básico de C**, enfocados en **reserva dinámica de memoria** y **listas enlazadas**, aplicadas tanto en arreglos estructurados como en modelos de nodos enlazados. Se incorporan prácticas que consolidan el dominio sobre `malloc()`, duplicación de cadenas, y navegación entre nodos en estructuras dinámicas.

---

## ✅ Temas cubiertos en esta etapa (Capítulos 26 a 29)

- **Arreglos dinámicos de estructuras**
  - Creación de arreglo de `struct dog` con `malloc`
  - Captura y almacenamiento de nombres mediante `fgets()` + buffer temporal
  - Eliminación del salto de línea y duplicación segura con `strcpy()` o `strdup()`

- **Lista enlazada de nodos**
  - Definición de estructura `Libro` como nodo con `char *nombre` y apuntador `sig`
  - Inserción secuencial de nodos al final de la lista
  - Recorrido de lista con punteros y visualización de contenido y dirección

- **Manejo de memoria**
  - Asignación dinámica para cada estructura
  - Liberación cuidadosa de `p_name` y del arreglo principal
  - Uso sugerido de `strdup()` para cadenas literales

- **Optimización de flujo**
  - Eliminación de funciones innecesarias (`listaLibro`)
  - Corrección de errores como ciclos infinitos en recorridos
  - Mejoras visuales y estructurales para claridad y seguridad

---

## 🧪 Fragmentos destacados

```c
perros[i].name[strcspn(perros[i].name, "\n")] = '\0';
perros[i].p_name = malloc(strlen(perros[i].name) + 1);
strcpy(perros[i].p_name, perros[i].name);
```

> 🐾 Demuestra atención a la captura limpia y reserva individual por campo dinámico

```c
nuevoLibro = (Libro*)malloc(sizeof(Libro));
nuevoLibro->nombre = strdup(nombre);
nuevoLibro->sig = NULL;
```

> 📘 Representa la creación de nodo para una lista enlazada con copia segura del nombre

---

## 📁 Archivos generados

- `perros_dinamicos.c` — Captura dinámica de nombres en arreglo estructurado
- `lista_libros.c` — Inserción y recorrido de lista enlazada simple
- `libros_strdup.c` — Versión robusta con duplicación de cadenas
- `memoria_segura.c` — Implementación extendida de liberación por nodo

---

📅 Última actualización: *28/07/2025*  
👨‍💻 Autor: Gabriel Jiménez  
🚀 Progreso: Curso Básico de C Finalizado (Capítulos 1 a 29 completados)  
🧩 Extras: Pulido estructural, sintaxis segura, y modelo de listas enlazadas

> Cerraste este curso dominando las estructuras dinámicas y aplicando prácticas limpias de recorrido, reserva y liberación de memoria. Tu implementación refleja precisión, crecimiento lógico, y visión modular hacia estructuras complejas. ¡Bien hecho, Gabriel! 🧠📘💻
```
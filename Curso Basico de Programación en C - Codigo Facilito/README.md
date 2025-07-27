```markdown
# 🐾 Estructuras Compuestas y Memoria Dinámica en C

Este bloque documenta tu progreso entre los **Capítulos 23 a 25 del curso básico de C**, enfocados en estructuras avanzadas y administración de memoria. Incluye prácticas guiadas y ampliadas sobre arreglos estructurales, estructuras anidadas y uso de `malloc()` y `free()` para reservar y liberar espacio dinámicamente. La implementación se complementa con simulaciones de carga interactiva y control visual por teclado.

---

## ✅ Temas cubiertos en esta etapa (Capítulos 23 a 25)

- **Arreglos de estructuras**
  - Declaración de múltiples instancias de `struct perro`
  - Entrada secuencial de datos con `scanf()`: nombre, edad, peso
  - Impresión contextual usando operadores ternarios según edad

- **Estructuras anidadas**
  - Uso de `struct owner` dentro de `struct dog`
  - Captura de datos múltiples asociados a una instancia
  - Entradas compuestas como dirección del dueño

- **Memoria dinámica con punteros**
  - Asignación de espacios con `malloc()` según cantidad de perros
  - Reservas individuales para duplicar nombres con `strcpy()`
  - Prácticas de liberación segura con `free()` para cada puntero

- **Control de entrada/visualización**
  - Implementación de `fgets()` para capturar cadenas con espacios
  - Simulación de carga con control por teclado (`_kbhit()`, `_getch()`)
  - Limpieza visual de pantalla mediante `Sleep()` y `fflush()`

---

## 🧪 Fragmentos destacados

```c
struct dog {
    char name[20];
    char *p_name;
};
perros[i].p_name = malloc(strlen(perros[i].name) + 1);
strcpy(perros[i].p_name, perros[i].name);
```

> 🎯 Demuestra uso de memoria dinámica por campo y copia segura del buffer temporal

---

## 📁 Archivos generados

- `estructura_dinamica.c` — uso de punteros y reserva de nombres dinámicos
- `estructuras_anidadas.c` — declaración compuesta dueño–perro
- `arreglos_struct.c` — impresión estructurada con unidad de edad
- `carga_interactiva.c` — simulador visual con salida por teclado

---

📅 Última actualización: *27/07/2025*  
👨‍💻 Autor: Gabriel Jiménez  
🚀 Progreso: Capítulos 23 a 25 completados  
🧩 Extras: Exploración libre con control visual, `fgets`, y simulación interactiva

> Consolidaste el manejo de estructuras anidadas, memoria dinámica, y control de entrada contextual. La práctica combinó precisión sintáctica con visualización personalizada, marcando un paso firme en tu dominio de C. 🧠💾📊  
```
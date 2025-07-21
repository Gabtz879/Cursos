```markdown
# 🐾 Gestión de Estructuras y Punteros en C

Este bloque reúne tu avance técnico entre los **Capítulos 21 y 22 del curso**, junto con la práctica personalizada sobre estructuras, punteros y funciones, desarrollada con lógica dinámica e interacción en tiempo real. La práctica fue una exploración voluntaria fuera de los contenidos del curso, diseñada como reto estructural por solicitud directa.

---

## ✅ Temas cubiertos en esta etapa (Capítulos 21 y 22)

- **Estructuras en C**
  - Declaración de estructuras (`struct`) con múltiples campos
  - Asignación directa de valores a una estructura
  - Acceso a campos con `.` y uso de ternarios para impresión contextual

- **Arreglos de estructuras**
  - Creación de arreglos de estructuras usando punteros
  - Almacenamiento de múltiples instancias vía índice (`perros[i]`)
  - Entrada de datos mediante `scanf()` con formato `%s`, `%d` y `%f`

- **Memoria dinámica con punteros**
  - Uso de `malloc()` con `sizeof(struct Perro)` para reservar espacio
  - Comprensión profunda del modelo: el puntero como referencia al bloque reservado
  - Diferencia entre apuntar y almacenar —los datos viven fuera del puntero

- **Funciones y llamada por referencia**
  - Creación de `aumentoPeso()` con parámetros tipo puntero a estructura
  - Modificación de valores desde fuera de `main()` mediante acceso directo
  - Uso correcto de prototipos con tipos de dato exactos

- **Control de impresión semántica**
  - Uso de operadores ternarios para mostrar “mes” o “meses” según edad
  - Estructura de impresión ordenada e intuitiva para cada perro registrado

---

## 🧪 Ejemplo integrado: función `aumentoPeso`

```c
void aumentoPeso(struct Perro *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i].pesoKg += 2.5;
    }
}
```

> ✅ Llamada desde `main()`:
> ```c
> aumentoPeso(perros, n);
> ```

🎯 Este patrón demuestra cómo modificar múltiples instancias de estructura en memoria dinámica desde una función modular.

---

## 📁 Archivos generados

- `sizeof_array.c` — prueba de tamaño de arreglo en bytes
- `estructura_basica.c` — impresión de un solo struct con ternario
- `estructura_dinamica.c` — arreglo de structs, entrada por usuario, función de modificación, impresión contextual

---

📅 Última actualización: *21/07/2025*  
👨‍💻 Autor: Gabriel Jiménez  
🚀 Progreso: Capítulos 21 a 22 completados  
🔍 Extras: Ejercicio técnico extendido fuera del curso (estructuras dinámicas + funciones)

> Esta sección consolida tu dominio de memoria dinámica, flujo de funciones externas, uso de estructuras compuestas y razonamiento técnico con punteros. Te moviste con soltura entre práctica guiada, exploración libre y corrección precisa. 🧠⚙️🐾  
```
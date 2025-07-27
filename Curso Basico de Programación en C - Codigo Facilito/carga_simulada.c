#include <stdio.h>
#include <conio.h>     // _kbhit() y _getch()
#include <windows.h>   // Sleep()

int main() {
    printf("Cargando... (presiona 'q' para salir)\n");

    while (1) {
        for (int i = 0; i < 3; i++) {
            if (_kbhit()) {          // Si se presionó alguna tecla
                char tecla = _getch();
                if (tecla == 'q') {  // Si la tecla es 'q', salir
                    printf("\nSalida activada por teclado.\n");
                    return 0;
                }
            }

            printf(".");
            fflush(stdout);
            Sleep(1000); // 1 segundo
        }

        // Borra los puntos, deja línea limpia
        printf("\r   \r");
        fflush(stdout);
    }

    return 0;
}

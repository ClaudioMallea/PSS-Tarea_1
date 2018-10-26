# Instrucciones
# =============
#
# Cree el archivo t1.c y programe ahi las funciones borrar_bits,
# reemplazo y reemplazar.  No modifique los demas archivos.
# Comience el archivo t1.c con las lineas:
# #include <string.h>   (para poder usar strlen)
# #include "t1.h"       (tiene los encabezados de las 3 funciones pedidas)
#
# Su tarea ya esta compilada con la opcion -g, que es necesaria para
# que use gdb o ddd para depurar los errores de programacion.
#
# Para compilar ingrese el comando:
#
# $ make
#
# Resuelva todos errores y warnings de la compilacion.
# Cuando la compilacion sea exitosa, ejecute el programa de prueba con:
#
# $ ./test-t1
#
# El programa de prueba le indicara cual test falla o lo felicitara si
# paso todos los tests.
#
# Para borrar todos los archivos generados (incluyendo binarios):
# $ make clean

CFLAGS= -g -Wall -pedantic -std=c99
LDFLAGS= -g

all: test-t1

test-t1: test-t1.o t1.o

test-t1.o t1.o: t1.h

clean:
	rm -f *.o test-t1

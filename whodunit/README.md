# Questions

## What's `stdint.h`?

es una libreria  de C que declara variables enteras con cierto tamaño de bits

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

que los que tienen el prefijo U son sin signo negativo y que pueden almacenar el doble de datos
que sus contrapartes que aceptan negativos y que el numero que esta luego de int condiciona el
tamaño de esa variable a esa cantidad de bits ejemplos int32_t tiene un tamaño de 32 bits que
abarca desde es desde 0 hasta 4,294,967,295

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1, 4, 8 y 2 respectivamente

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

0x42 0x4D significan BM que son la cabecera para identificar un archivo BMP

## What's the difference between `bfSize` and `biSize`?

bfSize es el numero de bytes totales de el archivo,
y biSize es el numero de bytes requeridos por la estructura

## What does it mean if `biHeight` is negative?

si es positivo es un bitmap que comienza de la esquina inferior izquierda y va de abajo a arriba,
si es negativo va desde la esquina superior izquierda hacia abajo

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

el biBitCount se encarga de definir la cantidad de colores que tendra el bitmap por medio de un conjunto  de valores ...
pongamos de ejemplo el 8 que significa "El mapa de bits tiene un máximo de 256 colores, y la bmiColors miembro
del BITMAPINFO contiene hasta 256 entradas. En este caso, cada byte en la matriz representa un solo píxel."

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

en la  24 en  caso de no  poder abrir o encontar el archivo seleccionado y  en la 32 en caso de
no poder crear o escribir el archivo o nombre de salida seleccionado

## Why is the third argument to `fread` always `1` in our code?

porque es nuestra cantidad de elementos a leer  y en este caso siempre es 1 ya que solo queremos leer ese archivo

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

el valor de pading sera de 1

## What does `fseek` do?

desplaza la posicion actual de lectura/escritura dentro de un archivo

## What is `SEEK_CUR`?

un incremento(+)/decremento(-) relativo a la posicion actual del cursor

# Pset 3 CS50Xni

Implementar:

-   <a href="#Whodunit" class="btn btn-sm btn-default">Whodunit</a>
-    <a href="#Resize" class="btn btn-sm btn-default">Resize</a>
-    <a href="#Recover" class="btn btn-sm btn-default">Recover</a>

<h2 id="Whodunit">Whodunit</h2>

Responde algunas preguntas y entonces implementa un programa que revela un mensaje oculto en un archivo BMP, con el siguiente comando.

```
$ ./whodunit clue.bmp verdict.bmp
```

### Especificaciones

Implemente un programa llamado  `whodunit`  que revele el dibujo del señor Boddy de tal manera que puedas reconocer quien lo hizo

-   Implementa tu programa en un archivo llamado  `whodunit.c`  en un directorio llamado  `whodunit`
    
-   Tu programa debería de aceptar 2 argumentos de líneas de comando: el nombre de un archivo de entrada a abrir para lectura, seguido por el nombre de un archivo de salida para escritura.
    
-   Si tu programa es ejecutado con pocos o más de 2 argumentos de líneas de comando, debería recordarle al usuario el uso correcto, como con  `fprintf`  (a  `stderr`  ) y  `main`  debería retornar  `1`.
    
-   Si el archivo de entrada no puede ser abierto para lectura, tu programa debería informar al usuario tanto como con  `fprintf`  (a  `stderr`), y  `main`  debería retornar  `2`.
    
-   Si el archivo de salida no puede ser abierto para escritura, tu programa debería informar al usuario como con  `fprintf`  (a  `stderr`), y  `main`  debería retornar  `3`.
    
-   Si el archivo de entrada no es un archivo de 24-bit BMP 4.0 sin comprimir, tu programa debería informar al usuario como con  `fprintf`  (a  `stderr`), y  `main`  debería retornar  `4`.
    
-   Una vez finalice,  `main`  debería  `0`.

<h2 id="Resize">Resize</h2>

Implementa un programa que redimensiona archivos BMP, como a continuación:

```
$ ./resize 4 small.bmp large.bmp
```

### Especificaciones

Implemente un programa llamado  `resize`  que redimensione (por ejemplo, haga mas grande) un BMP de 24-bit sin comprimir por un factor  `n`.

-   Implementa tu programa en un archivo llamado  `resize.c`  en un archivo llamado  `resize`.
    
-   Tu programa debería aceptar exactamente 3 argumentos en línea de comando, aparte del nombre del programa, por lo que:
    
    -   La primer (`n`) debe ser un entero positivo menor o igual que  `100`,
        
    -   el segundo debe ser el nombre de un BMP para ser redimensionado y
        
    -   el tercero debe ser el nombre de la versión redimensionada a ser escrita.
        
    
    + Si tu programa no se ejecuta como tal, debería recordar al usuario el uso correcto, como con  `fprintf`  (a  `stderr`  ) y  `main`  debería retornar  `1`.
    
-   Tu programa, si se usa  `malloc`  no debe perder ninguna memoria.

<h2 id="Recover">Recover</h2>

Implemente un programa que recupere JPEG desde una imagen forense, como a continuación.

```
$ ./recover card.raw
```

### Especificaciones

Implemente un programa llamado  `recover`  que recupere las imágenes JPEG desde una imagen forense

-   Implementa tu programa en un archivo llamado  `recover.c`  en un directorio llamado  `recover`.
    
-   Tu programa debería aceptar exactamente un argumento de línea de comando, el nombre de una imagen forense desde la cual recupera los archivos JPEG. + Si tu programa no es ejecutado con exactamente un argumento de linea de comando, debería recordar al usuario el uso correcto ,como con  `fprintf`  (a  `stderr`  ) y  `main`  debería retornar  `1`.
    
-   Si la imagen forense no puede ser abierta para lectura, tu programa debería informar al usuario tanto como con  `fprintf`  (a  `stderr`), y  `main`  debería retornar  `2`.
    
-   Tu programa, si se usa  `malloc`  no debe perder ninguna memoria
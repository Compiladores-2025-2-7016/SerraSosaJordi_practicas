### Respuestas

3. Use el siguiente comando: `cpp programa.c programa.i`

Revise el contenido de _programa.i_ y conteste lo siguiente:

<ol  type="a">

<li>¿Qué ocurre cuando se invoca el comando <i>cpp</i> con esos argumentos?</li>

cpp es el pre-procesador de C y realiza las etapas de la fase traducción: cambiar los trigrafos '??-' por su caracter equivalente, empalmado cuando hay líneas con salto ("\n"), quitar comentarios, expandir macros y ejecutar las lineas de directivas como #include y #define.

<li>¿Qué similitudes encuentra entre los archivos <i>programa.c</i> y <i>programa.i</i>?</li>

el archivo .i contiene el programa.c al final, después de todo lo que se incluye en las directivas.

<li>¿Qué pasa con las macros y los comentarios del código fuente original en <i>programa.i</i>?</li>

Las macros se expanden y los comentarios se borran

<li>Compare el contenido de <i>programa.i</i> con el de <i>stdio.h</i> e indique de forma general las similitudes entre ambos
archivos.</li>

stdio.h hace referencias a otras librerías y contiene las directivas sin pre-proceso, mientras que programa.i incluye el contenido expandido resultado del preproceso.

<li>¿A qué etapa corresponde este proceso?</li>

pre-proceso

</ol>

  

---

  

4. Ejecute la siguiente instrucción: ``gcc -Wall -S programa.i``

<ol  type="a">

<li>¿Para qué sirve la opción <i>-Wall</i  >?</li>

Activa casi todos los warnings del compilador.

<li>¿Qué le indica a gcc la opción <i>-S</i>?</li>

quita la información de tabla de símbolos del ejecutable

<li>¿Qué contiene el archivo de salida y cuál es su extensión?</li>

primero nada por que no compilaba por que no le puse espacio entre el `*` y la `r` en la definición de area `3.14159 *r *r`. Luego, cuando lo corregí, un archivo.s en lenguaje ensamblador

<li>¿A qué etapa corresponde este comando?</li>

Compilación

</ol>

  

---

  

5. Ejecute la siguiente instrucción: `as programa.s -o programa.o`

<ol  type="a">

<li> Antes de revisarlo, indique cuál es su hipótesis sobre lo que debe contener el archivo con extensión <i>.o</i>. </li>

El archivo ensamblado.

<li> Diga de forma general qué contiene el archivo <i>programa.o</i> y por qué se visualiza de esa manera. </li>

Un par de palabras legibles entre caracteres no imprimibles (binario compilado para la arquitectura)

<li> ¿Qué programa se invoca con <i>as</i>? </li>

el ensamblador.

<li> ¿A qué etapa corresponde la llamada a este programa? </li>

Ensamble.

</ol>

  

---

  

6. Encuentre la ruta de los siguientes archivos en el equipo de trabajo:

* ld-linux-x86-64.so.2

>`/usr/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2`

* Scrt1.o (o bien, crt1.o)

>`/usr/lib/x86_64-linux-gnu/Scrt1.o`

* crti.o

>`/usr/lib/x86_64-linux-gnu/crti.o`

* crtbeginS.o

>`/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o`

* crtendS.o

>`/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o`

* crtn.o

>`/usr/lib/x86_64-linux-gnu/crtn.o`

---

  

7. Ejecute el siguiente comando, sustituyendo las rutas que encontró en el paso anterior:

```bash

ld  -o  ejecutable  -dynamic-linker  /usr/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2  /usr/lib/x86_64-linux-gnu/Scrt1.o  /usr/lib/x86_64-linux-gnu/crti.o  programa.o  -lc  /usr/lib/x86_64-linux-gnu/crtn.o

```

  

<ol  type="a">

<li> En caso de que el comando ld mande errores, investigue como enlazar un programa utilizando el comando <i>ld</i>. Y proponga una posible solución para llevar a cabo este proceso con éxito. </li>

<li> Describa el resultado obtenido al ejecutar el comando anterior. </li>

se generó un archivo simplemente llamado `ejecutable` esto es el producto de realizar el último paso de <i>enlazado</i>

</ol>

  

---

8. Una vez que se enlazó el código máquina relocalizable, podemos ejecutar el programa con la siguiente

instrucción en la terminal: ```./ejecutable```

Listo. Imprime:

>hola mundo!
>
>Resultado : 28.274309

(le puse 3.14159)

---

  

9. Quite el comentario de la macro _#define PI_ en el código fuente original y conteste lo siguiente:

<ol  type="a">

<li> Genere nuevamente el archivo.i. De preferencia asigne un nuevo nombre.</li>

<li> ¿Cambia en algo la ejecución final? </li>

Ahora imprime:

>hola mundo!
>
>Resultado : 28.274334

Es decir, 0.000025 de diferencia.

</ol>

  

---

  

10. Escribe un segundo programa en lenguaje **_C_** en el que agregue 4 directivas del preprocesador

de _**C**_ (_cpp_)[^1]. Las directivas elegidas deben jugar algún papel en el significado del programa, ser distintas entre sí y

diferentes de las utilizadas en el primer programa (aunque no están prohibidas si las requieren).

<ol  type="a">

<li>Explique su utilidad

general y su función en particular para su programa.</li>

</ol>

  

---

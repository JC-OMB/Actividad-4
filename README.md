Resuelva el ejercicio que aparecen a continuación:

Ejercicio  (Simulación: la tortuga y la liebre)

En este problema, usted recreará uno de los grandes momentos de la historia, a saber, la clásica carrera entre la tortuga y la liebre. Usted utilizará la generación de números aleatorios para desarrollar una simulación de este memorable suceso.

Nuestros competidores, comienzan la carrera en la “posición 1" de 70. La línea final se encuentra en la posición 70. Al primer competidor en alcanzar o pasar el cuadrante 70 se le recompensará con un montón de zanahorias frescas y lechuga. La ruta va a lo largo de una sinuosa montaña, de manera que ocasionalmente los competidores se caerán.

Existe un reloj que hace un tic por segundo. Con cada tic del reloj, su programa debe ajustar la posición de los animales de acuerdo con las reglas de la Tabla 1.

Utilice variables para dar seguimiento a las posiciones de los animales (es decir, los números de las posiciones entre 1 y 70). Comience cada animal en la posición l (es decir, la “puerta inicial”). Si un animal se va a la izquierda antes de la posición 1, mueva al animal de nuevo a la posición 1.

Genere los porcentajes mediante la producción de un entero aleatorio, i, en el rango i ≤ 10 . Para la tortuga, realice un “paso rápido” cuando l ≤ i ≤ 5, un “deslizamiento” cuando 6 ≤ i ≤ 7, o un paso lento cuando 8 ≤ i ≤ l0. Utilice una técnica similar para mover a la liebre.

Para comenzar la carrera imprima

BANG ! ! ! ! !

Y ARRANCAN ! ! ! ! !

Tabla 1. Reglas para ajustar las posiciones de la tortuga y la liebre.

Animal

Tipo de movimiento

Porcentaje del tiempo

Movimiento real

Tortuga

Paso rápido

50%

3 posiciones a la derecha

 

Deslizamiento

20%

6 posiciones a la izquierda

 

Paso lento

30%

1 posición a la derecha

Liebre

Dormir

20%

Sin movimiento

 

Salto grande

20%

9 posiciones a la derecha

 

Deslizamiento grande

10%

12 posiciones a la izquierda

 

Salto pequeño

30%

1 posición a la derecha

 

Deslizamiento pequeño

20%

2 posiciones a la izquierda

 

Posteriormente, por cada tic del reloj (es decir, cada repetición del ciclo), imprima una línea de 70 posiciones que muestre la letra T en la posición de la tortuga y una letra L en la posición de la liebre. Ocasionalmente, los competidores caerán en la misma posición. En este caso, la tortuga muerde a la liebre y su programa debe imprimir un OUCH ! ! ! !, comenzando en dicha posición. Todas las posiciones además de la T, y de la L, o de OUCH ! ! ! ! (en caso de un empate) deben estar en blanco.

Después de que se imprima una línea, verifique si el animal ya alcanzó o pasó la posición 70. Si es así, entonces imprima el nombre del ganador y termine la simulación. Si la tortuga gana, imprima GANO LA TORTUGA! ! ! ! ! VIVA ! ! ! ! !. Si gana la liebre, imprima Ganó la Liebre. Yupi. Si ambos animales ganan en el mismo tic del reloj, debe imprimir Es un empate.

Cuando esté preparado para ejecutar su programa, reúna a un grupo de amigos para que vea la carrera. ¡Usted se sorprenderá por la manera en que su público se involucra!

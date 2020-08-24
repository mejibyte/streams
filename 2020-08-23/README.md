**Grabación:** https://www.youtube.com/watch?v=aYMp1C3Ei1I

En este stream resolvimos este problema: https://codeo.app/problemas/0xcf-mirando-al-horizonte.

Empezamos con una [estrategia recomendada](https://github.com/mejibyte/streams/blob/master/2020-08-23/estrategia.md) para atacar problemas y luego siguiendo esa estrategia encontramos una [solución O(n^2) al problema](https://github.com/mejibyte/streams/blob/master/2020-08-23/0xcf%20-%20Mirando%20al%20horizonte/solution1.cpp).

Mi plan era cubrir también la solución O(n) que es muy original e interesante, pero no tuvimos suficiente tiempo. (No quería que el stream fuera demasiado largo y ya llevábamos casi 2 horas, así que la explicaré en el futuro).

Para los curiosos, aquí hay 2 maneras diferentes de implementar la solución O(n):

* [Manera 1](https://github.com/mejibyte/streams/blob/master/2020-08-23/0xcf%20-%20Mirando%20al%20horizonte/solution2.cpp): Utilizando una lista o un stack (funciona con cualquiera de las 2 estructuras);
* [Manera 2](https://github.com/mejibyte/streams/blob/master/2020-08-23/0xcf%20-%20Mirando%20al%20horizonte/solution3.cpp): Utilizando "apuntadores" al siguiente elemento más grande. En el fondo es la misma idea pero implementada un poco diferente. Esta versión es interesante porque usa menos memoria.

¡Tengan cuidado! A primera vista la solución O(n) parece ser O(n^2) pero usando análisis amortizado ("amortized analysis") se puede probar que sí es O(n). "Amortized analysis" es una técnica un poco avanzada para calcular la complejidad de un algoritmo. Si eres principiante puedes ignorarla por ahora y estudiarla más adelante. Si eres intermedio, puedes leer una explicación excelente en el capítulo 18 del libro [Introduction to Algorithms](https://en.wikipedia.org/wiki/Introduction_to_Algorithms) de Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, y Clifford Stein.
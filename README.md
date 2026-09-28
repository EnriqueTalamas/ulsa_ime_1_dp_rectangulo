# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_Lo que hace mi programa es que solicita la base de un rectangulo y la altura y te da lo que es el area y el perimetro de la misma figura. Esto es muy util para calcular edificios o construcciones de manera mas rapida y sin dudar que si tiene un error, solo los errores de sintaxis que puedas tener.____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. __La base___
2. __La altura___

**Salidas:**
1. __El area___
2. _El perimetro____

**Fórmulas** (área y perímetro):
_base*altura y 2(base)+2(altura)____

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- __No pueden ser letras___
- _Tienen que ser numeros positivos ___

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
_Lo marca como error por que no exiaste una rectangulo con area 0 o negativo ____

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
__Convierte el decimal en una variable.___

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
__Que solo es una base y una altura___

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | _N. enteros____ | _8____ | __5___ | __45___ |  26 |
| 2 (cuadrado) | __4___ | __4___ | _16____ | __16___ |
| 3 (con decimales) | ___4.5__ | __5.6___ | __25.2___ | _20.2____ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí / No
Si
**¿Tuve que corregirla?** __No___
**¿Cuántas versiones de mi receta escribí hasta la final?** ___Nada mas una.__

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
Area y perimetro de un rectangulo
Introduce la base: 4
Introduce la altura: 6
El perimetro es: 20
El area es: 24
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
_Sale 13 porque le faltan los parentesis para que multiplique a los 2 a la base y la altura. ____

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
_-12, no no tine sentido porque no existen un area negativa.____

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_El resultado excede el rango de int____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | _Área 15, perímetro 16____ | ____si_ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | __ Área 16, perímetro 16 ___ | __si___ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | __Área 10, perímetro 13___ | ___si__ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | _Área 0.01, perímetro 0.4 | __si_ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | ___vuelve a pedir el ancho__ | __si___ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | __vuelve a pedir el alto___ | _si____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | ___`leerDecimal` vuelve a pedir__ | __si___ |
| Caso propio 1 | __4___ | __9___ | _36 y 26____ | __36 y 26___ | __si___ |
| Caso propio 2 | __2___ | ___2__ | __4 y 8___ | _4 y 8____ | __si___ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | __quise mejorar las restrincciones___ | __agregue un while___ | _si____ |
| 2 | __mejore la capacidad de las variables___ | ___agregue un double__ | ___si__ |

**Reto elegido (opcional):** __Aprenderme el nombre de las variables___

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| __Como imprimo en la pantalla una variable___ | __std::cout << "El perimetro es: " << Perimetro << std::endl;___ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
__Aprendi a usar ciclos while para validar entradas___

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
___Organizar mejor el orden__

**¿Qué fue lo más difícil y cómo lo resolví?**
__Que no aceptara los numeros negativos y lo resolvi con el while___

**¿Qué pregunta me quedó sin responder?**
__Ninguna___

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
__Fue facil porque no habia una complicacion mayor como lo es un contador.___

## 13. Lista de verificación antes de entregar (Fase 5)

- [ si] Llené todas las secciones (no quedan `_no quedan____`)
- [si ] Escribí mi receta completa en `RECETA.md` antes de programar
- [si ] Mi programa compila sin advertencias
- [si ] Probé todos los casos de la tabla
- [si ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [si ] No modifiqué `utilerias.h`
- [si ] Hice al menos 3 commits con mensajes claros
- [si ] Hice `git push` y verifiqué mi fork en GitHub
- [si ] Entregué el enlace de mi fork en Classroom
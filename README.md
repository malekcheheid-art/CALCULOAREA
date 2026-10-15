# CALCULADORA DE ÁREA MODULAR

**Actividad 3: Enfoque Modular y Diseño Top-Down**

Materia: Laboratorio de Programación (LPR) — E.E.S.T. N° 1 "Eduardo Ader", Vicente López
Curso: 5° Año — 3° Grupo A

---

## Autor

| Dato | Detalle |
|---|---|
| **Estudiante** | Cheheid, Malek |
| **Profesor** | Ganduglia, Yamil |
| **Materia** | Laboratorio de Programación (LPR) |
| **Curso** | 5° Año — 3° "A" |
| **Escuela** | E.E.S.T. N° 1 "Eduardo Ader" — Vicente López |
| **Año** | 2026 — 1° Cuatrimestre |
| **Licencia** | MIT (ver archivo [LICENSE](LICENSE)) |

---

## Qué hace este programa

Calcula el **área de un círculo** aplicando un **diseño Top-Down**: en lugar de resolver
todo dentro de `main()`, el problema se descompone en **módulos independientes**
(funciones) con una responsabilidad única.

Además, como bonus de gamificación, la consola dibuja una **diana de tiro en ASCII**
cuya escala depende del radio ingresado.

### Fórmula matemática utilizada

```
Área del círculo = π × r²
Área del círculo ≈ 3.1415926535 × radio²
```

---

## Enfoque Top-Down aplicado

El diseño Top-Down parte del problema general y lo subdivide hasta llegar a partes
pequeñas y resolubles:

```
PROBLEMA GENERAL
"Calcular el área de un círculo"
        │
        ▼  se divide en
  ┌─────────────┴─────────────┐
  │                           │
  ▼                           ▼
main()                calcularAreaCirculo()
- declarar variable             │
- pedir el radio                │  recibe el radio
- validar el dato               │  aplica π × r²
  │                             │
  ▼                             ▼
muestra el área          RETURN area
                              │
                              └────► vuelve a main()
```

**Beneficios que aporta la modularización:**

- **Depuración más rápida** — los errores se localizan dentro de un módulo concreto.
- **Reutilización de código** — la función sirve para cualquier otro programa.
- **Trabajo en equipo ordenado** — cada persona puede encargarse de un módulo.

---

## Estructura de carpetas

```
CALCULOAREA/
├── .gitignore                      # Ignora .vscode y artefactos de compilación
├── LICENSE                          # Licencia MIT (uso escolar)
├── README.md                        # Este archivo
├── docs/
│   ├── InformeProyectoCALCULOAREA.pdf   # ENTREGABLE: Informe APA v7
│   └── ConsignaActividad3.pdf            # Enunciado original de la actividad
├── src/
│   └── main.cpp                     # Código fuente modular en C++
└── capturas/
    ├── compilacion_area.png         # Evidencia de compilación y ejecución
    └── diagrama_flujo.png           # Diagrama de flujo del programa
```

---

## Comandos de compilación y ejecución (Windows)

Abrí la terminal integrada de **VS Code** (`Ctrl + Ñ`) en la raíz de la carpeta
`CALCULOAREA` y ejecutá:

**1. Compilar** generando un ejecutable con el nombre de la aplicación:

```powershell
g++ src/main.cpp -o src/area.exe
```

**2. Ejecutar** la aplicación generada:

```powershell
.\src\area.exe
```

> **Nota:** Si la PC del laboratorio no permite compilar por falta de permisos de
> administrador, se puede usar **OnlineGDB** y luego subir las capturas
> correspondientes a la carpeta `capturas/`.

---

## Ejemplo de salida

```
=====================================================
  CALCULADORA DE AREA MODULAR - ESTUDIANTE: CHEHEID MALEK
=====================================================
=> Ingrese el radio del circulo/diana (en cm): 8
Radio ingresado: 8 cm
Area del circulo: 201.062 cm^2

[SISTEMA] Dibujando escala de la Diana en la RAM...
       .---.
     / .---. \
    | /  O  \ |   -> [DIANA ESTÁNDAR DE TIRO]
    | \  *  / |
     \ '---' /
       '---'
=====================================================
```

---

## Glosario técnico

| Concepto | Definición |
|---|---|
| **Diseño Top-Down** | Metodología que analiza un problema desde lo general hacia lo particular, subdividiendo el sistema en módulos especializados independientes. |
| **Modularizar** | Dividir un programa en subprogramas o funciones. Facilita la legibilidad, el mantenimiento y la detección rápida de errores. |
| **Prototipo de Función** | Declaración de firma escrita antes de `main()`. Le avisa al compilador el nombre de la función, el tipo de dato que devuelve y qué parámetros necesita. |
| **Retorno (Return)** | Valor o resultado final que la función le devuelve al programa principal (`main`) al terminar sus cálculos internos. |
| **Constante (`const`)** | Variable cuyo valor se bloquea en la memoria RAM y no puede modificarse durante la ejecución del programa (por ejemplo, el valor de π). |

---

## Los 4 bloques resueltos en `src/main.cpp`

| # | Bloque | Solución |
|---|---|---|
| 1 | **Prototipo** | `double calcularAreaCirculo(double radio);` |
| 2 | **Llamada / invocación** | `double areaFinal = calcularAreaCirculo(radioEstudiante);` |
| 3 | **Salida de datos** | `cout << "Area del circulo: " << areaFinal << " cm^2" << endl;` |
| 4 | **Definición** | `double area = PI * r * r;` seguido de `return area;` |

---

## Buenas prácticas implementadas

- **Filtro de consistencia** — `if (radioEstudiante <= 0)` evita calcular un área con un
  radio negativo o nulo, y devuelve el código de error `1`.
- **Constante protegida** — `const double PI = 3.1415926535;` bloquea el valor de π en RAM.
- **Variable local** — `r` es el parámetro del módulo; no existe fuera de la función.
- **Códigos de salida** — `return 0` (éxito) y `return 1` (error) permiten a otros
  programas saber cómo terminó la ejecución.

---

## Entregables

- [x] `src/main.cpp` — código fuente modular en C++
- [ ] `docs/InformeProyectoCALCULOAREA.pdf` — informe en normas APA v7 *(en elaboración)*
- [x] `docs/ConsignaActividad3.pdf` — enunciado original de la actividad
- [x] `capturas/compilacion_area.png` — evidencia de compilación y ejecución
- [x] `capturas/diagrama_flujo.png` — diagrama de flujo del programa
- [x] `README.md` — documentación del proyecto
- [x] `LICENSE` — licencia MIT

---

**Fecha de entrega:** 17 de septiembre de 2026.
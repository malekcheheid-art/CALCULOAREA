/*  
   ==================================================================== 
   Materia: Laboratorio de Programación (LPR) 
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López 
   Curso: 5° Año 
   Profesor: Prof. York Elías Mansilla Muñoz 
   Estudiante: CHEHEID MALEK 
   Archivo: main.cpp 
   Objetivo: Calcular el area de un circulo mediante funciones modulares 
             y simular una diana de tiro en ASCII. 

   Actividad 3: Enfoque Modular y Diseño Top-Down.
   ==================================================================== 
*/ 

#include <iostream> 

using namespace std; 

// ==================================================================== 
// 1. PROTOTIPO DE LA FUNCIÓN (Firma de la función) 
// Le avisamos al compilador la existencia del módulo de cálculo antes del main 
// ==================================================================== 
double calcularAreaCirculo(double radio); 

int main() { 
    double radioEstudiante; 

    // ==================================================================== 
    // REGLA OBLIGATORIA (EVITA EL PLAGIO): 
    // Modifiquen la salida de pantalla agregando su Nombre y Apellido reales. 
    // ==================================================================== 
    cout << "=====================================================" << endl; 
    cout << "  CALCULADORA DE AREA MODULAR - ESTUDIANTE: CHEHEID MALEK  " << endl; 
    cout << "=====================================================" << endl; 

    cout << "=> Ingrese el radio del circulo/diana (en cm): "; 
    cin >> radioEstudiante; 

    // FILTRO DE CONSISTENCIA (Validación del dato geométrico) 
    if (radioEstudiante <= 0) { 
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl; 
        return 1; // Salida controlada del sistema indicando error en consola 
    } 

    // ==================================================================== 
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN 
    // Convocamos al módulo 'calcularAreaCirculo' pasándole 'radioEstudiante' 
    // y guardamos el resultado en una nueva variable decimal llamada 'areaFinal'. 
    // 
    // 💡 SINTAXIS DE REFERENCIA (EJEMPLO GUÍA): 
    //    Si quisiéramos llamar a una función 'calcularIva' que recibe 'precio' 
    //    y guardar el resultado en 'ivaTotal', escribiríamos: 
    //         double ivaTotal = calcularIva(precio); 
    // ==================================================================== 

    // Bloque 2: la invocación devuelve un double que se almacena en 'areaFinal'. 
    double areaFinal = calcularAreaCirculo(radioEstudiante); 

    // ==================================================================== 
    // 3. SALIDA DE DATOS 
    // Muestren en pantalla el área calculada utilizando 'areaFinal'. 
    // 
    // 💡 SINTAXIS DE REFERENCIA (EJEMPLO GUÍA): 
    //    Para mostrar texto y variables combinadas en pantalla: 
    //         cout << "El total es: " << costoTotal << " pesos." << endl; 
    // ==================================================================== 

    // Bloque 3: 'areaFinal' se imprime junto al texto y el radio original. 
    cout << "Radio ingresado: " << radioEstudiante << " cm" << endl; 
    cout << "Area del circulo: " << areaFinal << " cm^2" << endl; 

    // ==================================================================== 
    // BONUS GAMIFICACIÓN: RENDER DE LA DIANA EN CONSOLA 
    // Dependiendo del radio que ingresaron, la consola simulará un blanco 
    // de tiro correspondiente al tamaño calculado. 
    // ==================================================================== 
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl; 
    if (radioEstudiante <= 5.0) { 
        cout << "       .---.       " << endl; 
        cout << "      /  X  \\     -> [DIANA MINI / COMPACTA]" << endl; 
        cout << "      \\  *  /     " << endl; 
        cout << "       '---'       " << endl; 
    } else if (radioEstudiante <= 12.0) { 
        cout << "       .---.       " << endl; 
        cout << "     / .---. \\     " << endl; 
        cout << "    | /  O  \\ |   -> [DIANA ESTÁNDAR DE TIRO]" << endl; 
        cout << "    | \\  *  / |    " << endl; 
        cout << "     \\ '---' /     " << endl; 
        cout << "       '---'       " << endl; 
    } else { 
        cout << "       .---.       " << endl; 
        cout << "     / .---. \\     " << endl; 
        cout << "    | / .-. \\ |    " << endl; 
        cout << "    | |  X  | |   -> [DIANA GIGANTE DE COBERTURA]" << endl; 
        cout << "    | \\ '-' / |    " << endl; 
        cout << "     \\ '---' /     " << endl; 
        cout << "       '---'       " << endl; 
    } 

    cout << "=====================================================" << endl; 
    return 0; // Finalización exitosa de Windows (Código 0) 
} 

// ==================================================================== 
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN 
// Implementen la fórmula matemática de la geometría utilizando variables 
// locales y la constante de pi locked en memoria. 
// 
// 💡 SINTAXIS DE REFERENCIA (EJEMPLO GUÍA): 
//    Para calcular un valor dentro de la función y retornarlo: 
//         double total = base * altura; 
//         return total; 
// ==================================================================== 
double calcularAreaCirculo(double r) { 
    const double PI = 3.1415926535; 

    // Bloque 4: la fórmula del área de un círculo es A = PI * r^2. 
    // 'r' es una variable LOCAL: vive solo dentro de este módulo y no 
    // existe para el resto del programa (encapsulamiento del dato). 
    // 'PI' es una constante: el compilador bloquea su escritura en RAM. 
    double area = PI * r * r; 

    // Se devuelve el resultado al programa principal (main). 
    return area; 
}
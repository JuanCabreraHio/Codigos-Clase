/* 
Juego de Adivinar un numero

Tener un numero 
Preguntar al usuario el numero
Informar si lo adivino o no
  */

  #include <iostream>

  int main (void) 
  {
    const int NUM = -10; /* declara una constante llamada NUM de tipo entero y le asigna el valor inicial de 10. 
    Este valor de 10 permanecerá inalterable durante toda la ejecución del programa. Ese numero no se puede cambiar con nada,
     es constante y entero,*/
    int guessed_numbrer;
    
    while (guessed_numbrer !=NUM) {
    std::cout <<"Adivina un numero entre 1 y 100:\n"; // Mostrar el comentario
    std::cin >> guessed_numbrer; // Determina la variable que declare, Cin es herramienta de lectura
    /*//Division de enteros donde el denominador es mas grande que el numerador es 0. es decir, no aproxima*/
    std:: cout <<"Escribiste " <<guessed_numbrer << "\n";
    // Validacion del rango
    if (guessed_numbrer <1 or 100 < guessed_numbrer) {
      std::cout << "El numero no esta en el rango. \n";
      continue; // Es para que interrumpa la secuencia y lo vuelve a intentar

    }

    if (guessed_numbrer == NUM){ 
    /* Determina que si sudece una cosa, esta lo hara
    == Igual, != Desigualdad, < menor, > mayor, <= menor igual, >= mayor igual, ** Elevar un numero
    */
        std::cout <<"GANASTE!!!\n";
        break;  // Para salir inmediatamente del bucle, independientemente de si la condición de continuación del bucle es verdadera o falsa
        }
    else if (guessed_numbrer > NUM) {
        /* Es cuando la respuesta noes la pedida, por lo tanto se considera falsa*/
        std::cout <<"Te pasaste\n";
        }
    else { // es el menor
        std::cout << "Te falta\n";
    }

    }

    return 0;
  }
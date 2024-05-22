#include <cstdlib>
#include <cmath> //utilizamos cmath para poder realizar los calculos necesarios
#include <iostream>

int main(){
// Utilizamos variables de tipo float para guardar los datos
float a; 
float b;
float c;

printf("Bienvenido para calcular la hipotenusa \n")

// Pedimos el valor del lado A al usuario
;printf("Ingrese el valor del lado A \n");
//Guardamos el valor del lado A en a, utilizamos %f para poder guardar números incluyendo decimales
scanf("%f",&a);
// Pedimos el valor del lado B al usuario
printf("Ingrese el valor de B \n ");
// Guardamos el valor del lado B en b, utilizamos %f para poder guardar números incluyendo decimales
scanf("%f",&b)

/* Calculamos la hipotenusa(c), usamos sqrt para obtener la raiz cuadrada,
 utilizamos pow para elevar los valores de a y b al cuadrado */

;c = sqrt(pow(a, 2) + pow(b, 2));
printf("El valor de la hipotenusa(c) es %f ", c);

return 0;

}
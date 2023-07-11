#include <stdio.h>
#include <stdlib.h>


int main (void){

    int i = 0, menu, menu4, menu3, menu2, cantidad1= 0, cantidad2= 0, cantidad3= 0, sala_Normal= 30, sala_Vip= 15, sala_3d= 20, sala_Normal2= 30, sala_Vip2= 15, sala_3d2= 20;
    float precio, precio1= 8.00, precio2= 15.00, precio3= 12.00, precioF;
    
do {      
        printf("Ingrese la opcion de menu que desea ingresar\n"); 
        printf("1. Venta de Entradas\n");
        printf("2. Estadisticas de venta\n");
        printf("3. Salir\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1: 
            
            do {
                printf("1. Barbie\n");
                printf("2. Flash\n");
                scanf("%d", &menu2);
                switch (menu2)
                {
                case 1: 
                do {
                    
                    printf("1. Entradas Sala Normal $8\n");
                    printf("2. Entradas Sala VIP $15\n");
                    printf("3. Entradas Sala 3D $12\n");
                    printf("4. Salir\n");
                    scanf("%d", &menu3);
                
                    switch (menu3)
                    {
                    case 1: 
                    precio= 0;
                      printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad1);
                    sala_Normal= sala_Normal - cantidad1;
                    precio= cantidad1 * precio1;
                    if (precio < 40){
                        printf("El precio final de su compra es de %.2f\n", precio);
                    } else if (precio >= 40 && precio <= 80){
                        precio*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precio);
                    } else if (precio > 80 && precio < 120){
                        precio*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precio);
                    } else if (precio > 120){
                        precio*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precio);
                    }
                    break;
                case 2: 
                    printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad2);
                    sala_Vip= sala_Vip - cantidad2;
                    precio= cantidad2 * precio2;
                    if (precio < 40){
                        printf("El precio final de su compra es de %.2f\n", precio);
                    } else if (precio >= 40 && precio <= 80){
                        precio*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precio);
                    } else if (precio > 80 && precio < 120){
                        precio*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precio);
                    } else if (precio > 120){
                        precio*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precio);
                    }
                    break;
                case 3: 
                    printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad3);
                    sala_3d= sala_3d - cantidad3;
                    precio= cantidad3 * precio3;
                    if (precio < 40){
                        printf("El precio final de su compra es de %.2f\n", precio);
                    } else if (precio >= 40 && precio <= 80){
                        precio*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precio);
                    } else if (precio > 80 && precio < 120){
                        precio*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precio);
                    } else if (precio > 120){
                        precio*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precio);
                    }
                    break;
                    case 4: 
                        printf("Saliendo\n");
                    default:
                        printf("La opcion ingresada no es correcta\n");
                        break;
                    
                    
                    }
                    if (cantidad1 > sala_Normal || cantidad2 > sala_Vip || cantidad3 > sala_3d){
                        printf("Ya no es posible comprar mas entradas en esta sala\n");
                    }
                } while (menu3 != 4 || cantidad1 < sala_Normal || cantidad2 < sala_Vip || cantidad3 < sala_3d);
                case 2: 
                    do {
                    
                    printf("1. Entradas Sala Normal $8\n");
                    printf("2. Entradas Sala VIP $15\n");
                    printf("3. Entradas Sala 3D $12\n");
                    printf("4. Salir\n");
                    scanf("%d", &menu4);
                
                    switch (menu4)
                    {
                    case 1: 
                    precio= 0;
                    
                    printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad1);
                    sala_Normal= sala_Normal - cantidad1;
                    precio= cantidad1 * precio1;
                    if (precio < 40){
                        printf("El precio final de su compra es de %.2f\n", precio);
                    } else if (precio >= 40 && precio <= 80){
                        precio*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precio);
                    } else if (precio > 80 && precio < 120){
                        precio*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precio);
                    } else if (precio > 120){
                        precio*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precio);
                    }
                    break;
                    case 2: 
                    printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad2);
                    sala_Vip2= sala_Vip2 - cantidad2;
                    precioF= cantidad2 * precio2;
                    if (precioF < 40){
                        printf("El precio final de su compra es de %.2f\n", precioF);
                    } else if (precioF >= 40 && precioF <= 80){
                        precioF*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precioF);
                    } else if (precioF > 80 && precioF < 120){
                        precioF*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precioF);
                    } else if (precioF > 120){
                        precioF*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precioF);
                    }
                    break;
                    case 3: printf("Ingrese la cantidad de entradas\n");
                    scanf("%d", &cantidad3);
                    sala_3d= sala_3d - cantidad3;
                    precioF= cantidad2 * precio2;
                    if (precio < 40){
                        printf("El precio final de su compra es de %.2f\n", precio);
                    } else if (precioF >= 40 && precioF <= 80){
                        precioF*= 0.95;
                        printf("El precio final de su compra aplicado un 5 de descuento es de %.2f\n", precioF);
                    } else if (precioF > 80 && precioF < 120){
                        precioF*= 0.90;
                        printf("El precio final de su compra aplicado un 10 por ciento es de %.2f\n", precioF);
                    } else if (precio2 > 120){
                        precioF*= 0.85;
                        printf("El precio final de su compra aplicado un 15 por ciento de descuento es de %.2f\n", precioF);
                    }
                    break;
                    case 4: 
                        printf("Saliendo\n");
                    default:
                        printf("La opcion ingresada no es correcta\n");
                        break;
                    
                    
                    
                    }
                    if (cantidad1 > sala_Normal2 || cantidad2 > sala_Vip2 || cantidad3 > sala_3d2){
                        printf("Ya no es posible comprar mas entrada en esta sala\n");
                    }
                } while (menu4 != 4 || cantidad1 > sala_Normal2 || cantidad2 > sala_Vip2 || cantidad3 > sala_3d2);
                }
                case 3: 
                printf("Saliendo\n");
            } while (menu2 != 3);

        
        case 2: 
            printf("Estadisticas de ventas\n");
        
        default:
            printf("La opcion ingresada no es correcta\n");
            break;
        }
    
} while (menu != 3);
}
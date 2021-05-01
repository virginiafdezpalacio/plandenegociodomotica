#include <stdio.h>



int main() {

    int opcion;
    int luces_salon;
    int luces_cocina;
    int luces_dormitorio1;
    int luces_dormitorio2;
    int luces_servicio;
    int on_off;
    
    printf("OPCIÓN 1 - SALÓN");
    printf("/n");
    printf("OPCIÓN 2 - COCINA");
    printf("/n");
    printf("OPCIÓN 3 - DORMITORIO 1");
    printf("/n");
    printf("OPCIÓN 4 - DORMITORIO 2");	
    printf("/n");
    printf("OPCIÓN 5 - SERVICIO");
    printf("/n");
    printf("Ingrese grupo de luminarias:");
    scanf("%d", &opcion);
    printf("/n");
    printf("Para encender pulse UNO, para apagar pulse CERO");
    scanf("%d", &on_off);

    if(on_off==1){
    switch (opcion) {
        case '1':
            luces_salon=1;
            break;
        case '2':
            luces_cocina=1;
            break;
        case '3':
            luces_dormitorio1=1;
            break;
        case '4':
            luces_dormitorio2=1;
            break;
        case '5':
            luces_servicio=1;
            break;
    }
        
    } else{
    switch (opcion) {
        case '1':
            luces_salon=0;
            break;
        case '2':
            luces_cocina=0;
            break;
        case '3':
            luces_dormitorio1=0;
            break;
        case '4':
            luces_dormitorio2=0;
            break;
        case '5':
            luces_servicio=0;
            break;
    }

    

}

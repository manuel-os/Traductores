#include <stdio.h>
#include <ctype.h>

int main(){
    inicio: ;
    //curp 4 letras, 6 numeros, 6 alfanumericos, 3 numeros
    char cadena[50];
    int i;

    printf("\nIngresa un curp: ");
    gets(cadena);

    if(strlen(cadena)>19 || strlen(cadena)<19){
        printf("El CURP debe tener 19 caracteres.\n\n");
        goto mal;
    }

    i=0;
    while(cadena[i]!='\0'){
        if(i>=0 && i<4){
            if(isalpha(cadena[i])){

            }else if(isdigit(cadena[i])){
                printf("No puede contener numeros en esa seccion.\nError en el valor %d", i+1);
                goto mal;
            }else{
                printf("No puede contener caracteres especiales.\nError en el valor %d", i+1);
                goto mal;
            }
        }else if(i>=4 && i<10){
            if(isalpha(cadena[i])){
                printf("No puede contener letras en esa seccion.\nError en el valor %d", i+1);
                goto mal;
            }else if(isdigit(cadena[i])){

            }else{
                printf("No puede contener caracteres especiales.\nError en el valor %d", i+1);
                goto mal;
            }
        }else if(i>=10 && i<16){
            if(isalpha(cadena[i])){

            }else if(isdigit(cadena[i])){

            }else{
                printf("No puede contener caracteres especiales.\nError en el valor %d", i+1);
                goto mal;
            }
        }else{
            if(isalpha(cadena[i])){
                printf("No puede contener letras en esa seccion.\nError en el valor %d", i+1);
                goto mal;
            }else if(isdigit(cadena[i])){

            }else{
                printf("No puede contener caracteres especiales.\nError en el valor %d", i+1);
                goto mal;
            }
        }
        i++;
    }
    printf("CURP valido.\n");
    mal: ;
    goto inicio;

}

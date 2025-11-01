#include <stdio.h>
#include <stdbool.h>

bool lemonadeChange( int* bills, int billsSize );

int main(){

    int teste1_bills[5] = {5,5,5,10,20};
    int teste1_size= sizeof(teste1_bills)/sizeof(teste1_bills[0]);   //total da memória usada pelo array/ pelo espaço de memória que cada elemento usa

    bool resultado1= lemonadeChange(teste1_bills,teste1_size);

    printf("Teste 1: [5,5,5,10,20]\n");
    printf("Resultado esperado: TRUE. Resultado obtido: %d\n",resultado1);

    int teste2_bills[5] = {5,5,10,10,20};
    int teste2_size= sizeof(teste2_bills)/sizeof(teste2_bills[0]);

    bool resultado2=lemonadeChange(teste2_bills,teste2_size);

    printf("Teste 2: [5,5,10,10,20]\n");
    printf("Resultado esperado: FALSE. Resultado obtido: %d\n",resultado2);

    return 0;
}

bool lemonadeChange( int* bills, int billsSize ) {
    int cont5=0;
    int cont10=0;
    int i;
  
    for ( i=0; i<billsSize; i++ ) {
        int pagamento= bills[i];

       if ( pagamento==5 ) {
        cont5++;
       } else if ( pagamento==10 ) {
            if ( cont5>0 ) {        // se o pagamento for 10, e tiver notas de 5 de troco
            cont10++;       
            cont5= cont5-1;  
            } else {
             return false;          // se não tem troco, retorna falso
            }
        } else if ( pagamento==20 ) {   //se o pagamento for 20, tem que dar 15 de troco
                if ( cont10>0 && cont5>0 ) {  //se tem notas de 10 e 5 disponíveis 
                    cont10 --;  
                    cont5 --;  
                } else if ( cont10==0 && cont5>=3 ) {  //se só tem notas de 5 disponíveis 
                        cont5= cont5 -3;  
                   } else {
                        return false;
                     }
            }
    }          
return true;
}


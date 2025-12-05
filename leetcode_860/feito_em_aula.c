
bool lemonadeChange(int* bills, int billsSize) {
    int cont5=0;
    int cont10=0;
    int i;
  
    for (i=0; i<billsSize; i++){
        int pagamento= bills[i];

       if (pagamento==5){
        cont5++;
       } else{
        if(pagamento==10){
            if(cont5>0){    //se o pagamento for 10, e tiver notas de 5 de troco
            cont10++;       //aumenta o contador das notas de 10
            cont5= cont5-1;}  // e diminui o contador das notas de 5
         else {
            return false;
              }
        } else{ 
            if(pagamento==20){   //se o pagamento for 20, tem que dar 15 de troco
                if(cont10>0 && cont5>0){  //se tem notas de 10 e 5 disponíveis 
                    cont10 --;  //diminui em 1 a contagem das notas de 10
                    cont5 --;  ////diminui em 1 a contagem das notas de 5
                } else{ 
                    if(cont10==0 && cont5>=3){  //se só tem notas de 5 disponíveis 
                        cont5= cont5 -3;  //diminui em 3 a contagem das notas
                    } else {
                        return false;
                           }
                     } 

            }
        }
        
            }
    }
return true;
}

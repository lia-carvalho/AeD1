char* largestNumber(int* nums, int numsSize) {
    //Converter para String
    char **StringNum =  malloc( numsSize * sizeof(char*));
    int totalLen = 0;   // contador para o tamanho final 

    for ( int i= 0; i<numsSize; i++ ){
        StringNum[i] = malloc(12);      //aloca memória para cada número
        sprintf(StringNum[i], "%d" , nums[i]);      //escreve o número na string
        totalLen += strlen( StringNum[i] );
    }
    
    char xy[30];   // x + y
    char yx[30];   // y + x
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // Imprime as duas possibilidades
            printf(xy, "%s%s", StringNum[i], StringNum[j]); // string i + string j
            printf(yx, "%s%s", StringNum[j], StringNum[i]); // string j + string i
            
            // Se j + i for MAIOR que i + j, troca de lugar 
            if (strcmp(yx, xy) > 0) {
                char *tempStr = StringNum[i];
                StringNum[i] = StringNum[j];
                StringNum[j] = tempStr;
            }
        }
    }
        if (StringNum[0][0] == '0'){
        return "0";
}
        char *resultado = malloc(totalLen +1); //aloca espaço pra resposta + \0
        resultado[0]= '\0';     // "limpa" a nova string pra garantir que começa vazia

        for( int i= 0; i<numsSize; i++){
            strcat(resultado, StringNum[i]);
        }
        return resultado;
}
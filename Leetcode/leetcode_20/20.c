bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];    //cria a pilha do tamanho da string
    int top = -1;       //inicializa o topo da pilha 

    for (int i = 0; i < len; i++){
        char c = s[i];

        if ( c == '(' || c == '{' || c == '[' ){        //Se for de abertura, empilha
          top ++;           //sobe o topo
          stack[top] = c;  //armazena o caractere

        } else{     //se for fechamento, verifica
            if ( top == -1 ){     //se a pilha está vazia 
                return false;
            }

            char lastOpen = stack[top];     //pega o último aberto e verifica o par
            if ( (c == ')' && lastOpen == '(') || (c == '}' && lastOpen == '{') || (c == ']' && lastOpen == '[')){
                top --;     //desempilha
            } else{         //par não corresponde
                return false;
            }
        }
    }
    return top == -1;       //o resultado é verdadeiro se a pilha estiver vazia no final 
}

  /*struct ListNode {
      int val;
      struct ListNode *next;
 };
 */

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if( head == NULL || head->next == NULL || k==0 ){
        return head;
    }

   struct ListNode* fim = head;
    int comp =1; 
   
   while(fim-> next != NULL){
    fim = fim->next;
    comp ++;
   }

   //conecta fim no inicio 
   fim-> next = head;

   k = k % comp;
   int posicoes_ate_novoFim = comp -k; 

//o novo fim está em comp - k
   struct ListNode* novo_fim = fim; 
   while( posicoes_ate_novoFim --){
    novo_fim = novo_fim ->next;
   }
    
struct ListNode* new_head = novo_fim -> next;
 novo_fim -> next  = NULL;

return new_head;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int calculaAltura (struct TreeNode* node){
    if ( node == NULL ) {       //se não tiver nó, a altura é 0
        return 0;
    }
    int esq = calculaAltura( node -> left );
    int dir = calculaAltura ( node -> right );

    return 1 + ( esq > dir ? esq : dir );       //retorna a maior altura + 1(raiz)
 }

struct TreeNode* subtreeWithAllDeepest(struct TreeNode* root) {
    if ( root == NULL ){
        return NULL;
    }

    int alturaEsq = calculaAltura ( root->left );
    int alturaDir = calculaAltura ( root->right );

    if ( alturaEsq > alturaDir ) {
        return subtreeWithAllDeepest( root->left );
    } else if ( alturaDir > alturaEsq ){
        return subtreeWithAllDeepest ( root->right);
    } else{             //se as alturas são iguais
        return root;
    }

}
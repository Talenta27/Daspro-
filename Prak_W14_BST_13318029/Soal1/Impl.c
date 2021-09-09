#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include "header.h"
void insert(node **tree,char namaS[50], char margaS[50], int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        strcpy(temp->nama,namaS);
        strcpy(temp->marga,margaS);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left,namaS,margaS, val);
    }
    else if(val >= (*tree)->data)
    {
        insert(&(*tree)->right,namaS,margaS, val);
    }

}



void tampil(node * tree)
{
    if (tree)
    {
        tampil(tree->left);
        printf("Nama : %s\n",tree->nama);
        printf("Marga : %s\n",tree->marga);
        printf("Nomor : %d\n-------------------------------------\n",tree->data);
        tampil(tree->right);
    }
}

node* search(node ** tree, int val)
{
    if(!(*tree)){
        return NULL;
    }
    if(val < (*tree)->data){
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data){
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data){
        return *tree;
    }
}


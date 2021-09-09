#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include"header.h"

void insert(node**tree,char namaS[50])
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        strcpy(temp->nama,namaS);
        *tree = temp;
        return;
    }

    if(namaS[0] < (*tree)->nama[0])
    {
        insert(&(*tree)->left,namaS);
    }
    else if(namaS[0] >= (*tree)->nama[0])
    {
        insert(&(*tree)->right,namaS);
    }

}



void tampil(node * tree)
{
    if (tree)
    {
        tampil(tree->left);
        printf("Nama : %s\n\t- - -\n",tree->nama);
        tampil(tree->right);
    }
}

node* search(node **tree,char namaS[50])
{
    if(!(*tree)){
        return NULL;
    }
    if(namaS[0] < (*tree)->nama[0]){
        search(&((*tree)->left), namaS);
    }
    else if(namaS[0] > (*tree)->nama[0]){
        search(&((*tree)->right), namaS);
    }
    else if(namaS[0] == (*tree)->nama[0]){
        return *tree;
    }
}



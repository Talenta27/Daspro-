#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include "header.h"
void main()
{
    node *root;
    node *tmp;
    int nom;
    			
    char namaT[50],margaT[25],inimarga[25];
    int noT;
    int i=10;
    root = NULL;
    
    printf("Masukkan Marga :");scanf("%s",&inimarga);
    printf("0 - Exit\n1 - Masukkan data\n2 - Print\n3 - Cari nomor\n");
	while(i!=0){
		printf("masukkan Pilihan :");scanf("%d",&i);
    	switch (i){
    				
    		case 0:
    			printf("Terima kasih\n");
    			break;
    		case 1:
    			printf("Masukkan Nama : ");scanf("%s",&namaT);
    			printf("Masukkan No Urut :");scanf("%d",&noT);
    			insert(&root,namaT,inimarga,noT);
    			break;
    		case 2:
    			tampil(root);
    			break;
    		case 3:
    			printf("Masukkan Nomor yang ingin dicari :");scanf("%d",&nom);
    			tmp = search(&root, nom);
    			if (tmp){
				printf("Searched node=%d\n", tmp->data);
				printf("Nama : %s\n",tmp->nama);
				printf("Marga : %s\n",tmp->marga);
				}
				else{
				printf("Data Not found in tree.\n");
				}
				break;
    		default:
    			printf("Masukkan 0 - 2\n");
    			break;
    			
    			
    		
    	}
	}
    
}

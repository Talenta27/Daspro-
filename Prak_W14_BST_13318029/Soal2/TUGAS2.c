#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include "header.h"


void main()
{
    node *root;
    node *tmp;
    char nom[50];
    char namaT[50];
    int noT;
    int i=10;
    root = NULL;
    printf("0 - Exit\n1 - Masukkan data\n2 - Print\n3 - Cari nomor\n");
	while(i!=0){
		printf("masukkan Pilihan :");scanf("%d",&i);
    	switch (i){
    		case 0:
    			printf("Terima kasih\n");
    			break;
    		case 1:
    			printf("Masukkan Nama : ");scanf("%s",&namaT);
    			insert(&root,namaT);
    			break;
    		case 2:
    			tampil(root);
    			break;
    		case 3:
    			printf("Masukkan nama yang ingin dicari :");scanf("%s",&nom);
    			tmp = search(&root, nom);
    			if (tmp){
				printf("Nama : %s\n",tmp->nama);
				}
				else{
				printf("Data tidak ditemukan tree.\n");
				}
				break;
    		default:
    			printf("Masukkan 0 - 2\n");
    			break;
    			
    			
    		
    	}
	}
    
}

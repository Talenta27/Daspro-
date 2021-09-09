typedef struct bin_tree node;

struct bin_tree {
char nama[50];
node *right;
node  *left;
};
void insert(node**tree,char namaS[50]);
void tampil(node * tree);
node* search(node **tree,char namaS[50]);


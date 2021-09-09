typedef struct bin_tree node;
struct bin_tree {
int data;
char nama[50],marga[25];

node *right;
node  *left;
};
void insert(node **tree,char namaS[50], char margaS[50], int val);
void tampil(node * tree);
node* search(node ** tree, int val);

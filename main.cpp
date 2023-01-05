#include "Tree.h"

int main(){
    adrNode root = NULL;
    adrNode P;
    int i;
    cout << "=================================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    /* Tampilkan isi dari array */
    while(i < 9){
        cout << x[i] << " ";
        i = i + 1;
    }
    /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
    i = 0;
    while(i < 9){
        infotype x[9] = {5,3,9,10,4,7,1,8,6};
        P = newNode_1301210293(x[i]);
        insertNode_1301210293(root,P);
        i = i + 1;
    }
    /* 2. Tampilkan node dari BST secara Pre-Order */
    printf("\n");
    printf("\nPre Order\t\t: ");
    printPreOrder_1301210293(root);
    /* 3. Tampilkan keturunan dari node 9*/
    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    P = findNode_1301210293(root,9);
    printDescendant_1301210293(P,P->info);
    /* 4. Tampilkan total info semua node pada BST */
    printf("\n");
    printf("\nSum of BST Info\t\t: ");
    i = sumNode_1301210293(root);
    cout << i;
    /* 5. Tampilkan banyaknya daun dari BST */
    printf("\nNumber of Leaves\t: ");
    i = countLeaves_1301210293(root);
    cout << i;
    /* 4. Tampilkan Tinggi dari Tree*/
    printf("\nHeight of Tree\t\t: ");
    i = heightTree_1301210293(root);
    cout << i << endl;
    cout << "=================================================" << endl;
    return 0;
}

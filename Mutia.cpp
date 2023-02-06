#include <stdio.h>
 
int main()
{
    int n, p, x = 1, y = 1, hasil;
    printf("Masukan nilai n : ");
    scanf("%d", &n);
    printf("Masukan nilai p : ");
    scanf("%d", &p);
    for(int i=1; i<=n; i++){
        x = x*i;
    }
    for(int i=1; i<=n-p; i++){
        y = y*i;
    }
 
    //rumus permutasi
    hasil = x/y;
    printf("Nilai Kombinasi %d diambil %d adalah %d ", n, p, hasil);
    return 0;
}

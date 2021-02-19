#include <stdio.h>
void kiir(int);
int main() {
    setbuf(stdout, NULL);
    int x=0, y[100][100]={0};
    x++;
    if(x<9){
        x++;
    }
    x=1;
    kiir(x);
    return 0;
}
void kiir(int x){
    int y;
    y=2;
    printf("%d",x);
}
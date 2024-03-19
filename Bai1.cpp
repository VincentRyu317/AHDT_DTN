#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int n;
    int i, tinh;
    double c;
    printf("Nhap n: "); scanf("%d",&n);
    for (i = 1; i<n; i++){
        c = sqrt(i);
        tinh = sqrt(i);
        if((c - tinh) == 0){
            printf("%d ", i);
        }
    }
}


#include <stdio.h>
// Quiz 2, 21/01/2020, 13218058

/*
f1 : y1 = 2x + 2
    2x - y  = -2
f2 : y2 = 4x - 4
    4x - y = 4

Cari nilai X dan Y
Metode : Cramer 2x2
*/

int main(void) {
    int dx, dy, det;
    int a[2][2] = {{2, -1}, {4, -1}};   // Persamaan 2x + -1y dan 4x + -1y
    int c[2]    = {-2, 4};              // Nilai persamaan -2 dan 4
    
    // Dengan menggunakan aturan Cramer
    det = ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
    dx = ((c[0] * a[1][1]) - (c[1] * a[0][1])) / det;
    dy = ((a[0][0] * c[1]) - (a[1][0] * c[0])) / det;
    
    printf("x = %d \n", dx);
    printf("y = %d \n", dy); 
    
    return (0);
}


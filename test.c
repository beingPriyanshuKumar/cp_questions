#include <stdio.h> 
#include <math.h>
 
void rgbToCmyk(int r, int g, int b, float *c, float *m, float *y, float *k) { 
    if (r == 0 && g == 0 && b == 0) { 
        // Black 
        *c = 0; 
        *m = 0; 
        *y = 0; 
        return; 
    } 
    float *t=0;
    // Convert RGB to [0,1] range 
    // float rf = r / 255.0; 
    // float gf = g / 255.0; 
    // float bf = b / 255.0; 
 
    // Calculate K 
    *t = 1 - fmax(fmax(r, g), b); 
    *k=*t/255.0;    
 
    // Calculate C, M, Y 
    *c = (*k-r/255.0) / (1 - *k); 
    *m = (*k-g/255.0) / (1 - *k); 
    *y = (*k-b/255.0) / (1 - *k); 
} 
 
int main() { 
    int r, g, b; 
    float c, m, y, k; 
 
    printf("Enter RGB values (0-255):\n"); 
    printf("R: "); scanf("%d", &r); 
    printf("G: "); scanf("%d", &g); 
    printf("B: "); scanf("%d", &b); 
 
    rgbToCmyk(r, g, b, &c, &m, &y, &k); 
 
    printf("\nCMYK values:\n"); 
    printf("C: %.2f\n", c); 
    printf("M: %.2f\n", m); 
    printf("Y: %.2f\n", y); 
    printf("K: %.2f\n", k); 
 
    return 0; 
}
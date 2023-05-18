#include <stdio.h>
int main (void){
    int i = 8, j=5;
    float x= 0.005, y=-0.01;
    char c = 'c', d='d';

    int res = (3*i-2*j)%(2*d-c);
    int res1 =  2* ((i / 5) + (4 * (j - 3)) % (i + j - 2));
    float res2 = (i - 3 * j) % (c + 2 * d) / (x - y);
    int res3 = -(i + j);
    int res4 = ++i;
    int res5 = i++;
    int res6 = -j;
    float res7 = ++x;
    float res8 = y--;
    int res9 = i<=j;
    _Bool res10 = c > d;
    float res11 = x >=0;
    float res12 = x < y;
    float res13 = j!=6;
    float res14 = c==99;
    printf("Resultado = %i\n", res);
    printf("Resultado1 = %i\n", res1);
    printf("Resultado2 = %f\n", res2);
    printf("Resultado3 = %i\n", res3);
    printf("Resultado4 = %i\n", res4);
    printf("Resultado5 = %i\n", res5);
    printf("Resultado6 = %i\n", res6);
    printf("Resultado7 = %f\n", res7);
    printf("Resultado8 = %f\n", res8);
    printf("Resultado9 = %i\n", res9);
    printf("Resultado10 = %i\n", res10);
    printf("Resultado11 = %f\n", res11);
    printf("Resultado12 = %f\n", res12);
    printf("Resultado13 = %f\n", res13);
    printf("Resultado14 = %f\n", res14);
    return 0;
}
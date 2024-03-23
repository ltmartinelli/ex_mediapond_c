#include <stdio.h>

void media_pond(float n1, float p1, float n2, float p2, float *media)
{

    *media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);
}

int main(void)
{

    float n1 = 5, p1 = 2, n2 = 10, p2 = 8, media;

    media_pond(n1, p1, n2, p2, &media);
    printf("%.2f", media);

    return 0;
}
#include <stdio.h>

int main() {
    int h, m, s;
    int H, M, S;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d %d %d", &H, &M, &S);
    int jarakJam = H - h;
    int jarakMenit = M - m;
    int jarakDetik = S - s;
    printf("%d %d %d\n", jarakJam, jarakMenit, jarakDetik);
    return 0;
}
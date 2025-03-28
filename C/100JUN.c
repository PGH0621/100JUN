#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#if 1 //1057 silver4 토너먼트
#include <stdio.h>

int main() {
    int N, kim, lim;
    int round = 0;

    scanf("%d %d %d", &N, &kim, &lim);

    while (kim != lim) {
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        round++;
    }

    printf("%d\n", round);
    return 0;
}
#endif
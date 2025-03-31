#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#if 0 //1057 silver4 토너먼트
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

#if 1 //2941 silver5 크로아티아 알파벳  
int main() {
	char str[101] = { 0 };
	scanf("%s", str);
	int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) i++;
        else if (str[i] == 'd') {
            if (str[i + 1] == 'z' && str[i + 2] == '=') i += 2;
            else if (str[i + 1] == '-') i++;
        }
        else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j') i++;
        else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=') i++;
        cnt++;
    }
	printf("%d", cnt);
}
#endif
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
#if 0 //2941 silver5 크로아티아 알파벳  
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
#if 0 //25083 bronze5 새싹
int main() {
	printf("         ,r'\"7\n");
	printf("r`-_   ,'  ,/\n");
	printf(" \\. \". L_r'\n");
	printf("   `~\\/\n");
	printf("      |\n");
	printf("      |\n");
	return 0;
}
#endif
#if 0 //3003 bronze5 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <stdio.h>
int main() {
    int arr[6] = { 1, 1, 2, 2, 2, 8 };
    int input[6] = { 0 };
    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
        printf("%d ", arr[i] - input[i]);
    }
    return 0;
}

#endif
#if 0 //2444 bronze3 별 찍기 - 7
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int k = 0; k < i + (i - 1); k++)
			printf("*");

		printf("\n");
	}

	for (int i = n - 1; i > 0; i--) {
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int k = 0; k < i + (i - 1); k++)
			printf("*");

		printf("\n");
	}

	return 0;
}
#endif
#if 1 //1016 gold1 제곱 ㄴㄴ
int main(){
    long long a, b;
    long long cnt = 0;  
    long long arr[1000001] = { 0 };
    scanf("%lld %lld", &a, &b);     
    for (long long i = 2; i * i <= b; i++){
        long long start = a / (i * i) * (i * i);
        if (start < a) start += (i * i);
        for (long long j = start; j <= b; j += (i * i)){
            arr[j - a] = 1;
        }
    }
    for (long long i = 0; i <= b - a; i++){
        if (arr[i] == 0) cnt++;
    }
    printf("%lld", cnt);
    return 0;z
}   

#endif
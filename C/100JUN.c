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
#if 0 //1157 bronze1 단어 공부
int main(){
    int arr[26] = { 0 };

    char str[1000001] = { 0 };
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            arr[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            arr[str[i] - 'A']++;
        }
    }
    int max = 0;
    int maxIndex = 0;
    int flag = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
            flag = 0;
        }
        else if (arr[i] == max) {
            flag = 1;
        }
    }
    if (flag == 1) {
        printf("?\n");
    }
    else {
        printf("%c\n", maxIndex + 'A');
    }
    return 0; 

}
#endif
#if 1 //2839 silver4 설탕 배달
int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    while (N > 0) {
        if (N % 5 == 0) {
            cnt += N / 5;
            N = 0;
        }
        else {
            N -= 3;
            cnt++;
        }
    }
    if (N < 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", cnt);
    }
}

#endif
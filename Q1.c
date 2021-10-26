#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll hash(char *s) {
    const int p = 31;
    const int m = 1e9 + 9;
    ll hash_value = 0;
    ll p_pow = 1;
    for (int i=0;i<strlen(s);i++) {
        hash_value = (hash_value + (s[i] - 'A' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
int main()
{
    char s[1000];
    printf("Enter String \n");
    scanf("%s",s);
    printf("Hash value= %lld",hash(s));

    return 0;
}



  #include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 200007
#define MOD 1000000007

void solve() {
    char s[MAX];
    scanf("%s", s);
    int res = 1;
    bool ex = false;
    int len = strlen(s);
    for (int i = 0; i + 1 < len; i++) {
        res += (s[i] != s[i + 1]);
        ex |= (s[i] == '0' && s[i + 1] == '1');
    }
    printf("%d\n", res - ex);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}

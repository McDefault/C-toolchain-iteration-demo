#include <stdio.h>
#define FALSE 0

long long sum(const int n, const int m) {
    return n + m;
}

long long distinct(const int n, const int m) {
     return n - m;
}

long long product(const int n, const int m) {
  return n * m;
}

int main() {
    int num1, num2;
    printf("Voer het eerste nummer in: ");
    scanf("%d", &num1);

    printf("Voer het tweede nummer in: ");
    scanf("%d", &num2);

    const int nummer_one = 3;
    const int nummer_two = 4;

    printf("Som van %d en %d = %lld\n", nummer_one, nummer_two, sum(nummer_one, nummer_two));
    printf("Verschil van %d en %d = %lld\n", nummer_one, nummer_two, distinct(nummer_one, nummer_two));
    printf("Product van %d en %d = %lld\n", nummer_one, nummer_two, product(nummer_one, nummer_two));

    return FALSE;
}

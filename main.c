#include <stdio.h>


// Functie om de faculteit van een getal te berekenen
long long faculteit(int n) {

    if(n == 0)
        return 1;
    else
        return n * faculteit(n - 1);
}

int main() {
    int nummer = 3; // Verander dit getal naar het getal waarvan je de faculteit wilt berekenen

    printf("Faculteit van %d = %lld\n", nummer, faculteit(nummer));

    return 0;
}

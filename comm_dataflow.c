#include<stdio.h>

int main() {
    int locks, stocks, barrels, tlocks = 0, tstocks = 0, tbarrels = 0;
    float lprice = 45.0, sprice = 30.30, bprice = 25.0;
    float lsales, ssales, bsales = 0.0, sales, comm = 0.0;

    printf("Enter number of locks (-1 to exit): ");
    scanf("%d", &locks);

    while (locks != -1) {
        printf("Enter number of stocks and barrels: ");
        scanf("%d %d", &stocks, &barrels);

        tlocks += locks;
        tstocks += stocks;
        tbarrels += barrels;

        printf("Enter number of locks (-1 to exit): ");
        scanf("%d", &locks);
    }

    printf("Total locks = %d\n", tlocks);
    printf("Total stocks = %d\n", tstocks);
    printf("Total barrels = %d\n", tbarrels);

    lsales = lprice * tlocks;
    ssales = sprice * tstocks;
    bsales = bprice * tbarrels;
    sales = lsales + ssales + bsales;

    printf("Total sales = %f\n", sales);

    if (sales > 1800) {
        comm = 0.10 * 1000;
        comm += 0.15 * 800;
        comm += 0.20 * (sales - 1800);
    } else if (sales > 1000) {
        comm = 0.10 * 1000;
        comm += 0.15 * (sales - 1000);
    } else {
        comm = 0.10 * sales;
    }

    printf("The commission = %f\n", comm);

    return 0;
}

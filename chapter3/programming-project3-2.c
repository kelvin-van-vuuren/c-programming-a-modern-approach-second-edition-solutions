#include <stdio.h>

/* Write a program that formats product information entered by the user. */

int main()
{
    int itemnum, d, m, y;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemnum);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%.4d", itemnum, price, m, d, y);
}

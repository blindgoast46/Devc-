#include <stdio.h>
#include <conio.h>

int main() {
    int money_have;
    printf("Money_have=");
    scanf("%d", &money_have);

    int LIC = money_have / 30 * 3;
    int mutual_fund = money_have * 2 / 100;
    int expense = money_have * 10 / 100;
    int charity = money_have * 50 / 100;
    int total = money_have - LIC - mutual_fund - expense - charity;
    printf("\n LIC details(3 per) %d", LIC);
    printf("\n mutual_fund details(2 per) %d", mutual_fund);
    printf("\n expense details(10 per) %d", expense);
    printf("\n charity details(50 per) %d", charity);
    printf("\n remaining money = %d", total);

    return 0;
}

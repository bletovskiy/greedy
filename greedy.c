#include<stdio.h>
#include<math.h>

int main(void)
{
    int cents_owned;
    float dollars_owned;

    do
    {
        printf("Change owned: ");
        scanf("%f", &dollars_owned);
        cents_owned = round(dollars_owned * 100);
    }
    while (cents_owned <= 0);

    int quarters = cents_owned / 25;
    int dimes = (cents_owned % 25) / 10;
    int nickels = ((cents_owned % 25) % 10) / 5;
    int pennies = ((cents_owned % 25) %10) %5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}

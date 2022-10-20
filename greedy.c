#include<stdio.h>
#include<math.h>
#include<cs50.c>

int main(void)
{
    int cents_owned;

    do
    {
        float dollars_owned = get_float("Change owned: ");
        cents_owned = round(dollars_owned * 100);
    }
    while (cents_owned <= 0);

    int quarters = cents_owned / 25;
    int dimes = (cents_owned % 25) / 10;
    int nickels = ((cents_owned % 25) % 10) / 5;
    int pennies = ((cents_owned % 25) %10) %5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}

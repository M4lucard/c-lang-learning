#include <stdio.h>

int main(void) {
    int apples = 5;
    int bananas = 2;
    double price = 0.40;
    char initial = 'G'; // for Glitch :)

    printf("apples=%d bananas=%d\n", apples, bananas);
    printf("total_fruit=%d\n", apples + bananas);
    printf("avg_per_type=%f\n", ((apples + bananas) / 2.0)); //dividing by 2.0 instead of 2 ensures it is a floating point
    printf("total_cost=%f\n", ((apples + bananas) * price));
    printf("initial=%c\n", initial);
    return 0; // clean code to return a 0 at the end
}
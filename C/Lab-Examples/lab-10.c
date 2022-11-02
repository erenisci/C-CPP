#include <stdio.h>

int main(void)
{
    int anInt = 6;
    double bigFloat = 7.2;
    char character = 'K';
    char arrayChar[10] = "Eren ISCI";
    float numFloat = 9.2;
    char arrayCharSample[10] = {'E', 'r', 'e', 'n', ' ', 'I', 'S', 'C', 'I'};

    printf("%d\n", anInt);
    printf("%f\n", bigFloat);
    printf("%c\n", character);
    printf("%s\n", arrayChar);
    printf("%f\n", numFloat);
    printf("%s", arrayCharSample);

    return 0;
}

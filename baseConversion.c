#include <stdio.h>
#include <string.h>

// a funcation to convert binary to decimal
// way 2 to convert binary to decimal
unsigned int binaryToInt(char str[])
{
    int len = strlen(str);
    unsigned int answer = 0;
    for (int i = 0; i < len; i++)
    {
        int bit = str[i] - '0';
        printf("%d %d\n", i, bit);

        answer = answer * 2 + bit;
    }
    return answer;
}
// way 1 to convert binary to decimal
/* unsigned int binaryToInt(char str[])
{
    int len = strlen(str);
    unsigned int answer = 0;
    for (int i = len - 1, j = 1; i >= 0; i--, j *= 2)
    {
        int bit = str[i] - '0';
        printf("%d %d %d\n", i, j, bit);
        if (bit == 1)
        {
            answer += j;
        }
    }
    return answer;
} */
int main()
{
    char str[100];
    gets(str);
    printf("%d\n", binaryToInt(str));

    return 0;
}
/*
 3210
 1010 = 1*2^3+1*2^1 = 10
*/
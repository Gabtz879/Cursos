/*
    Break y continueen C
*/
#include <stdio.h>
int main()
{
    int num = 0;
    while (num <= 7)
    {
        if (num == 3){
            num++;
            continue;
        }
        if (num == 6){
            break;
        }
        printf("%i\n",num);
        num++;
    }
    printf("\nFinalizado\n");
    return 0;
}

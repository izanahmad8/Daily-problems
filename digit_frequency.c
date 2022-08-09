#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char a[1000];
    int arr[10] = {0};
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        int count = a[i] - '0';
        if (count >= 0 && count <= 9)
        {
            arr[count]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

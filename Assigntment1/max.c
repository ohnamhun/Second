#include<stdio.h> 
#include<malloc.h>

//#pragma warning(disable: 4996)

int main()
{
    int size; 
    int* input;
    int* temp;
    int max;
    int i;

    scanf("%d", &size);

    input = (int*)malloc(size*4);
    temp = (int*)malloc(size*4);

    for(i=0;i<size;i++)
    {
        scanf("%d", &input[i]);
        temp[i] = input[i];
    }

    max = input[0];

    for(i=1;i<size;i++)
    {
        if(input[i]<=temp[i-1]+input[i])
        {
            temp[i] = temp[i-1]+input[i];
        }

        if(max < temp[i])
        {
            max = temp[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr;
    int i = 0;
    int length = 0;

    printf("Enter the length of an Array\n");
    scanf("%d",&length);

    arr = (int *)malloc(length * sizeof(int));

    printf("Enter the Elements in Array\n");
    for(i= 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 0;
    printf("The Elements in the Array are: \n");
    for( j = 0; j < length; j++)
    {
        printf("%d\t", arr[j]);
    }

    int pos = 0;
    printf("Enter the Position in which you want to add the element");
    scanf("%d",&pos);

    printf("Enter the Element which you want to ADD\n");
    int element = 0;
    scanf("%d",&element);

    for(j = 0; j < pos; j++)
    {
        
            
    }

    printf("The Elements in the Array are: \n");
    for( j = 0; j < length; j++)
    {
        printf("%d\t", arr[j]);
    }


    free(arr);
    return 0;

}
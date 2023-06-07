#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age : ", i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue \n");
        printf("we have not come accross any\n");
        printf("we have not continue statements\n");
        printf("Harry is a good boy\n");
        
    }
    
    return 0;
}


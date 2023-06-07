#include<stdio.h>
int main() {
    int i, j, num;

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number num. Press 0 to exit\n");
            scanf("%d", &num);
            if ( num == 0 )
            {
                //break;
                goto end; // 0 input dalne par program 
                          // dono loop se bahar aa jayega !
            }
            
        }
        
    }
    end:
    
    return 0;
}
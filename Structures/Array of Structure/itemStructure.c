#include <stdio.h>
struct item{
    char name[50];
    int id;
    char unit;
};
int main(){
    int n, a = 0;
    scanf("%d", &n);
    struct item arr[n];
    
    for (int i = 0; i < n; i++){
        printf("Enter Item no %d : ", i+1);
        scanf(" %[^\n]s", &arr[i].name);
        printf("Enter its ID : ");
        scanf("%d", &arr[i].id);
        printf("Enter unit of \"%s\" : ", arr[i].name);
        scanf(" %c", &arr[i].unit);
        printf("\n");
    }
    printf("----------------------\n");
    printf("\nItems with unit l (litres) are : \n");
    for (int i = 0; i < n; i++){
        if ( arr[i].unit == 'l' ){
            printf("%d. %s\n", ++a, arr[i].name);
        }
    }
    
    return 0;
}
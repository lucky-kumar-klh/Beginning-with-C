#include <stdio.h>
struct student {
    int id;
    char name[50];
    float cgpa;
    float fees;
};
int main(){
    int n;
    printf("Enter no of students : ");
    scanf("%d", &n);
    // creating array of structure
    struct student arr[n];
    
    for (int i = 0; i < n; i++){
        printf("--------------------------------\n");
        printf("Enter Student %d Info : \n", i+1);
        printf("Enter your ID : ");
        scanf("%lld", &arr[i].id);
        printf("Enter your Name : ");
        scanf(" %[^\n]s",&arr[i].name);
        printf("Enter your CGPA : ");
        scanf("%f", &arr[i].cgpa);
        printf("Enter you fees : ");
        scanf("%f", &arr[i].fees);
    }
    printf("\n***** OUTPUT *****\n");
    for (int i = 0; i < n; i++){
        printf("--------------------------------\n");
        printf("Student %d Details : \n", i+1);
        printf("ID = %lld\n", arr[i].id);
        printf("Name = %s\n", arr[i].name);
        printf("CGPA = %.2f\n", arr[i].cgpa);
        printf("Fees = %.2f\n", arr[i].fees);
    }
    return 0;
}
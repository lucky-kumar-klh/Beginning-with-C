// employee --> id, name, salary. Find name of employee who has max salary.
#include <stdio.h>
struct student{
    int marks;
    char name[50];
};
int main(){
    int n, maxMarks = -1, ans;
    printf("Enter no of Students : ");
    scanf("%d", &n);
    struct student arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter student %d name : ", i+1);
        scanf(" %[^\n]s", &arr[i].name);
        printf("Enter his marks : ");
        scanf("%d", &arr[i].marks);
    }
    for (int i = 0; i < n; i++){
        if ( arr[i].marks > maxMarks ){
            maxMarks = arr[i].marks;
            ans = i;
        }
    }
    printf("\nTopper is %s", arr[ans].name);
    return 0;
}
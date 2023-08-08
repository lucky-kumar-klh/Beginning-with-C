#include <stdio.h>
int main() {
    char s1[] = "Physics Wallay";
    char* s2 = s1;

    // Let's change string s1
    s1[0] = 'M';       // We have changed the actual string s1 so the pointer 
    printf("%s", s2);  // which was pointing towards s1[0] so, s2 will change.
    return 0;
}
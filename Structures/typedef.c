#include<stdio.h>
int main(){
    typedef struct book{  // typedef provides existing data types a new name.
        char name[50];
        int No_ofPages;
        float price;
    }book;
    book a;
    book b;
    book c;
    book d;

    a.No_ofPages = 56;
    b.price = 80.00;
    c.No_ofPages = 100;

    typedef struct Node{
        int data;
        int value;
    }

    return 0;
}
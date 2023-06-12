#include <stdio.h>
int maze(int cr, int cc, int er, int ec){  // cr = current row, cc = current coloumn, er = ending row, ec = ending coloumn.
    int rightways = 0;
    int downways = 0;
    if ( cr==er && cc==ec ) return 1;  // end of maze. Only one way at 3,3 therfore return 1;
    if ( cr == er ) {                  // call only rightways 
        rightways += maze(cr, cc+1, er, ec);
    }
    if ( cc == ec ) {                  // call only downways
        downways += maze(cr+1, cc, er, ec); 
    }
    if ( cr < er && cc < ec ) {
        rightways += maze(cr, cc+1, er, ec);
        downways += maze(cr+1, cc, er, ec);
    }
     
    int total_ways = rightways + downways;
    return total_ways;
}
int main() {
    int n,m;
    printf("Enter no.of Rows n : ");
    scanf("%d", &n);
    printf("Enter no.of Columns m : ");
    scanf("%d", &m);
    printf("Total number of ways are %d.\n", maze(1,1,n,m));  // cr = 1, cc = 1, er = n, ec = m
    return 0;
}
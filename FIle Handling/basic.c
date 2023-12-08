#include <stdio.h>

int main(){
  
  return 0;
}
/* 
Some Pre-Defined functions --> <stdio.h>

1. fopen("open_createFileName", "mode") :- Activate or Create new file, mode : "r"/"rb","w"/"wb","a"/"ab","r+"/"r+b","w+"/"w+b","a+"/"a+b". NOTE : w+ - write then read, r+ - read then write & w - normal write but, wb - write in binary.
NOTE : fopen return address of file, make pointer
Syntax : FILE *ptr = fopen("file.txt", "w"); // FILE in caps.

2. fclose(file) :- Syntax : fclose(file); 
3. fprintf() 
4. fscanf() - 
5. fputc()
6. fgetc()
7. fgets()
8. fputs()
9. fread()
10. fwrite()
*/
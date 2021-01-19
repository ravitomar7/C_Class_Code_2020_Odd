#include <stdio.h>  
main(){  
   FILE *fp;  
   fp = fopen("file1.txt", "w");//opening file  
   fprintf(fp, "Hello there this is new program...\n");//writing data into file  
   fclose(fp);//closing file  
}  
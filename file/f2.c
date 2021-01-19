#include <stdio.h>  
main(){  
   FILE *fp;  
   fp = fopen("file2.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf second file...\n");//writing data into file  
   fclose(fp);//closing file  
}  
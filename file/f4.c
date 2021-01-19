#include <stdio.h>  
main(){  
   FILE *fp,*fpw;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("file1.txt", "r");  
   fpw = fopen("filemerge.txt", "w");
   while(fscanf(fp, "%s", buff)!=EOF){  
   fprintf(fpw,buff);
   printf("%s ", buff );  
   }  

 fp = fopen("file2.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   fprintf(fpw,buff);
   printf("%s ", buff );  
   }  
   fclose(fp);  
   fclose(fpw);
}  
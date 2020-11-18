#include<stdio.h>
#include<stdlib.h>
#define BUF_SIZE 32

/*获取某文件夹下的文件数*/
int main(void)  
{  
    
    FILE * p_file = NULL;  
    char buf[BUF_SIZE] = {0};
    p_file = popen("ls -l /home/code/demo -l | grep ^- | wc -l", "r");  
    if (!p_file) {  
        fprintf(stderr, "Erro to popen");  
    }  
    /*fgets 每次读取一行*/
    while (fgets(buf, BUF_SIZE, p_file) != NULL) {  
        //fprintf(stdout, "%s", buf);  
        int num = atoi(buf);
        printf("%d\n", num);
    }  
    pclose(p_file);     

    return 0;  
}
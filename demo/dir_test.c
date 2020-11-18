#include <stdio.h> 
#include <dirent.h>
#define  FilePath "/home/code/demo"
	
int main()  
{
    int i = 0;
	int filesize = 0;
    DIR *dir = NULL;
    struct dirent *entry;
    if((dir = opendir(FilePath))==NULL)
    {
      	printf("opendir failed!");  
      	return -1;  
    }
	else  
    {
    	while(entry=readdir(dir))  
		{
			i++;
			printf("filename%d = %s",i,entry->d_name);  //输出文件或者目录的名称
			printf("filetype = %d\n",entry->d_type);  //输出文件类型   
		}
		closedir(dir);    
    }
	printf("%d\n", i);
    return 0;
}

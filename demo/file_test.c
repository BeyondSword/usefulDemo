#include<stdio.h>

#define ERROR_SUCCESS 0
#define ERROR_FAIL 1

/*写文件 input file_path 文件路径 buf 写入数据 size 数据长度 output 0 成功 1失败*/
int fileWrite(char* file_path, char* buf, char* size){
	FILE* fp;
	char path[64] = {0};
	char time[32] = {0};
	//int count=1;
	const int count = 1;
	if((fp = fopen(path, "wb")) == NULL){
		fprintf(stderr, "file open failed! filepath: %s\n", file_path);
		return ERROR_FAIL;
	}
	if(count != fwrite(buf, size, count, fp)){
		fprintf(stderr, "file write error! filepath: %s\n", file_path);
		return ERROR_SUCCESS;
	}
	fflush(fp);
	close(fp);
}

/*获取文件大小*/
int file_size(char* filename)//获取文件名为filename的文件大小。
{
    FILE *fp = fopen(filename, "rb");//打开文件。
    int size;
    if(fp == NULL) // 打开文件失败
        return -1;
    fseek(fp, 0, SEEK_END);//定位文件指针到文件尾。
    size=ftell(fp);//获取文件指针偏移量，即文件大小。
    fclose(fp);//关闭文件。
    return size;
}


int main(){

}

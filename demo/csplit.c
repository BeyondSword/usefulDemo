#include <stdio.h>  
#include <string.h>  
void split(char str[],char delims[])
{
    char *result = NULL; 
    result = strtok( str, delims );  
    while( result != NULL ) {  
        printf( "result is \"%s\"\n", result );  
        result = strtok( NULL, delims );  
    }  
}
int main()  
{  
    char str[] = "now \n is the time for all \n good men to come to the \n aid of their country";  
    char delims[] = "\n";  
	split(str,delims);
}
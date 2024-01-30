#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    gets(str);
    char str_char;
    int  count =0 ,flag =0;
   int  s=strlen(str);
    for(int i=0;i<s;i++){
        if(str[i]>='A'&& str[i]<='Z'){
            count++;
        }
        else{ 
        flag++;
       }
    }
    if(count<=flag){
    	for(int i=0;i<s;i++){
    		str_char=str[i];
    		putchar(tolower(str_char));
    	}
	}
    else if(count>flag) {
    		for(int i=0;i<s;i++){
    		str_char=str[i];
    		putchar(toupper(str_char));
    	}
    	
	}
 
    return 0;
}
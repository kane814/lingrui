# include <stdio.h>
# include <string.h>
int main(int argc, char *argv[]){
    if(argc<2||argc>3){
        printf("出错了！");
    }
    else{
        if(strcmp(argv[1],argv[2])==0){
            printf("相同。");
        }
            else{
                printf("不相同");
            }
        
    }
    return 0;
}
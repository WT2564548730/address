#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=5;
    int *p=&i;
    char c=(char*)(i);
    char a[8]="efbff53c";
    printf("p = %x\n(char)(i) = %d\n(char*)(i) = %d\n(*)(efbff53c) = %d\n",p,(char)(i),(char*)(i),*("efbff53c"));
    if((char)(i)==(char*)(i)){
        printf("ture\n");
    }
    else{
        printf("false\n");
    }
    printf("a[0] = %x\n&a = %x\na = %x\n",a[0],&a,a);
    int x=65;
    printf("(char)('65') = %c\n(char)(65) = %c\n(int)(A) = %d\n(int)(e) = %d\n",(char)('65'),(char)(65),(int)('A'),(int)('e'));
    
    free(p);
    free(a);
}

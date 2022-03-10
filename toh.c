#include<stdio.h>
#include<stdlib.h>
void toh(int n,char a,char b,char c){
    if(n<=0) return ;
    if(n==1){
        printf("Move disk 1 from %c to %c\n",a,b);
        return ;
    }
    toh(n-1,a,c,b);
    printf("Move dist %d from tower %c to c\n",n,a,b);
    toh(n-1,c,b,a);
}
int main(){
    int i=0;
    int n=0;
    printf("enter the number of disks\t");
    scanf("%d", &n);
    toh(n,'A','B','C');
}
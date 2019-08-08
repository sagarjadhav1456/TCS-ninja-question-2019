#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
//printf("we have to print the series \n ");
//printf("1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ... \n\n");
    int i=2,j,r,a,p,b,new,n,k,flag=1,count =0;

    a=b=0;
    n=1;
    r=20;

    printf("enter the nth no. you want to search : ");
    scanf("%d",&r);
printf("\n the series is : \n");
    printf("\n 1 ");
for(k=1;k<=(r-1);k++){
       if(k%2 != 0) {
            flag =1;
            for(i;flag;i++){
             for(p=2;p<i;p++){
                if(i%p == 0){
                        break;
                }
             }
             if(i==p){
                printf(" %d ",i);
                new = i;
                flag=0;
             }
            }
    }

    if(k%2 == 0){

      a=b;
      b=n;
      n=a+b;
  printf(" %d ",n);//1,
    }

}

printf("\n\n the %dth no. of the series is : ",r);
if(k%2==0){

    printf("%d",new);
}

else{

    printf("%d",n);
}
      getchar();
    return 0;


}

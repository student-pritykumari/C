#include<stdio.h>

int main(){
int a[10],num,x,i,flag,d;

for (x=102;x<=498;x++){
  
  for(i=0;i<10;i++)
  a[i]=0;
  
  flag=1;
  
  for(i=1;i<=3 && flag==1;i++){
    num=i*x;
    
    while(num!=0 && flag==1){
      d=num%10;
      
      if(a[d]==0)
      a[d]=1;
      else
          flag=0;
          
          num=num/10;
          
    }
  }
  if(flag==1)
      printf("\nTriode number x = %d, and 2*x = %d &3*x = %d...",x,2*x,3*x);
}
  printf("\n\nEnd of the program...");
}
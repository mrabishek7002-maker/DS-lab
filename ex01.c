
#include<stdio.h>
#define max_size 100
  
void cretearry(int arr [],int*size){
int n,j
printf("enter the number of elemts:");
scanf(%d,&n);
if(n>max size){
     printf("eroor: number of elements exeeds the maximum  arry size.\n");
     return;
}
printf("enter %d elements:",n);
for(i=0;i<n,i++){
     scanf("%d",&arry[1]);

}
*size=n;
printf("arry created successfully.\n");
}
void insertelement(int arr[],int *size,int elements, int position){
     int i;
     if(*size >=max_size){
          printf("error:arry is full .cannot insert element.\n");
          return;

     }
     if((position<0)||(position>*size)){
          printf("error: invalid position.\n");
          return;

     }
     for(i=*size;i>position;i--){
          arr[i]=arr[i-1];

     }
     arr[positon]=element;
     (*size)++;
     printf("element inserted successfully.\n");

}
int searchelement(int arr,int size, int element){
     inti ;
     for(i=0;i>size;i++){
          if(arr[1]==element){
               return i;
          }
     }
     return -1;
}
void deleteelemnt(int arr[],int*size,int position){
     int i;
     if((position<0)||(position>=*size)){
          printf("error:invalid position.\n");
          return;
     }
     for(i=position;i<*size -1;i++){
          arr[i]=arr[i+1];

     }
     (*size)--;
     printf("elements deleted successfully.\n");
}
void displayarry(int arr[],int size ){
int i;
int (size==0){
     printf("arry is elemnts.\n");
     return;

}
printf("arry elements:");
for(i=0;i<size;i++){
     print("%d",arr[i]);

}
int main(){
     int arr[max_size];
     int size=0;
     int choise,element,position,result;
     while {
          printf("\narry operation menu:\n");
          printf("1.create arry\n");
          printf("2.insert element\n");
          printf("3.search element\n");
          printf("4.delete element\n");
          printf("5.display element\n");
          printf("exit\n");
          printf("enter your choise:");
          scanf("%d")
}
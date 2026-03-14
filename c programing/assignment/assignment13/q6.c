// 6. Accept array and return only prime numbers of array.
#include<stdio.h>
#include<stdlib.h>
int* primeNumbers(int[],int,int*);
int isPrime(int);
void main(){
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int primeSize=0;
   int* prime=primeNumbers(arr,10,&primeSize);
   for(int i=0;i<primeSize;i++){
      printf("%d ",prime[i]);
   }
}
int isPrime(int x){
   for(int i=2;i*i<=x;i++){
      if(x%i==0)return 0;
   }
   return 1;
}
int* primeNumbers(int arr[],int size,int* noOfPrime){
    int* prime=(int*)malloc(sizeof(int)*size);
    int x=0;
    for(int i=0;i<size;i++){
      if(isPrime(arr[i])){
         prime[x++]=arr[i];
         (*noOfPrime)++;
      }
    }
    return prime;
}
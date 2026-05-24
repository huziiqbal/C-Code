#include<stdio.h>
#define SIZE 10
int HashTable[SIZE] ;
int HashFunction(int a){
    return a % SIZE;
}
int collision(int a){
    int i = 0 ; 
    int index ;
    while (HashTable[collision(a)] != -1){
        index = (HashFunction(a) + i) % SIZE;
        i++;
    }
    return index ;
}


int main (){
    for ( int i = 0 ; i < SIZE ; i++){
        HashTable[i] = -1;
    }
    int n = 6 ;
    int arr[n] = {8,3,13,6,4,10};
    for ( int i = 0 ; i < n ; i++){
        if (HashTable[HashFunction(arr[i])] == -1){
            HashTable[HashFunction(arr[i])] = arr[i];
        }
        else {
            HashTable[collision(arr[i])] = arr[i];
        }
    }
    
    
}
// // LINEAR PROBATION
// // DATE = 12/04/2026

// #include <stdio.h>
// #define SIZE 10

// int hashTable[SIZE];

// int hashFunction(int key) {
// 	return key % SIZE;
// }

// int collision(int n) {
//     int i = 0 ;
//     int ind = (hashFunction(n) + i) % SIZE ;
//     while(hashTable[ind] != -1){
//          ind = (hashFunction(n) + i) % SIZE;
//         i++;
//     }
//         return ind;
// }

// int main() {

// 	for (int i = 0; i < SIZE; i++) {
// 		hashTable[i] = -1;
// 	}

// 	int key[] = {8,3,13,6,4,10};
// 	for(int i = 0 ; i < 6 ; i++) {
// 		int index = hashFunction(key[i]);
// 		if (hashTable[index] == -1) {
// 			hashTable[index] = key[i];
// 		}
// 		else {
// 		   int new_index = collision(key[i]);
// 		   hashTable[new_index] = key[i];
// 		}

// 	}
// 	for ( int i = 0 ; i < SIZE ; i++) {
// 		if ( hashTable[i] == -1) {
// 			printf("__ ");
// 		}
// 		else
// 		{
// 			printf("%d ",hashTable[i]);

// 		}
// 	}

// 	return 0;
// }


// QUADRATIC PROBATION

#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

int hashFunction(int key) {
	return key % SIZE;
}

int collision(int n) {
	int i = 0 ;
	int ind = (hashFunction(n) + i*i )% SIZE ;
	while(hashTable[ind] != -1) {
		ind = (hashFunction(n) + i*i) % SIZE;
		i++;
	}
	return ind;
}


int main() {

	for (int i = 0; i < SIZE; i++) {
		hashTable[i] = -1;
	}

	int key[] = {8,3,13,23,43,10};
	for(int i = 0 ; i < 6 ; i++) {
		int index = hashFunction(key[i]);
		if (hashTable[index] == -1) {
			hashTable[index] = key[i];
		}
		else {
			int new_index = collision(key[i]);
			hashTable[new_index] = key[i];
		}

	}

	for ( int i = 0 ; i < SIZE ; i++) {
		if ( hashTable[i] == -1) {
			printf("__ ");
		}
		else
		{
			printf("\033[4m%d\033[0m ",hashTable[i]);

		}
	}

	return 0;
}


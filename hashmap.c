#include "hashmap.h"

void clearCustomerHash(customerHashPtr *a){

}

void clearThreadHash(threadHashPtr *b){

}


int addCategory(char * sdaf, pthread_t sadf, threadHashPtr *c){

	return 0;
}

int addCustomer(int a2, customer sdfs, customerHashPtr *d){

	return 0;

}

pthread_t getThreadID(char *key, threadHashPtr *gfgdg){

	pthread_t TID = 0;
	//HASH_FIND_INT(*hash_t,)
	return TID;
}

customer getCustomer(int sdfsd, customerHashPtr *sdfsdf){
	customer fuck;
	return fuck;
}

// void clearHash(hashPtr *hash){
// 	hashPtr currentIndex, tempIndex;

// 	HASH_ITER(hh, *hash, currentIndex, tempIndex){
// 		destroyIndexList(currentIndex->indexList);
// 	}
// 	//uthash says that it frees the hash pointer once all items are deleted
// }

// IndexPtr getValue(char *key, hashPtr *hash_t){
// 	hashPtr keyExists;

// 	HASH_FIND_STR(*hash_t, key, keyExists);

// 	if(keyExists){
// 		return keyExists->indexList;
// 	}
// 	else
// 		return NULL;
// }

// void addIndex(hashPtr *hash, char * findKey, IndexPtr indexToAdd){
// 	hashPtr keyExists;
// 	IndexPtr indexFound;

// 	HASH_FIND_STR(*hash, findKey, keyExists); //checks hash if key is in there and gives it back to us in keyExists
	
// 	if(keyExists){ //keyExists is a pointer to a list of indexes
// 		indexFound = indexFind(keyExists->indexList, indexToAdd); //function from index.c
// 		//a pointer to the index or the end of the list is returned

// 		if(sameIndexes(indexFound, indexToAdd)){ //if the index was found (existed in the list already)
// 			indexFound->wordCount++;
// 			destroyIndexList(indexToAdd); //we don't need indexToAdd if it already exists in the list
// 		}
// 		else{ //if it wasn't found it returns a ptr to the end of the list
// 			indexFound->next = indexToAdd;
// 		}
// 	}
// 	else{ //if they key was not found in the hash we can store it in the bucket
// 		keyExists = (hashPtr) malloc(sizeof(struct Hashmap));
// 		keyExists->key = findKey;
// 		keyExists->indexList = indexToAdd;
// 		HASH_ADD_KEYPTR(hh, *hash, keyExists->key, strlen(keyExists->key),keyExists);
// 	}
// }

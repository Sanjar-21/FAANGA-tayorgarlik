#include <stdio.h>

void almashtiramiz(char arr[], int arrSize, int index, char ga);

int main(void) {
	
  
	return 0;
}
void almashtiramiz(char arr[], int arrSize, int index, char ga) {
  for(int i  = 0; i < arrSize; i++) {
    if(arr[i] == index) {
      arr[i] = ga;
    }
  }
}}

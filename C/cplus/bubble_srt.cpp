#include <iostream>
#include <string>
#include <array>

using namespace std;

void printArray(int arg[], unsigned int l) {
  for(unsigned int i = 0; i < l - 1; i++){
    cout << arg[i] << " ";
    cout << endl;
  }
}

void bubbleSort(int arg[], unsigned int l) {
  bool sorted=false;
  while(sorted == false) {
    sorted = true;
    for(unsigned int i = 0; i < l - 1; i++){
      if(arg[i] > arg[i+1]){
        int aux = arg[i+1];
        arg[i+1] = arg[i];
        arg[i] = aux;
        sorted = false;
      }
    }
  }
  printArray(arg, l);
}


int main(){
  int ar[] = {3,2,1};
  int l = sizeof(ar)/sizeof(ar[0]);
  bubbleSort(ar, l);
}

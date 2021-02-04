void bubbleSort(int arg[]) {
  bool sorted=false;
  while(sorted) {
    sorted = true;
    for(unsigned int i = 0; i < arg.length; i++){
      if(arg[i] > arg[i+1]){
        int aux = arg[i+1];
        arg[i+1] = arg[i];
        arg[i] = aux;
        sorted = false;
      }
    }
  }
}

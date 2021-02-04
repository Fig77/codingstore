/** Bubble sort */

const bubbleSort = (array: number[]): void => {
  let sorted: boolean = false;
  while sorted === false {
    let i: number = 0;
    sorted = true;
    while i < array.length - 1 {
      if(array[i] > array[i+1]) {
        let aux: number = array[i+1];
        array[i+1] = array[i];
        array[i] = aux;
        sorted = false;
      }
      i++;
    }
  }
}

/*This set of basic problems were featured on jigsaw webconference, is a good set of problem for anywone introducing to programming. Yes, you don't need a dynamic typed
coding language to learn, and then wonder what tf is an unsigned integer or why some problems have data constraints that you never care.*/


int avrg_of_thr(int x, int y, int z) { return ((x+y+z)/3); }

bool is_ev(int x) {
  if(x%2 == 0) {
    return true;
  }
  return false;
}

int larg_of_three(int x, int y, int z) {
  if(x < y){
   if(y < z){
     return z;
   } else {
     return y;
    }
  } else {
   if(z < x) {
     return x;
   }
  }
  return z;
}

#include<iostream>

using namespace std;

/* Some of these problems were featured in C++ basics by jigsaw. It was meant for begginers, and of course some important things were left out, for time constraints and
because featured 100 problems for people with no coding idea, to get them to a nice level were they can start exploring. I was meant to follow them but clearly I got bored rathed quickly.*/

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

/* Fibo for around..first 10 numbers? did not do the math */

int fibo(double x){
  if(x < 2) {return 1;}
  return (fibo(x - 1) + fibo(x - 2));
}




#include "probabilityFunctions.h"
#include "Arduino.h"

String flip_coin() {
  int rand_n = random(1,100);
  if(rand_n > 50) {
    return "H";
  }
  if(rand_n < 50) {
    return "T";
  }
}

bool enforce_prob(int prob) {
  int rand_n = random(1,100);
  if(rand_n <= prob) {
    return true;
  }
  if(rand_n > prob) {
    return false;
  }
}

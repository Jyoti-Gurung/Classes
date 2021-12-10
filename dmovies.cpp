#include <iostream>
#include <cstring>
#include "dmovies.h"

using namespace std;

// Empty constructor and a setter (add data) and getter (get said data, print them etc)

dmovies::dmovies() {

}

void dmovies::setDirector(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    directorInput[i] = input[i];
  }
}

char* dmovies::getDirector() {
  char* str = directorInput;
  for (int i = 0; i < strlen(directorInput); i++) {
    str[i] = directorInput[i];
  }
  return str;
}

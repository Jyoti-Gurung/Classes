#include <iostream>
#include <cstring>
#include "cmusic.h"

using namespace std;

// Empty constructor and a setter (add data) and getter (get said data, print them etc)

cmusic::cmusic() {

}

void cmusic::setArtist(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    artistInput[i] = input[i];
  }
}

char* cmusic::getArtist() {
  char* str = artistInput;
  for (int i = 0; i < strlen(artistInput); i++) {
    str[i] = artistInput[i];
  }
  return str;
}

#include <iostream>
#include <cstring>
#include "aparent.h"
#include "bvideogames.h"
#include "cmusic.h"
#include "dmovies.h"

using namespace std;

aparent::aparent() {
}

void aparent::setPublisher(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    publisherInput[i] = input[i];
  }
}

char* aparent::getPublisher() {
  char* str = publisherInput;
  for (int i = 0; i < strlen(publisherInput); i++) {
    str[i] = publisherInput[i];
  }
  return str;
}


void aparent::setTitle(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    titleInput[i] = input[i];
  }
}

char* aparent::getTitle() {
  char* str = titleInput;
  for (int i = 0; i < strlen(titleInput); i++) {
    str[i] = titleInput[i];
  }
  return str;
}

void aparent::setDuration(float input) {
  durationInput = input;
}
float aparent::getDuration() {
  return durationInput;
}

void aparent::setRating(float input) {
  ratingInput = input;
}
float aparent::getRating() {
  return ratingInput;
}

void aparent::setYear(int input) {
  yearInput = input;
}
int aparent::getYear() {
  return yearInput;
}

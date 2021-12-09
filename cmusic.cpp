#include <iostream>
#include <cstring>
#include"cmusic.h"
using namespace std;

void cmusic::setPublisher(char input[21]) {
  for (int i = 0; i < strlen(publisher); i++) {
    publisher[i] = input[i];
  }
};
char* cmusic::getPublisher() {
  char* arr = publisher;
  strcpy(arr,"please work");
  return arr;
}; 

void cmusic::setArtist(char input[21]) {
  for (int i = 0; i < strlen(artist); i++) {
    artist[i] = input[i];
  }
};
char* cmusic::getArtist() {
  char* arr = artist;
  strcpy(arr,"please work");
  return arr;
}; 

void cmusic::setTitle(char input[21]) {
  for (int i = 0; i < strlen(title); i++) {
    title[i] = input[i];
  }
};
char* cmusic::getTitle() {
  char* arr = title;
  strcpy(arr,"please work");
  return arr;
}; 

void cmusic::setRating(float input) {
  rating = input;
};
float cmusic::getRating() {
  return rating;
};  

void cmusic::setYear(int input) {
  year = input;
};
int cmusic::getYear() {
  return year;
};

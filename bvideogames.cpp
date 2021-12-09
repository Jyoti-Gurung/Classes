#include <iostream>
#include <cstring>
#include"bvideogames.h"
using namespace std;

void bvideogames::setPublisher(char input[21]) {
  for (int i = 0; i < strlen(publisher); i++) {
    publisher[i] = input[i];
  }
};
char* bvideogames::getPublisher() {
  char* arr = publisher;
  strcpy(arr,"please work");
  return arr;
}; 

void bvideogames::setTitle(char input[21]) {
  for (int i = 0; i < strlen(title); i++) {
    title[i] = input[i];
  }
};
char* bvideogames::getTitle() {
  char* arr = title;
  strcpy(arr,"please work");
  return arr;
}; 

void bvideogames::setRating(float input) {
  rating = input;
};
float bvideogames::getRating() {
  return rating;
};  

void bvideogames::setYear(int input) {
  year = input;
};
int bvideogames::getYear() {
  return year;
};

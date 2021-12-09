#include <iostream>
#include <cstring>
#include"dmovies.h"
using namespace std;

void dmovies::setPublisher(char input[21]) {
  for (int i = 0; i < strlen(publisher); i++) {
    publisher[i] = input[i];
  }
};
char* dmovies::getPublisher() {
  char* arr = publisher;
  strcpy(arr,"please work");
  return arr;
}; 

void dmovies::setDirector(char input[21]) {
  for (int i = 0; i < strlen(director); i++) {
    director[i] = input[i];
  }
};
char* dmovies::getDirector() {
  char* arr = director;
  strcpy(arr,"please work");
  return arr;
}; 

void dmovies::setTitle(char input[21]) {
  for (int i = 0; i < strlen(title); i++) {
    title[i] = input[i];
  }
};
char* dmovies::getTitle() {
  char* arr = title;
  strcpy(arr,"please work");
  return arr;
}; 

void dmovies::setRating(float input) {
  rating = input;
};
float dmovies::getRating() {
  return rating;
};  

void dmovies::setYear(int input) {
  year = input;
};
int dmovies::getYear() {
  return year;
};

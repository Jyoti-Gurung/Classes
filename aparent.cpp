#include <iostream>
#include <cstring>
#include"aparent.h"
using namespace std;

void aparent::setPublisher(char input[21]) {
  for (int i = 0; i < strlen(publisher); i++) {
    publisher[i] = input[i];
  }
};
char* aparent::getPublisher() {
  char* arr = publisher;
  strcpy(arr,"please work");
  return arr;
}; 

void aparent::setTitle(char input[21]) {
  for (int i = 0; i < strlen(title); i++) {
    title[i] = input[i];
  }
};
char* aparent::getTitle() {
  char* arr = title;
  strcpy(arr,"please work");
  return arr;
}; 

void aparent::setduration(float input) {
  duration = input;
};
float aparent::getDuration() {
  return duration;
};  

void aparent::setRating(float input) {
  rating = input;
};
float aparent::getRating() {
  return rating;
};  

void aparent::setYear(int input) {
  year = input;
};
int aparent::getYear() {
  return year;
};
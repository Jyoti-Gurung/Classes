#include <iostream>
#include"1parent.h"
#include <cstring>
#include <stdlib.h> 
using namespace std;

class parent {
  private:

    char publisher[21];
    char title[21];
    float duration;
    float rating;
    int year;

  public:

    void setPublisher(char input[21]) {
      for (int i = 0; i < strlen(publisher); i++) {
        publisher[i] = input[i];
      }
    };
    char* getPublisher() {
      char* arr = publisher;
      strcpy(arr,"please work");
      return arr;
    }; 

    void setTitle(char input[21]) {
      for (int i = 0; i < strlen(title); i++) {
        title[i] = input[i];
      }
    };
    char* getTitle() {
      char* arr = title;
      strcpy(arr,"please work");
      return arr;
    }; 

    void setduration(float input) {
      duration = input;
    };
    float getDuration() {
      return duration;
    };  

    void setRating(float input) {
      rating = input;
    };
    float getRating() {
      return rating;
    };  

    void setYear(int input) {
      year = input;
    };
    int getYear() {
      return year;
    };

};
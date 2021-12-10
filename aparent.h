#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

class aparent {
  public:
    aparent();
    virtual void setPublisher(char input[]);
    virtual char* getPublisher();
    virtual void setTitle(char input[]);
    virtual char* getTitle();
    virtual void setDuration(float input);
    virtual float getDuration();
    virtual void setRating(float input);
    virtual float getRating();
    virtual void setYear(int input);
    virtual int getYear();
    
  protected:
    char publisherInput[21];
    char titleInput[21];
    int durationInput;
    int ratingInput;
    int yearInput;
    
};

#endif
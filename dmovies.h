#include <iostream>
#include <cstring>
#include"aparent.h"
using namespace std;

class dmovies: public aparent {
  public:
  
    virtual void setPublisher(char input[21]);
    virtual char* getPublisher();

    virtual void setDirector(char input[21]);
    virtual char* getDirector();

    virtual void setTitle(char input[21]);
    virtual char* getTitle();

    virtual void setRating(float input);
    virtual float getRating();

    virtual void setYear(int input);
    virtual int getYear();  

  protected:
    char director[21];

};
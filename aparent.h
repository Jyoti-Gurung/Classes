#include <iostream>
#include <cstring>
using namespace std;

class aparent {
  public:

    virtual void setPublisher(char input[21]);
    virtual char* getPublisher();

    virtual void setTitle(char input[21]);
    virtual char* getTitle();

    virtual void setduration(float input);
    virtual float getDuration();

    virtual void setRating(float input);
    virtual float getRating();

    virtual void setYear(int input);
    virtual int getYear();

  protected:
  
    char publisher[21];
    char title[21];
    float duration;
    float rating;
    int year;

};
#include <iostream>
#include <cstring>
#include"aparent.h"
using namespace std;

class cmusic: public aparent {
  public:
  
    virtual void setPublisher(char input[21]);
    virtual char* getPublisher();

    virtual void setArtist(char input[21]);
    virtual char* getArtist();

    virtual void setTitle(char input[21]);
    virtual char* getTitle();

    virtual void setRating(float input);
    virtual float getRating();

    virtual void setYear(int input);
    virtual int getYear();  

  protected:
    char artist[21];

};
#ifndef CMUSIC_H
#define CMUSIC_H

#include <iostream>
#include "aparent.h"

using namespace std;

// Initilize functions and variables
class cmusic: public aparent {
  public:
    cmusic();
    virtual void setArtist(char input[]);
    virtual char* getArtist();

  protected:
    char artistInput[];

};

#endif
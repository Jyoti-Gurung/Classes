#ifndef DMOVIES_H
#define DMOVIES_H

#include <iostream>
#include "aparent.h"

using namespace std;

class dmovies: public aparent {
  public:
    dmovies();
    virtual void setDirector(char input[]);
    virtual char* getDirector();

  protected:
    char directorInput[];

};

#endif
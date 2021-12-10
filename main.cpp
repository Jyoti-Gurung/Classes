/*
Author: Jyoti Gurung
Date: 11/18/21
Description: Database of Video Games, Movies and Music; add and delete from database, search through it by date
*/

#include <iostream>
#include <vector>
#include "bvideogames.h"
#include "cmusic.h"
#include "dmovies.h"
using namespace std;

void add() {
  int logic;
  cout << "1: Video Games 2: Music 3:Movies\n";
  cin >> logic;

}

void search() {
  int logic;
  cout << "Type the Year:\n";
  cin >> logic;
}

void deleted() {
  int logic;
  cout << "Type the Year:\n";
  cin >> logic;
}

int main() {

  cmusic* c = new cmusic();
  vector <aparent*> storage;
  storage.push_back(c);

  char input[5] = {'a','a','a','a','a'};

  

  ((cmusic*)storage[0])->setPublisher(input);
  ((cmusic*)storage[0])->setTitle(input);
  ((cmusic*)storage[0])->setDuration(30);
  ((cmusic*)storage[0])->setRating(5);
  ((cmusic*)storage[0])->setYear(2018);
  ((cmusic*)storage[0])->setArtist(input);

  cout 
  << storage[0]->getPublisher() << endl
  << storage[0]->getTitle() << endl
  << storage[0]->getDuration() << endl
  << storage[0]->getRating() << endl
  << storage[0]->getYear() << endl
  << ((cmusic*)storage[0])->getArtist() << endl
  ;

  int logic;
  while (logic != 4) { 
    cout << "\n1:ADD 2:SEARCH 3:DELETE 4:QUIT\n";
    cin >> logic;
    switch(logic) {
      case 1:
        add();
        break;
      case 2:
        search();
        break;
      case 3:
        deleted();
        break;
    }
  }

}

/*Sources:
1.https://www.youtube.com/watch?v=RWNM7CzDNyY
returning an array
2.https://www.youtube.com/watch?v=VnZbghMhfOY
passing in an array to a function
*/
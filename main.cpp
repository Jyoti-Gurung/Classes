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

void add();
void search();
void deleted();
void addVideoGames();
void addMusic();
void addMovies();

vector <aparent*> storage;
int countStorage = 0;

int main() {

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


void add() {
  int logic;
  while (logic < 1 || logic > 3) {
    cout << "1: Video Games 2: Music 3:Movies\n";
    cin >> logic;
    switch(logic) {
      case 1:
        addVideoGames();
        break;
      case 2:
        addMusic();
        break;
      case 3:
        addMovies();
        break;
    }
  }
}

void search() {
  int logic;
  cout << "Type the Year:\n";
  cin >> logic;

  for (int i = 0; i < storage.size(); i++) {
    if (storage[i]->getYear() == logic) {
      cout << "Yahoo";
    }
  }

}

void deleted() {
  int logic;
  cout << "Type the Year:\n";
  cin >> logic;

  for (int i = 0; i < storage.size(); i++) {
    if (storage[i]->getYear() == logic) {
      storage.erase(storage.begin() + i);
    }
  }

}

void addVideoGames() {
  char publisher[21], title[21];
  float rating;
  int year;
  cout << "Publisher:\n";
  cin >> publisher;
  cout << "Title:\n";
  cin >> title;
  cout << "Rating:\n";
  cin >> rating;
  cout << "Year:\n";
  cin >> year;

  bvideogames* nameless = new bvideogames();
  storage.push_back(nameless);

  ((bvideogames*)storage[countStorage])->setPublisher(publisher);
  ((bvideogames*)storage[countStorage])->setTitle(title);
  ((bvideogames*)storage[countStorage])->setRating(rating);
  ((bvideogames*)storage[countStorage])->setYear(year);

  countStorage++;

}

void addMusic() {
  char publisher[21], artist[21], title[21];
  float duration;
  int year;
  cout << "Publisher:\n";
  cin >> publisher;
  cout << "Artist:\n";
  cin >> artist;
  cout << "Title:\n";
  cin >> title;
  cout << "Duration:\n";
  cin >> duration;
  cout << "Year:\n";
  cin >> year;

  cmusic* nameless = new cmusic();
  storage.push_back(nameless);

  ((cmusic*)storage[countStorage])->setPublisher(publisher);
  ((cmusic*)storage[countStorage])->setArtist(artist);
  ((cmusic*)storage[countStorage])->setTitle(title);
  ((cmusic*)storage[countStorage])->setDuration(duration);
  ((cmusic*)storage[countStorage])->setYear(year);

  countStorage++;

}

void addMovies() {
  char director[21], title[21];
  float duration, rating;
  int year;
  cout << "Director:\n";
  cin >> director;
  cout << "Title:\n";
  cin >> title;
  cout << "Duration:\n";
  cin >> duration;
  cout << "Rating:\n";
  cin >> rating;
  cout << "Year:\n";
  cin >> year;

  dmovies* nameless = new dmovies();
  storage.push_back(nameless);

  ((dmovies*)storage[countStorage])->setDirector(director);
  ((dmovies*)storage[countStorage])->setTitle(title);
  ((dmovies*)storage[countStorage])->setDuration(duration);
  ((dmovies*)storage[countStorage])->setRating(rating);
  ((dmovies*)storage[countStorage])->setYear(year);

  countStorage++;

}

/*Sources:
1.https://www.youtube.com/watch?v=RWNM7CzDNyY
returning an array
2.https://www.youtube.com/watch?v=VnZbghMhfOY
passing in an array to a function
*/

/*

  cout 
  << storage[0]->getPublisher() << endl
  << storage[0]->getTitle() << endl
  << storage[0]->getRating() << endl
  << storage[0]->getYear() << endl
  ;
  
  cout 
  << storage[0]->getPublisher() << endl
  << ((cmusic*)storage[0])->getArtist() << endl
  << storage[0]->getTitle() << endl
  << storage[0]->getDuration() << endl
  << storage[0]->getYear() << endl
  ;

  cout
  << ((dmovies*)storage[0])->getDirector() << endl
  << storage[0]->getTitle() << endl
  << storage[0]->getDuration() << endl
  << storage[0]->getRating() << endl
  << storage[0]->getYear() << endl
  ;

*/
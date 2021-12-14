/*
Author: Jyoti Gurung
Date: 11/18/21
Description: Database of Video Games, Movies and Music; add and delete from database, search through it by date
*/

#include <iostream>
#include <vector>
#include <cstring>
#include "bvideogames.h"
#include "cmusic.h"
#include "dmovies.h"
using namespace std;

// Intializing the functions to use below main()
void add();
void search();
void deleted();
void addVideoGames();
void addMusic();
void addMovies();

// Vector and counting vectors
vector <aparent*> storage;
int countStorage = 0;

int main() {

  // Using a switch statement to call on functions & a while loop to do so forever, unless you quit using 4
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

// Eternal loop unless you type 1-3, then pick up a function based on data type
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

// Check if the year matching by looping through storage, then print out the contents; we use a try catch function guard to check for non parent methods
void search() {
  int logic;
  cout << "Type the Year:\n";
  cin >> logic;

  for (int i = 0; i < storage.size(); i++) {
    if (((dmovies*)storage[i])->getYear() == logic) {
      cout << storage[i]->getTitle() << endl;
      
      /*
      try {
      cout 
      << storage[i]->getPublisher() << endl
      << ((dmovies*)storage[i])->getDirector() << endl
      << ((cmusic*)storage[i])->getArtist() << endl
      << storage[i]->getDuration() << endl
      << storage[i]->getRating()
      ;
      }
      catch(int failure) {
        failure = 0;
      }
      */
      
      cout << storage[i]->getYear() << endl;
    }
  }
  
}

// Delete items if it matches said storage
void deleted() {
  int logic;
  cout << "Type the Year: ";
  cin >> logic;
  int confirm;
  cout << "Type 1 to Confirm: ";
  cin >> confirm;

  for (int i = 0; i < storage.size(); i++) {
    if (storage[i]->getYear() == logic && confirm == 1) {
      storage.erase(storage.begin() + i);
      countStorage--;
    }
  }

}

// Ask for fields and set them to Video Games
void addVideoGames() {
  char publisher[21], title[21];
  float rating;
  int year;
  cout << "Publisher:\n";
  cin >> publisher;
  cin.clear();
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

// Ask for fields and set them to Music
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

// Ask for fields and set them to Movies
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

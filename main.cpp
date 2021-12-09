/*
Author: Jyoti Gurung
Date: 11/18/21
Description: Database of Video Games, Movies and Music; add and delete from database, search through it by date
*/

#include <iostream>
#include"1parent.h"
#include"2videogames.h"
#include"3music.h"
#include"4movies.h"
#include <cstring>
using namespace std;

bool forever = true;

void add() {
  cout << "added\n";
}

void search() {
  cout << "searched\n";  
}

void deleted() {
  cout << "deleted\n";
}

int main() {

  while (forever == true) {

    // 4 command matches
    char search2[6] = {'S', 'E', 'A', 'R', 'C', 'H'};
    char add2[4] = {'A', 'D', 'D'};
    char delete2[7] = {'D', 'E', 'L', 'E', 'T', 'E'};
    char quit2[5] = {'Q', 'U', 'I', 'T'};

    char command[7];

    cout << "\nCommands are: SEARCH, ADD, DELETE, QUIT\n";
    cin >> command;

    //4 for loops for matching commands; if matched then trigger function
    
    //print
    for (int i = 0; i < strlen(command); i++) {
      if (!(command[i] == search2[i])) {
        break;
      }
      if (i == strlen(search2)-1 && strlen(command) == strlen(search2)) {
        search();
      }
    }

    //added
    for (int i = 0; i < strlen(command); i++) {
      if (!(command[i] == add2[i])) {
        break;
      }
      if (i == strlen(add2)-1 && strlen(command) == strlen(add2)) {
        add();
      }
    }

    //deleted
    for (int i = 0; i < strlen(command); i++) {
      if (!(command[i] == delete2[i])) {
        break;
      }
      if (i == strlen(delete2)-1 && strlen(command) == strlen(delete2)) {
        deleted();
      }
    }

    //quit; no function, turns off the forever bool to turn off while loop
    for (int i = 0; i < strlen(command); i++) {
      if (!(command[i] == quit2[i])) {
        break;
      }
      if (i == strlen(quit2)-1 && strlen(command) == strlen(quit2)) {
        forever = false;
      }
    }
  }

}
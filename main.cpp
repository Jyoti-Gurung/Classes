/*
Author: Jyoti Gurung
Date: 11/18/21
Description: Database of Video Games, Movies and Music; add and delete from database, search through it by date
*/

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// the loops for 4 commands
bool forever = true;



void add() {
  cout << "Type 1: Video Games 2: Music 3: Movies\n";
}

void search() {
  cout << "Type the year it was published!\n";  
}

void deleted() {
  cout << "Type the year it was published\n";
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
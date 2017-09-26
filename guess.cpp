//Author: Aaron Nicanor

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main(){

int end;
do{
 cout<<"Choose your difficulty: Easy, Medium, or Hard"<<endl;
 std::string difficulty;
 int level;
 level = 0;
 while (level == 0){
  cin>>difficulty;
  if (difficulty == "Easy" || difficulty == "easy"){
   level = 2;
   cout<<"Beginning easy mode"<<endl;
  } else if (difficulty == "Medium" || difficulty == "medium"){
   level = 10;
   cout<<"Beginning medium mode"<<endl;
  } else if (difficulty == "Hard" || difficulty == "hard"){
   level = 100;
   cout<<"Beginning hard mode"<<endl;
  } else{
   cout<<"Input not recognized, please type either Easy, Medium, or Hard"<<endl;
  }
 }
 

 srand (time(NULL));
 int randomNumber;
 randomNumber = rand() % level + 1;
 int guess;
 cout<<"Enter a number between 1 and "<<level<<":"<<endl;
 cin>>guess;
 if (guess > randomNumber){
  cout<<"You were off by "<<guess-randomNumber<<" and your guess was greater than the random number."<<endl<<"Sorry, you lose."<<endl;
 } else if (guess < randomNumber){
  cout<<"You were off by "<<randomNumber-guess<<" and your guess was less than the random number."<<endl<<"Sorry, you lose."<<endl;
 } else{
  cout<<"You guessed correctly! You win!"<<endl;
 }
 
 int choiceBreaker;
 std::string choice;
 end = 0;
 cout<<"Would you like to play again? (Yes/No)"<<endl;
 while (choiceBreaker != 1){
  cin>>choice;
  if (choice == "Yes" || choice == "yes"){
   choiceBreaker = 1;
  }else if (choice == "No" || choice == "no"){
   cout<<"Thanks for playing!"<<endl;
   choiceBreaker = 1;
   end = 1;
  } else{
   cout<<"Input not recognized, please type either Yes or No"<<endl;
  }
 }
 choiceBreaker = 0;
} while (end != 1);

return 0;
}

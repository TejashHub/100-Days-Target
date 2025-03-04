#include<iostream>
using namespace std;

class Game {
    public:
        enum Difficulty { EASY, MEDIUM, HARD };
};

void checkLevel(Game::Difficulty level) {
    switch (level){
        case Game::EASY: cout << "level easy" << endl << endl ;
        break;
        case Game::MEDIUM: cout << "level medium" << endl << endl ;
        break;
        case Game::HARD: cout << "level hard" << endl << endl ;
        break;
        default: cout << "Unknown" << endl << endl ;
        break;
    }
};

int main(){
    Game::Difficulty level = Game::HARD;
    checkLevel(level);
}
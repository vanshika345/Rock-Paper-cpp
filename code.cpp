#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int player = 0;
    int computer = 0;
    cout << "Rock Paper Scissor Game" << endl;
    cout << "Select a number from 1 to 3, where:"<<endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cin >> player;

    if(player == 1){
        cout << "You choose Rock" << endl;
    }
    else if(player == 2){
        cout << "You choose Paper" << endl;
    }
    else{
        cout << "You choose Scissor" << endl;
    }

    computer = rand()%3+1;
    if(computer == 1){
        cout << "Computer chooses Rock" << endl;
    }
    else if(computer == 2){
        cout << "Computer chooses Paper"<< endl;
    }
    else{
        cout << "Computer chooses Scissor" << endl;
    }

    if(player == computer){
        cout << "Match Tie" << endl;
    }

    else if(player == 1){
        if(computer == 2){
            cout << "You lose!" << endl;
        }
        if(computer == 3){
            cout << "You win!" << endl;
        }
    }

    else if(player == 2){
        if(computer == 1){
            cout << "You win!" << endl;
        }
        if(computer == 3){
            cout << "You lose!" << endl;
        }
    }
    
    else if(player == 3){
        if(computer == 1){
            cout << "You lose!" << endl;
        }
        if(computer == 2){
            cout << "You win!" << endl;
        }
    }
    return 0;
}
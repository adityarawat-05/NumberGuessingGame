#include <iostream>
using namespace std;

class Guesser {
    int guessedNum;
public:
    int takeguesserinput(){
        int x;
        cout<<"Give the number for Guesser: "<<endl;
        cin>>x;
        guessedNum = x;
        return guessedNum;
    }
};

class Player {
    int playerNum;
public:
    int takeplayerinput(){
        int p;
        cin>>p;
        playerNum = p;
        return playerNum;
    }
};

class Umpire {
public:
    int g;
    int p1num;
    int p2num;
    int p3num;

    void GetTheNumberFromGuesser(){
        Guesser g1;
        g = g1.takeguesserinput();
    }
    void GetTheNumberFromPlayers(){
        Player p1;
        Player p2;
        Player p3;
        cout<<"Give the number for Player 1: "<<endl;
        p1num = p1.takeplayerinput();
        cout<<"Give the number for Player 2: "<<endl;
        p2num = p2.takeplayerinput();
        cout<<"Give the number for Player 3: "<<endl;
        p3num = p3.takeplayerinput();
    }
    void PrintTheResult(){
        if(g == p1num){
                if(p2num == g){
                    if(p3num == g){
                        cout<<"All the players have won the game!"<<endl;
                    }
                    else{
                        cout<<"The Player 1 and Player 2 have won the game!"<<endl;
                    }
                }
                else if(p3num == g){
                    cout<<"The Player 1 and Player 3 have won the game!"<<endl;
                }
                else{
                    cout<<"The Player 1 has won the game!"<<endl;
                }
                
        }
        else if(g == p2num){
            if(p3num == g){
                cout<<"The Player 2 and Player 3 have won the game!"<<endl;
            }
            else{
                cout<<"The Player 2 has won the game!"<<endl;
            }
        }
        else if(g == p3num){
            cout<<"The Player 3 has won the game!"<<endl;
        }
        else{
            cout<<"All the players have lost the game!"<<endl;
        }
    }
};

int main() {
    cout<<"-------Let's start the game-------"<<endl;
    cout<<endl;

    Umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayers();
    u.PrintTheResult();
    
    cout<<endl;
    cout<<"------End Game------"<<endl;
    return 0;
}
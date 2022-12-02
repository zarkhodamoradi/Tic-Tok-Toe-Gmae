#include <iostream>
using namespace std;

char board[3][3]={'1','2','3','4','5','6','7','8','9'};
char turn='X';
bool NoWinner=false;


void displayBoard(){

cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;
cout<<"\t"<<board[0][0] <<"\t|\t"<<board[0][1]<<"\t|\t"<<board[0][2]<<endl;
cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;
cout<<"\t"<<board[1][0] <<"\t|\t"<<board[1][1]<<"\t|\t"<<board[1][2]<<endl;
cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;
cout<<"\t"<<board[2][0] <<"\t|\t"<<board[2][1]<<"\t|\t"<<board[2][2]<<endl;
cout<<"\t"<<" " <<"\t|\t"<<" "<<"\t|\t"<<" "<<endl;

}


// void playingGmae(){

// }


int main(){
// displayBoard();
}
#include <iostream>
using namespace std;

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char turn = 'X';
bool NoWinner = false;
//////////////////////////////////////////////////////////////////////////////////////////////
void displayBoard();
void playingGmae();
void Enterchoice(int);
bool stopGame();
//////////////////////////////////////////////////////////////////////////////////////////////
// main
int main()
{
    while (stopGame())
    {
        displayBoard();
        playingGmae();
    }
    if (NoWinner == true)
    {
        cout << "\n\t\tNobody win !!\t\t\n";
    }
}
// display board function
void displayBoard()
{

    cout << "\t"<< " " << "\t|\t"<< " "<< "\t|\t" << " " << endl;
    cout << "\t" << board[0] << "\t|\t" << board[1] << "\t|\t" << board[2] << endl;
    cout << "\t"<< " " << "\t|\t"<< " "<< "\t|\t"<< " " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\t"<< " "<< "\t|\t"<< " "<< "\t|\t"<< " " << endl;
    cout << "\t" << board[3] << "\t|\t" << board[4] << "\t|\t" << board[5] << endl;
    cout << "\t"<< " "<< "\t|\t" << " "<< "\t|\t"<< " " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\t"<< " "<< "\t|\t"<< " "<< "\t|\t"<< " " << endl;
    cout << "\t" << board[6] << "\t|\t" << board[7] << "\t|\t" << board[8] << endl;
    cout << "\t"<< " "<< "\t|\t"<< " "<< "\t|\t"<< " " << endl;
}
// check the chice and put on the boarde
void Enterchoice(int choice)
{

    switch (choice)
    {
    case 1:
        board[0] = turn;
        break;
    case 2:
        board[1] = turn;
        break;
    case 3:
        board[2] = turn;
        break;
    case 4:
        board[3] = turn;
        break;
    case 5:
        board[4] = turn;
        break;
    case 6:
        board[5] = turn;
        break;
    case 7:
        board[6] = turn;
        break;
    case 8:
        board[7] = turn;
        break;
    case 9:
        board[8] = turn;
        break;
    default:

        break;
    }
};
// collect the choise
void playingGmae()
{
    int choice;
    if (turn == 'X')
    {
        cout << "\n\t\tPLayer 1 [X] \t\t\n\nEnter your cohice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 9)
        {
            if (board[choice - 1] != 'X' && board[choice - 1] != 'O')
            {

                Enterchoice(choice);
            }

            else
            {
                cout << "\n!!!Already is full!!! \n\nEnter again : \n" << endl;
                playingGmae();
            }
        }

        else
        {
            cout << "\n!!!Your choice is not valid!!!\n\nEnter again : \n";
            playingGmae();
        }
        turn = 'O';
    }

    else if (turn == 'O')
    {
        cout << "\n\t\tPLayer 2 [O]\t\t \n\nEnter your cohice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 9)
        {
            if (board[choice - 1] != 'X' && board[choice - 1] != 'O')
            {

                Enterchoice(choice);
            }

            else
            {
                cout << "\n!!!Already is full!!! \n\nEnter again : \n" << endl;
                playingGmae();
            }
        }

        else
        {
            cout << "\n!!!Your choice is not valid!!!\n\nEnter again : \n";
            playingGmae();
        }
        turn = 'X';
    }
}
// equal the member of the boarde array for atop the game
bool stopGame()
{

    if ((board[0] == board[1] && board[0] == board[2]) || (board[3] == board[4] && board[3] == board[5]) || (board[6] == board[7] && board[6] == board[8]) || (board[0] == board[3] && board[0] == board[6]) || (board[1] == board[4] && board[1] == board[7]) || (board[2] == board[5] && board[2] == board[8]) || (board[0] == board[4] && board[0] == board[8]) || (board[2] == board[4] && board[2] == board[6]))
    {
        if (turn == 'O')
        {

            cout << "\n\t\tCongratulation player 1  [X] Win !!!\t\t";
            return false;
        }
        else if (turn == 'X')
        {
            cout << "\n\t\tCongratulation player 2  [O] Win !!!\t\t";
            return false;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if (board[i] != 'X' && board[i] != 'O')
        {
            return true;
        }
    }

    NoWinner = true;
    return false;
}

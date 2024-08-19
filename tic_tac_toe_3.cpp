#include <iostream>

void draw_board(char *spaces);
void player_moves1(char *spaces, char player1);
void player_moves2(char *spaces, char player2);
bool check_1v1_winner(char *spaces, char player1, char player2);
bool check_tie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    char player1 = 'X';
    char player2 = 'O';
    bool running = true;

    draw_board(spaces);

    while (running)
    {
        player_moves1(spaces, player1);
        draw_board(spaces);
        if (check_1v1_winner(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (check_tie(spaces))
        {
            running = false;
            break;
        }

        player_moves2(spaces, player2);
        draw_board(spaces);
        if (check_1v1_winner(spaces, player1, player2))
        {
            running = false;
            break;
        }
        else if (check_tie(spaces))
        {
            running = false;
            break;
        }
    }

    std::cout << "THANKS FOR PLAYING ." << '\n';

    return 0;
}
void draw_board(char *spaces)
{

    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |   " << spaces[2] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |   " << spaces[5] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |   " << spaces[8] << "  " << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}
void player_moves1(char *spaces, char player1)
{
    int number;

    do
    {
        std::cout << "Enter a spot to place marker (1-9)";
        std::cin >> number;
        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player1;
            break;
        }

    } while (!number > 0 || !number < 9);
}
void player_moves2(char *spaces, char player2)
{
    int number;

    do
    {
        std::cout << "Enter a spot to place marker (1-9)";
        std::cin >> number;
        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player2;
            break;
        }

    } while (!number > 0 || !number < 9);
}
bool check_1v1_winner(char *spaces, char player1, char player2)
{

    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
    }   
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
        {
            spaces[3] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
        {
           spaces[6] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
        {
            spaces[0] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
        {
            spaces[1] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
        {
            spaces[2] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
        {
            spaces[0] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
        {
            spaces[2] == player1 ? std::cout<<"PLAYER 1 WON!\n" : std::cout<<"PLAYER 2 WON!\n";
        }
    else
        {
            return false;
        }

        return true;
}
bool check_tie(char *spaces)
{

    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "IT'S A TIE !" << '\n';
    return true;
}
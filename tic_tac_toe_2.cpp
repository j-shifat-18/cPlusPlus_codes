#include <iostream>

void draw_board(char *spaces);
void player_moves1(char *spaces, char player1);
void player_moves2(char *spaces, char player2);
void computer_moves(char *spaces, char computer);
bool check_winner(char *spaces, char player1, char computer);
bool check_1v1_winner(char *spaces, char player1, char player2);
bool check_tie(char *spaces);

int main()
{
    

    while(1)
    {
        char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    char player1 = 'X';
    char player2 = 'o';
    char computer = 'O';
    bool running = true;

    int game_mode;

    std::cout << "***TIC-TAC-TOE***\n";
    std::cout << "1.player vs computer\n";
    std::cout << "2.player vs player\n";
    std::cin >> game_mode;

        if (game_mode == 1)
    {
        draw_board(spaces);

        while (running)
        {
            player_moves1(spaces, player1);
            draw_board(spaces);
            if (check_winner(spaces, player1, computer))
            {
                running = false;
                break;
            }
            else if (check_tie(spaces))
            {
                running = false;
                break;
            }

            computer_moves(spaces, computer);
            draw_board(spaces);
            if (check_winner(spaces, player1, computer))
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
       
    }
    else if (game_mode == 2)
    {
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
        
      
    }
    else
    {
        std::cout<<"PLEASE CHOOSE 1 OR 2 .\n";
    }

    return 0;

    }
    
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
        std::cout << "Enter a spot to place marker (1-9) --player1:";
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
        std::cout << "Enter a spot to place marker (1-9) --player2:";
        std::cin >> number;
        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player2;
            break;
        }

    } while (!number > 0 || !number < 9);
}
void computer_moves(char *spaces, char computer)
{
    int number;
    srand(time(0));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool check_winner(char *spaces, char player, char computer)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player ? std::cout << "YOU WON!!" << '\n' : std::cout << "YOU LOSE!!" << '\n';
    }
    else
    {
        return false;
    }

    return true;
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
#include<iostream>
#include<ctime>

char userChoice();
char computerChoice();
void showChoice(char choice);
void showWinner(char player,char computer);

int main()
{   std::cout<<"******************\n";
    std::cout<<"ROCK--PAPER--SCISSORS GAME\n"; 
    std::cout<<"******************\n";
    while(1){
          char player;
    char computer;

    player=userChoice();
    std::cout<<"Your choice  :";
    showChoice(player);

    computer=computerChoice();
    std::cout<<"Computer choice  :";
    showChoice(computer);

    showWinner(player,computer);
    
     std::cout<<"\n\n";

    }
   
  


    return 0;
}
char userChoice(){
    char player;   
    std::cout<<"************\n";

    do{
        
    std::cout<<"Enter any of the following:\n";
    std::cout<<"r=Rock\n";
    std::cout<<"p=paper\n";
    std::cout<<"s=scissors\n";
    std::cin>>player;

    }while(player!='r' && player!='p' && player!='s');


   
    return player;
}
char computerChoice(){
    int computer;
    srand(time(0));
    computer=rand()%3 +1;

    switch(computer){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
    }

    return 0;

}
void showChoice(char choice){
     switch(choice){
        case 'r':std::cout<<"Rock\n";
             break;
        case 'p':std::cout<<"Paper\n";
             break;
        case 's':std::cout<<"Scissors\n";
             break;
        default:std::cout<<"Invalid character.\n";

     }
   
}
void showWinner(char player,char computer){
    switch(player){
     case 'r':if(computer == 'r'){
            std::cout<<"It's a tie !\n";
            break;

        }
        else if (computer == 'p'){
            std::cout<<"You lose.\n";
            break;
        }
        else{
            std::cout<<"You won.\n";
            break;
        }

     case 'p':if(computer == 'r'){
            std::cout<<"You won.\n";
            break;

        }
        else if (computer == 'p'){
            std::cout<<"It's a tie !\n";
            break;
        }
        else{
            std::cout<<"You lose.\n";
            break;
        }

     case 's':if(computer == 'r'){
            std::cout<<"You lose.\n";
            break;

        }
        else if (computer == 'p'){
            std::cout<<"You won\n";
            break;
        }
        else{
            std::cout<<"It's a tie !\n";
            break;
        }
        }
    }
     


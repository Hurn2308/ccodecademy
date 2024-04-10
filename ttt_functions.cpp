#include <iostream>
#include <string>
#include "ttt_functions.hpp"

void greet(){
  std::cout << "================\n";
  std::cout << "Tic Tac Toe Game\n";
  std::cout << "================\n";
  std::cout << "Welcome to the Tic Tac Toe Game! Tic-Tac-Toe is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game.\n";
  std::cout << "Player 1 will be X and Player 2 will be O.\n";
}

 std::string board[] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
 

void set_position_p1() {
  int i = 0;
  bool filled = false;
do{
  std::cout << "Player 1 please pick position's 1-9 to place your X: \n";
  std::cin >> i;
  if(board[i - 1] == " "){
  board[i - 1] = "X";
  filled = true;
  } else{
    std::cout << "Invalid Input! Please Try Again!\n";
    print_board();
    filled = false;
  }
} while(filled != true);
}

void set_position_p2() {
  int j = 0;
  bool filled2 = false;
do{
  std::cout << "Player 2 please pick position's 1-9 to place your O: \n";
  std::cin >> j;
  if(board[j - 1] == " "){
  board[j - 1] = "O";
  filled2 = true;
  } else{
    std::cout << "Invalid Input! Please Try Again!\n";
    print_board();
    filled2 = false;
  }
} while(filled2 != true);
}

void print_board(){
  std::cout << "|"<< board[0] << "|" << board[1] << "|" << board[2] << "|\n";
  std::cout << "|"<< board[3] << "|" << board[4] << "|" << board[5] << "|\n";
  std::cout << "|"<< board[6] << "|" << board[7] << "|" << board[8] << "|\n";
}

bool winner_player1(){
  if(board[0] == board [1] && board [1] == board[2] && board[0] == "X"){
    return winner = true;
  } else if(board[3] == board [4] && board [4] == board[5] && board[3] == "X"){
    return winner = true;
  } else if(board[6] == board [7] && board [7] == board[8] && board[6] == "X"){
    return winner = true;
  } else if(board[0] == board [3] && board [3] == board[6] && board[0] == "X"){
    return winner = true;
  } else if(board[1] == board [4] && board [4] == board[7] && board[1] == "X"){
    return winner = true;
  } else if(board[2] == board [5] && board [5] == board[8] && board[2] == "X"){
    return winner = true;
  } else if(board[0] == board [4] && board [4] == board[8] && board[0] == "X"){
    return winner = true;
  } else if(board[2] == board [4] && board [4] == board[6] && board[2] == "X"){
    return winner = true;
  } else {
    return winner = false;
  }
}

bool winner_player2(){
  if(board[0] == board [1] && board [1] == board[2] && board[0] == "O"){
    return winner = true;
  } else if(board[3] == board [4] && board [4] == board[5] && board[3] == "O"){
    return winner = true;
  } else if(board[6] == board [7] && board [7] == board[8] && board[6] == "O"){
    return winner = true;
  } else if(board[0] == board [3] && board [3] == board[6] && board[0] == "O"){
    return winner = true;
  } else if(board[1] == board [4] && board [4] == board[7] && board[1] == "O"){
    return winner = true;
  } else if(board[2] == board [5] && board [5] == board[8] && board[2] == "O"){
    return winner = true;
  } else if(board[0] == board [4] && board [4] == board[8] && board[0] == "O"){
    return winner = true;
  } else if(board[2] == board [4] && board [4] == board[6] && board[2] == "O"){
    return winner = true;
  } else {
    return winner = false;
  }
}

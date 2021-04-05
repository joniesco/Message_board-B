#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>

using namespace std;

namespace ariel {
void Board::post(uint row, uint col, Direction direction, string message) {
 
     uint mseeage_len=message.length();
     uint i=0;
     // update the borders of the board
        this->maxRow = max(this->maxRow, row);
        this->maxCol = max(this->maxCol, col);
        this->minRow = min(this->minRow, row);
        this->minCol = min(this->minCol, col);
       while(i<mseeage_len){

            this->board[row][col].curr = message[i];
            if(direction == Direction::Vertical){
                row++;
            }
            else{
                col++;
            }
            i++; 
        }
    }

 
  string Board::read(uint row, uint col, Direction direction, uint char_length) {
        string ans;
        uint i=0;
        while(i<char_length){
            ans += this->board[row][col].curr;
            if(direction == Direction::Vertical){
                row++;
            }
            else{
                col++;
            } 
            i++;
        }
        
        return ans;
    }
  void Board::show() {
     if( this->board.empty())
        {
            throw out_of_range("the board is empty");
        } for (uint i = this->minRow; i <= this->maxRow; i++) {
            for (uint j = this->minCol; j <= this->maxCol; j++) {
                cout << this->board[i][j].curr << " ";
            }
            cout << "\n\n";
        }
    }

}
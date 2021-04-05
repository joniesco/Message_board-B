#include <string>
#include <map>
#include "Direction.hpp"
using namespace std;
struct Node{
    char curr = '_';
};


namespace ariel {
    class Board {
    uint minRow, maxRow,minCol, maxCol;
    map<uint, map<uint, Node> > board;  //will represent our board
    public:
        Board() {
            maxRow =  maxCol = 0;
            minRow=minCol=UINT32_MAX; 
            
        }
        ~Board() { }
        void post(uint row, uint column, Direction direction, std::string message);
        std::string read(uint row, uint column, Direction direction, uint length);
        void show();
        
    };
}

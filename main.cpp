#include <iostream>

using namespace std;

class Move {
 public:
 // Take sc coins from heap sh and put tc coins to heap th.
 Move(int sh, int sc, int th, int tc);

 int getSource() const;
 int getSourceCoins() const;
 int getTarget() const;
 int getTargetCoins() const;

 friend ostream & operator << (ostream &out, const Move &move);

 private:
 int source_heap;
 int source_coins;
 int target_heap;
 int target_coins;
 };

 Move::Move(int sh, int sc, int th, int tc): source_heap(sh), source_coins(sc), target_heap(th), target_coins(tc) {}

 int Move::getSource() const {
    return source_heap;
 }

 int Move::getSourceCoins() const {
   return source_coins;
 }

 int Move::getTarget() const {
   return target_heap;
 }

 int Move::getTargetCoins() const {
   return target_coins;
 }

 ostream& operator<<(ostream &out, const Move &move){
   
   if(move.getTargetCoins() != 0)
     out << "takes" << move.getSourceCoins() << "coins from heap" << move.getSource() << "and puts" << move.getTargetCoins() << "coins to heap" << move.getTarget();
   else
     out << "takes" << move.getSourceCoins() << "coins from heap" << move.getSource() << "and puts nothing";
   return out;
 }
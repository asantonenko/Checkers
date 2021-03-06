const pair<int, int> cannot_move = {-1, -1};

const pair<int, int> normal_move = {-2, -2};

class Figure
{
 private: 
   int coord_x;
   int coord_y;  

 public:
  Figure() : coord_x(0),  coord_y(0) {}
  Figure (int coord_x, int coord_y) : coord_x(coord_x),  coord_y(coord_y) {}
  pair <int, int> get_coordinates()const { return {coord_x, coord_y}; }
  virtual bool is_empty()const = 0;
  virtual pair <int, int> can_move(int pos_x, int pos_y, GameBoard * game_board)const = 0;
  virtual void print()const = 0;
}

class Checker : public Figure
{
public:
 bool is_empty()const override {return false;}

 pair <int, int> can_move(int pos_x, int pos_y, GameBoard * game_board) const override
{
  if (!game_board->is_inside(pos_x,pos_y) || ... || game_board->figure_present(pos_x,pos_y) )
  {
     return cannot_move;
  }
  else if (могу и никого не бью)
  {
     return normal_move;
  }
  else
  {
     a) return {beat_x, beat_y};
     b) return beat_figure->get_coordinates();
  }
}

не могу 
могу
бью - координаты, что я бью

};

class EmptyCell: public Figure
{
public:
  bool is_empty() const override {return true;}
  pair <int, int> can_move(int pos_x, int pos_y, GameBoard * game_board) const override
  {
    return cannot_move;
  }
  EmptyCell() : Figure() {}
  void print()const override { cout <<" "; }
};

class GameBoard
{

public:
  
 bool is_inside (int pos_x, int pos_y) const
 {
   return pos_x >= 0 && ...;
 }

 bool figure_present(int pos_x, int pos_y) const
 {
    if (!is_inside(pos_x, pos_y))
    {
       throw ...;
    }
    a) return board[pos_x][pos_y] != nullptr;
    b) return !board[pos_x][pos_y]->is_empty();
 }

void move_figure(int start_x, int start_y, int where_x, int where_y)
{
  auto move_result = can_move(where_x, where_y, this);
  if (move_result  == cannot_move)
  {
    throw ...;
  }
  else if (move_result == normal_move) 
  {
     do_move_figure(start_x,start_y,where_x,where_y);
  }
  else 
  {
     do_move_figure(start_x,start_y,where_x,where_y);
     delete board[move_result.first][move_result.second];
     a) board[move_result.first][move_result.second] = nullptr;
     b) board[move_result.first][move_result.second] = new EmptyCell();
  }
}

private:
 Figure*** board; 
 void do_move_figure(int start_x, int start_y, int where_x, int where_y)
 {
   board[start_x][start_y] -> move (where_x, where_y);
   swap(board[start_x][start_y], board[where_x][where_y]);
 }




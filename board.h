#include<bits/stdc++.h>
#include"snake.cpp"
#include"food.cpp"
using namespace std;

class board{
private:
    int height;
    int width;

    int score;
public:
    food f;
    snake s;
    bool pause;
    bool over;

    board();

    void draw();
    void reset();
    void eat_food();
    int getScore();
};

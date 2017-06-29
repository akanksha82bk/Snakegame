#include"food.h"

food::food(){
    int x=rand() % 19;
    int y=rand() % 19;
    pos.setNode(x, y, NULL);
    value=rand() % 10;
}
void food::set_pos(int x, int y){
    pos.setNode(x, y);
}

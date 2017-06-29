#include<bits/stdc++.h>
#include"board.cpp"
#include <conio.h>

using namespace std;

int main(){
    board b;
    while( true ){
        cout<<b.s.head<<" "<<b.s.head->next<<"  "<<b.s.tail<<"    "<<b.s.tail->next<<endl;
        b.s.make_move();
        b.eat_food();
        //cout<<b.s.tail->next;

        b.draw();
        cout<<" Move "<<exit<<endl;
        cout<<" Score "<<b.getScore()<<endl;
        if(b.over) break;
        if(kbhit()){
                b.s.direction=getch();
        }
        if(b.s.direction=='e') break;
        _sleep(100);
    }
}

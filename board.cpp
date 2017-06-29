#include"board.h"

board::board(){
    height=20;
    width=20;
    pause=false;
    over=false;
    score=0;
}

void board::draw(){
    if(over || pause) return;
    system("cls");
    for(int i=0;i<=height;i++){
        for(int j=0;j<=width;j++){
            if(i==0 || i==height) cout<<"#";
            else if(j==0 || j==width) cout<<"#";
            else if( s.have_node(i,j, s.head ) ) cout<<"s";
            else if( f.pos.check_node(i, j) ) cout<<"f";
            else cout<<" ";
        }
        cout<<endl;
    }
}
void board::eat_food(){
    if(s.have_node(s.head->getX(), s.head->getY(), s.head->next )){
        std::cout<<"Game Over!!!"<<std::endl;
        over=true;
    }
    if(s.head->getX()== f.pos.getX() && s.head->getY()== f.pos.getY() ){
        //std::cout<<" started eating "<<std::endl;
        score+=f.value;
        node* n=new node;
        n->setNode(f.pos);
        n->next=NULL;
        //cout<<n->getX()<<" "<<n->getY()<<" "<<n->getNext()<<endl;
        //cout<<s.tail->next<<endl;
        s.tail->next=n;
        f= *(new food());
        s.tail=n;
        s.tail->next=NULL;
        s.length++;
        //cout<<s.head<<" "<<s.head->next<<"  "<<s.tail<<"    "<<s.tail->next<<endl;

        //std::cout<<"eating"<<std::endl;

    }

}
int board::getScore(){
    return score;
}

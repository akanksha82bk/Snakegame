#include"node.h"

node::node(){
    x=0;
    y=0;
    next=NULL;
}
//node::~node(){
    //std::cout<<"destroying"<<std::endl;
//}
int node::getX(){
    return x;
}
int node::getY(){
    return y;
}
node* node::getNext(){
    return next;
}
bool node::check_node(int a, int b){
    //std::cout<<"checking node "<<a<<b;
    if(x==a && y==b)return true;
    return false;
}
void node::setNode(int a=0, int b=0, node* h=NULL){
    if(a<1) x=19 ;
    else if(a>19) x=1;
    else x=a;
    if(b<1) y=19;
    else if(b>19) y=1;
    else y=b;
    if(h!=NULL)next=h;
}
void node::setNode(node n){
    x=n.x;
    y=n.y;
    //next=n.next;
}

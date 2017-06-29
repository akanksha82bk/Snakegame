#include"snake.h"

snake::snake(){
    //std::cout<<"initialising snake"<<std::endl;
    head=new node();
    head->setNode(5 ,5);
    tail=head;
    length=1;
    direction='a';
}
void snake::reset(){
    head=new node();
    head->setNode(5 ,5);
    tail=head;
    length=1;
    direction='a';
}
bool snake::have_node(int x, int y, node* ptr){
    if(ptr==NULL)return false;
    else{
        while(ptr!=NULL){
            if( ptr->check_node(x,y) ){
               //     std::cout<<"have node "<<x<<y<<std::endl;
                return true;
            }
            ptr=ptr->getNext();
        }
    }
    return false;
}
void snake::make_move(){
    //std::cout<<"making move"<<std::endl;
    node current_node=*head;
    node temp_node;
    node* ptr=head;
    while(ptr->getNext()!=NULL){
        //    std::cout<<" iterating "<<ptr->next<<std::endl;
        temp_node = *( ptr->getNext() );
        ptr->getNext()->setNode( current_node );
        current_node = temp_node ;
        ptr=ptr->getNext();
    }

    if(direction=='w')
    {
        head->setNode(head->getX()-1, head->getY(), head->getNext() );
    }
    else if(direction=='s')
    {
        head->setNode(head->getX()+1, head->getY(), head->getNext() );
    }
    else if(direction=='a')
    {
        head->setNode(head->getX(), head->getY()-1, head->getNext() );
    }
    else if(direction=='d')
    {
        head->setNode(head->getX(), head->getY()+1, head->getNext() );
     }

}

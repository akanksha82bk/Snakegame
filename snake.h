#include"node.cpp"
class snake{
public:
    node* head;
    node* tail;
    int length;
    char direction;

public:
    snake();
    void reset();
    bool have_node(int ,int ,node* );
    void make_move( );

};

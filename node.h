
class node{
public:
    int x;
    int y;
    node* next;
public:
    node();
    //~node();
    int getX();
    int getY();
    node* getNext();
    bool check_node(int ,int );
    void setNode(int , int , node*);
    void setNode(node );
};

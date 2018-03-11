#ifndef _MST_EDGE_H_
#define _MST_EDGE_H_
#include <cstdlib>
#include <vector>
#include <cstring>
#include <unordered_map>
#include <Linked_List.h>

class MST_Edge{
    LinkedListNode* edge_a;
    LinkedListNode* edge_b;
    int weight;

    public : 
        MST_Edge() : edge_a(NULL), edge_b(NULL), weight(0){};
        MST_Edge(const int weight_val) : edge_a(NULL), edge_b(NULL), weight(weight_val){};
        MST_Edge(LinkedListNode* const a_node, LinkedListNode* const b_node, const int weight_val) : edge_a(a_node), edge_b(b_node), weight(weight_val){};
        ~MST_Edge(){std::cout<<"It is MST_Edge destructor."<<std::endl;edge_a = NULL;edge_b = NULL;weight = 0;};

        inline void            SetEdgeA(LinkedListNode* const a_node){edge_a = a_node;};
        inline void            SetEdgeB(LinkedListNode* const b_node){edge_b = b_node;};
        inline void            SetWeight(const int weight_val){weight = weight_val;};
        inline LinkedListNode* RetEdgeA(){return edge_a;};
        inline LinkedListNode* RetEdgeB(){return edge_b;};
        inline int             RetWeight(){return weight;};
};

#endif

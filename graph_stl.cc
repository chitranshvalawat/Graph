#include <iostream>
//#include <map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*


struct edge{
	int edge_id;
	int target;
}

typedef pair <int, int> edge;
// first element will store the edge_id and second will store the adjecant vertex.
typedef list <edge> egde_list;

typedef pair <int, egde_list> vertex;
// first element will store the vertex_id and second will store the edge list.
typedef list <vertex_list> adjancancy_list;

*/

typedef uint32_t edge_t;
typedef uint32_t vertex_t;

typedef struct Node{
	vertex_t v;   // for V will be source for first node and destination for rest of node
	edge_t e;     // edge_id
}Node;


typedef list <Node> ListNode; 

struct Graph{

	int V;  	  // number of vertex 
	int E;        // number of edges
	ListNode *Adj;
};

struct Graph *adjListOfGraph(){
	int i, x ,y;
	ListNode *temp, *ptr;
	
	cout << "Before graph memory allocation " << endl;
	struct Graph *g = (struct Graph *)malloc(sizeof(struct Graph));
	
	cout << "enter number of verteces and number of edges" << endl;
	scanf("%d %d", &(g->V), &(g->E));
	
	
	g->Adj = (ListNode *)malloc(g->V * sizeof(ListNode));
	
	for (i = 0 ; i < g->V ; i++){
		g->Adj[i].vertex_id = i;
		g->Adj[i].next = g->Adj+i;
	}
	
	for (i = 0 ; i < g->E ; i++){
		cout << "enter edge : source and destination node " << endl;
		scanf("%d %d",&x,&y);
		
		temp = (ListNode *)malloc(sizeof(ListNode));
		temp->vertex_id = y;
		temp->next = &g->Adj[x];
		ptr = &g->Adj[x];
		while(ptr->next != &g->Adj[x]){
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return(g);
}

void display_graph(struct Graph *g){
	int i;
	
	cout << "Graph :" << endl;
	cout << "Vertex : Edge List" << endl;
	
	for (i = 0; i < g->V; i++){
		ListNode *temp = &g->Adj[i];
		cout << "  "<< temp->vertex_id << "    :     ";
		while(1)
		{
			temp = temp->next;
			cout << temp->vertex_id;
			if (temp->next == &g->Adj[i]) break;
			cout  << " -> ";
		}
		cout << endl;
		
	}
}
int main(){
	struct Graph *g = adjListOfGraph();
	display_graph(g);
	return 0;
}
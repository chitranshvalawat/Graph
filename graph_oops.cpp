// list.cpp by Bill Weinman <http://bw.org/>
// updated 2018-09-12 for CppSTL
#include <iostream>
#include <list>
using namespace std;

template<class T>
class Graph{
private:
	typedef struct ListNode{
		int vertex_id;
		ListNode *next;
	}ListNode;

	struct Graph{
	
		int V;
		int E;
		ListNode *Adj;
	};
	
	struct Graph *G;
	
public:
	Graph(int v, int e){
		G = new Graph;
		G->V = v;
		G->E = e;
		G->Adj = new ListNode[v];
	}
	
	~Graph(){
		delete [] G->Adj;
		delete G;
	}
	
	void add_vertex(int v){
		
	}
	
	
	
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
}

// print a simple message
void message(const char * s) { cout << s << endl; }
void message(const char * s, const int n) { cout << s << ": " << n << endl; }

int main() {

	typedef list<int> list1;
	typedef pair<int, list1> pairl;

    adjacency_list<pairl> l1;
	list1 l1.push_


	l1.push_back(make_pair(1,1));
	l1.push_front(make_pair(0,0));
    printl(l1);

    return 0;
}

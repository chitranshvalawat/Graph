

list <int> VertexList;  // It will store the vertex-id
list <int> EdgeList; // It will store the edge-id

map <int, list<int>> graph; // key repesent vertex and list represent edgelist


typedef list 

list <pair <int, list <pair <int, int>>>>>



list <pair <int, int>> EdgeList;



struct vertex{
	int node_id;
	edge *next;
}vertex;

struct edge{
	int node_id;
	vertex *next;
};

class graph{
	
}



//functions which needs to be implemented
add_vertex()
remove_vertex()
vertex()
add_edge()
remove_edge()
edge()
clear_vertex()
remove_vertex()


//iterators
edge_interator
vertex_interator
adjacency_interator

//descriptors
vertex_descriptor
edge_descriptor

typedef std::size_t vertices_size_type;
typedef typename detail::is_random_access<VertexListS>::type is_rand_access;
typedef void* vertex_ptr;
typedef typename mpl::if_<is_rand_access, vertices_size_type, vertex_ptr>::type vertex_descriptor;
typedef detail::edge_desc_impl<directed_category, vertex_descriptor>   edge_descriptor;


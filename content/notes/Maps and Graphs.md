#DataStructures
<h1 style="text-align:center;">Maps and Graphs</h1>

## Maps
### About Maps
- Similar to a [[Sets|Set]]
- A Map is a Pair of (Key and Value)
- Key is the ordering element
### Side-Note: Multi-Sets
- Similar to a set, but doesn't require keys to be unique
### Multi-Maps
- Similar to a Multi-Set, allows duplicate values per key
## Graphs
### About Graphs
- A set of **points** connected by **lines**
- The ADT is **nodes/vertices** connected by **edges**
- A Tree is a type of graph but, a graph is not always a tree
- A tree is a subset of a graph
### Abstract View
- Trees impose a hierarchical view of data while trees have no such hierarchy 
	- Note: The Obsidian Graph View is a literal graph, which is not necessarily a tree
### Terminology
- Directedness
	- Undirected: Edges go in both directions
	- Directed: Edges go in one direction
		- Note: While able to be backtracked through graphical view or by alt + ←, Obsidian's Graph is a directed graph
- Connectedness
	- Connected: Every node is reachable by every other node
	- Disconnected: Not every node is reachable by every other node
- Completeness
	- Every node is directly connected to every other node
	- If implemented in a networking setup, it would be very fast, but very expensive
- Other terms
	- Weighted
		- Each edge is given a weight, which can represent any number of things
			- Ex. if in a networking setup, could be length of a network cable
	- Path
		- Directions leading from any node to any other node
			- Ex. one path could be going straight from A to B, while another path is going from A to C to D to B
			- Normally the shortest path is preferred
	- Cycle
		- Paths that loop
			- Be wary of these as they can lead to infinite loops
	- Adjacent
		- Direct connection between two nodes
			- In other words, if there is a path length of 1 between two nodes, then the **pointed** node is adjacent to the **pointing** node
				- Ex. If A points to B directly, then B is adjacent to A
			- Ordering is <u><b>very important</b></u>
	- Adjacency Matrices
		- A map is used to associate keys to indices
		- If X axis is adjacent to Y axis, then a 1 is written, otherwise a zero is written
		- This data is entered in a table
		- Labeled by (col, row) 
		- Adjacency Lists are then created from this data
			- ex. if both B and F are adjacent to A, list is A:luc_arrow_right:B:luc_arrow_right:F
		- Breadcrumb: Recording of previously visited nodes
		- Use a stack to record possible moves (move stack), then pop them from stack and add to a list storing breadcrumbs
		- When something is moved into breadcrumb list, then adjacencies from that node are pushed to the move stack
		- If the move stack is ever empty, then that indicates that the node that there is no path from one selected node to the other
		- Note: Adjacency is not finding the shortest path, but only verifying that the path is possible
### Dijkstra's Shortest Path Algorithm
- See [[Lecture 8 - Graphs 1.ppt|presentation]]
- Can be used to traverse a graph
### Other forms of graph traversal
- See [[ConnectedPath.xlsx|table]]

[[Hash Tables]]

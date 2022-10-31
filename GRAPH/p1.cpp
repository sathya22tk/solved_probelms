//implementation of graph
#include<bits/stdc++.h>
using namespace std;

class graph{
private:
	int numvertices;
	bool** adjmatrix;

public:
	graph(int numvertices){
		this -> numvertices = numvertices;

		adjmatrix = new bool*[numvertices];

		for(int i = 0;i < numvertices;i++){
			adjmatrix[i] = new bool[numvertices];
			for(int j = 0;j < numvertices;j++)
				adjmatrix[i][j] = 0;
		}
	}

	void addedge(int i,int j){
		adjmatrix[i][j] = 1;
		adjmatrix[j][i] = 1;
	}

	void removeedge(int i,int j){
		adjmatrix[i][j] = 0;
		adjmatrix[j][i] = 0;
	}

	void showgraph(graph g){
		cout<<"\n";
		for(int i = 0;i < g.numvertices;i++){
			for(int j = 0; j < g.numvertices;j++){
				cout<<adjmatrix[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
};



int main(){

	graph g(4);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(0,3);
	g.addedge(1,2);

	g.showgraph(g);

    
}
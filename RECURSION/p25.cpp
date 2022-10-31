//coloring graph

#include<bits/stdc++.h>
using namespace std;

bool issafe(int node,int *color,int m,int n,bool graph[101][101],int col){

	for(int i = 0;i < n;i++){
		if(i != node && graph[i][node] == 1 && color[i] == col)
			return 0;
	}
	return 1;

}


bool solve(int node,int* color,int m,int n,bool graph[101][101]){

	if(node == n)
		return 1;

	for(int i = 1;i <=m;i++){
		if(issafe(node,color,m,n,graph,i)){
			color[node] = i;

			if(solve(node+1,color,m,n,graph))
				return 1;

			color[node] = 0;	 
		}

	}



}



bool graphcoloring(bool graph[101][101],int m,int n){
	int color[n] = {0};
	if(solve(0,color,m,n,graph))
		return 1;

	return 0;
}


int main(){
	int n = 4;//nodes
	int m = 3;//colors

	bool graph[101][101];

	memset(graph,false,sizeof graph);

	//edges (0,1),(1,2),(2,3),(3,0),(0,2)

	graph[0][1] = 1; graph[1][0] = 1;
	graph[1][2] = 1; graph[2][1] = 1;
	graph[2][3] = 1; graph[3][2] = 1;
	graph[3][0] = 1; graph[0][3] = 1;
	graph[0][2] = 1; graph[2][0] = 1;

	cout << graphcoloring(graph,m,n);
}
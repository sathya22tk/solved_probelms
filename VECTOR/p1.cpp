//
#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& ans){

    for(vector<int> v1d : ans){
        for (int it : v1d)
            cout<<" "<<it;
        cout<<"\n";
    }
}

int main(){

	vector<int> v;
	//=> since internally singly linked list is maintained
	v.push_back(1);
	v.emplace_back(2);
	//=>emplceback is faster than pushback.
	//  and technically it dynamically increases the 
	//  size of vector ,before inserting
	//=>vector is a container

	vector<pair <int,int>> vec;
	vec.push_back({1,2});
	vec.emplace_back(1,2);

	vector<int> v1(5);
	//=>means size of vector is 5
	//  has {0,0,0,0,0} 5 instances of zero
	//  or garbage value depend upon compiler
	//=>even its size is predefined,still we can increase
	//  the size of vector becoz it is dynamic

	vector<int> v2(5,100);
	//=>means size of vector is 5
	//  has {100,100,100,100,100} 5 instances of 100
	
	vector<int> v3(v2);
	//=>vectors dynamically adjust their size
	//  here v2 is copied to v3


//-------------------ITERATORS---------------------------

	//=>delaration of iterator to vector
	vector<int>::iterator it = v2.begin();
	//=>begin() returns the address of 0th index of v2 to it
	//  so it has address of 0th index of vector v2

	it++;
	//=> let it is incremented 1 time.means now it has
	//   address of 1st index of the vector v2

	cout<<*(it)<<endl;
	//=> Here it is dereferenced.basically dereferencing
	//   means accessing the value that address holds.

	it = it + 2;
	cout<<*(it)<<endl;

	vector<int>::iterator itt = v2.end();
	//=> end() returns the address of a place 
	//   which is next to the actual end;
//-------------------DISPLAYING A VECTOR------------------
	cout<<v2[0]<<" "<<v2.at(0);
	cout<<v2.back();
	//.back() diplays the last element of v2

//------------------TRAVERSING THROUGH VECTOR-------------

	for(vector<int>::iterator ite = v2.begin();ite != v2.end();ite++)
		cout<< *(ite)<<" ";

	for(auto ite = v2.begin();ite != v2.end();ite++)
		cout << *(ite)<<" ";

	//=> auto is a keyword,it assign a datatype automatically
	//   by reading the input

	for(auto it : v2)
		cout << it <<" ";

	//=> it : v ...means it on v,where it is int automatically
	//   assigned by auto;
//---------------------ERASE OPERATIONS-------------------

	//before {10,20,30,40,50};
	v2.erase(v2.begin()+1);
	//after {10,30,40,50}
	//=> parameter for erase function is address of the
	//   location so v2.begin() return address of 0th index

	//=> for deleting more than 1 element,
	//   2 paramenters are required for v.erase(start,end)
	//before{10,20,30,40,50,60,70}
	//task to erase 40 to 60
	v2.erase(v2.begin() + 3,v2.begin() + 6);
	//after {10,20,30,70}

//-----------------------INSERT FUNCTION-------------------
	//inserrt function is very costly

	vector<int> v(2,100); //{100,100}
	//insert single element
	  v.insert(v.begin(),300); // {300,100,100}
	//inserting multiple elements
	  v.insert(v.begin()+1,2,66);//{300,66,66,100,100}
	  // 1st parameter - address
	  // 2nd parameter - number of occurence
	  // 3rd parameter - what is the occurence
	//inserting elements from different vector to given vector
	  vector<int>copy(2,50)//{50,50}
	  v.insert(v.begin(),copy.begin(),copy().end());
	  //{50,50,300,66,66,100,100}

//-----------------------OTHER OPERATIONS------------------
	//{10,20}
	  cout <<v.size() // 2
	//{10,20}
	  v.pop_back() //{10}
	
	//v1 -> {10,20}
	//v2 -. {30,40}
	v1.swap(v2)// v1 -> {30,40} & v2 -> {10,20}

	v.clear() //delete entire vector

	cout << v.empty()// if v is empty return 1
	                 //if v is not empty return 0


	//initializing 2d vector
	/* int n = 5;
    int m[5] = {2,3,4,5,1};

    vector<vector<int>> v;
    vector<int> temp;

    for(int i = 0;i < n;i++){
        temp.clear();
        for(int j = 0;j < m[i];j++){
            temp.emplace_back(i*j);
        }
        v.emplace_back(temp);
    } 

    display(v);

    vector<vector<int>> v1(n,vector<int>(m,0));
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				v1[i][i] = j*i;
			}
		}
	display(v1);

    */




}

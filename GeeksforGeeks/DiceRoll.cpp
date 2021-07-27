#include<iostream>
#include<vector>
using namespace std;

//DICE ROLL PROBLEM
// Find out all the possible outcome if n dices a thrown simultaniously

//Function prototypes
void computeOutcome(int);
void indent(int);
void outcomes(int dice,vector<int> &v,int sum,int sumSoFar);
void print(vector<int> v);
void printV(vector<int> v);
int main(){
	int numOfDices;
	cin>>numOfDices;
	computeOutcome(numOfDices);
	return 0;
}

void computeOutcome(int n){
	vector<int> choices;
	outcomes(n,choices,13,0);
}

void printV(vector<int> v){
	for(int i=0;i<v.size();i++)
		cout<<v.at(i)<<" ";
}

void outcomes(int dices,vector<int> &choices,int sum,int sumSoFar){
	//indent(choices.size());
//	cout<<"Func: outcomes( Dice: "<<dices<<" , Choices: {";
//	printV(choices);
	//cout<<"} )"<<endl;
	if(dices==0){
     //No die left to roll then print all the choices and exit
	 print(choices);	
	}else{
		//If atleast one die left to roll
		
		/**
		Back tracking's key concept
		Choose
		Explore
		Un-choose
		*/
		//Choose a outcome of die
		//Explore outcomes of other dices
		//Un-choose the your outcome
		for(int i=1;i<=6;i++){
			
			if(!(sumSoFar+i+1*(dices-1)>sum||sumSoFar+i+6*(dices-1)<sum)){
			choices.push_back(i);//Choosen one outcome
			outcomes(dices-1,choices,sum,sumSoFar+i);//Explored possiblities 
			choices.pop_back();//Un-choose the outcome
		}
		
		
	}
  }
  
  }
	
	void print(vector<int> v){
		cout << "Result: { ";  
	
	    for (int i=0;i<v.size();i++) 
	         cout <<v.at(i) << " ";
		cout<<"}"<<endl;	 
	}	
    
	void indent(int n){
		for(int i=0;i<n;i++)
			cout<<"   ";
	}	





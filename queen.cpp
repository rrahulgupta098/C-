#include<iostream>
using namespace std;

int N=4
int BOARD [10][10]={0};

bool is_safe(int row,int col){
	//vertical
	for(int i=row;i>=0;i--){
		if(BORAD[j][col]==1){
			return false;
		}
	}
	
	//left_daigonal
	for(int i=row,j=col;i>=0 && j>=0;i--,j--){
			if(BORAD[j][col]==1){
			return false;
		}
	}
	
	//right digonal
	for(int i=row,j=col;i>=0 && j<n;i--,j++){
			if(BORAD[j][col]==1){
			return false;
		}
	}
	return true;
	
}

nQueen(int row){
	for(int col=0;col<N;col++){
		if(is_safe(row,col)){
			BOARD[row][col]=1;
		}
		bool res=nQueen(row+1)
		if(res==ture) return true;
		BOARD[row][col]=0;
	}
	return false;
}

int main()
{

nQueen(0);

    return 0;
}

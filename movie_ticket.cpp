#include <iostream>
#include <iomanip>
using namespace std;
const int Row=5;
const int Col=10;
 
 display(bool seats[Row][Col]){
 	system("cls");
 	cout<<"  ";
 	for(int i=1; i<=Col; i++){
 	cout<<setw(3)<<i;
	 }
	 cout<<endl;
	for(int i=0; i<Row; i++){
	cout<<static_cast<char>('A'+i)<<" ";
	for(int j=0; j<Col;j++){
	if(seats[i][j]){
		cout<<setw(3)<<"X";
	}
	else{
		cout<<setw(3)<<"-";
	}
	}
	cout<<endl;
	}
 }

reservation(bool seats[Row][Col], char row, int col){
	if(seats[row-'A'][col-1]){
		cout<<"Seat is already reserved"<<endl;
	}
	else{
		seats[row-'A'][col-1]=true;
		cout<<"You have reserved seat successfuly"<<endl;
	}
}
int main(){
bool seats[Row][Col]={false};
char row;
int col;
	display(seats);
while(true){
	cout<<"Enter Row (A-E): " ; cin>>row;
	cout<<"Enter Column (1-10): "; cin>>col;
	if(row<'A'|| row>'E' && col<1||col>10){
		cout<<"Enter valid Row or Column"<<endl;
		continue;
	}
	reservation(seats,row,col);
	display(seats);
		
		char choice;
	cout<<"Do you want to book more seats (Y/N)"; cin>>choice;
		if(choice!='Y' && choice!='y'){
			break;
		}
	}//while
}//main

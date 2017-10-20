//Author: Madison Phillips
#include <iostream>
#include <vector>


using namespace std;


int main() {

vector <vector<char> > star;

int userrow;
int usercol;

cout << "Enter rows and columns of stars:" << endl;
cin >> userrow;
cin >> usercol;

if (userrow <= 0){

}
else if (usercol <=0){
}

else{
star.resize(userrow);


for (int row = 0; row < star.size(); row++){
    star[row].resize(usercol);   


    for (int col = 0; col < star[row].size(); col++){
    cout << "*";
    
    
    }
    cout << endl;

}
}

return 0;


}

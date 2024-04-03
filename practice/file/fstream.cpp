#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ofstream fout("file.txt");
//	if(!out){
//		cerr<<"not open";
//		return 1;
//	}
//	int num;
//	cin>>num;
//	out<<num;
//	out.close();
	string line;
    while (fout) {
 
        // Read a Line from standard input
        getline(cin, line);
 
        // Press -1 to exit
        if (line == "-1")
            break;
 
        // Write line in file
        fout << line << endl;
    }
	ifstream in("file.txt");
//	string line;
	while(getline(in,line)){
		cout<<line;
	}
}

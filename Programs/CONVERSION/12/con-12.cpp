//Enter the Matrix of rows and columns entered by the user and print in matrix format

#include <SparseMatrix>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    SparseMatrix m(0,0,0);
    ifstream fin;
    fin.open ("sparse2.txt");
    if (!fin){
        cout << "Failed to open the file: " << "sparse2.txt" << "." << endl;
    }
    else {
        fin >> m;
        cout << "ORIGINAL SPARCE MATRIX" << endl << m ;
    }
    fin.close();
    return 0;
}

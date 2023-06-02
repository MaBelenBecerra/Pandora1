#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board);
void tamaño_vector(vector<vector<char>> board);
void rango_based(vector<vector<char>> board);

int main() {
    char white = '0';
    char schwarz = '1';
    char rot = 'x';
    char green = 'G';

    vector<vector<char>> board = {
        {rot, white, white, white, schwarz, schwarz, schwarz, schwarz},
        {white, white, white, white, white, schwarz, schwarz, schwarz},
        {schwarz, schwarz, white, schwarz, schwarz, white, white, white},
        {schwarz, white, white, white, white, white, white, green}
    };

    printBoard(board);
    tamaño_vector(board);
    rango_based(board);

    return 0;
}

void printBoard(vector<vector<char>> board) {
    for (int show_fila = 0; show_fila < board.size(); ++show_fila) {
        for (int show_columna = 0; show_columna < board[show_fila].size(); ++show_columna) {
            cout << board[show_fila][show_columna] << " ";
        }
        cout << endl;
    }
}

void tamaño_vector(vector<vector<char>> board) {
    int input_fila = 0;
    cout << "Ingrese la fila que desea saber su tamaño: ";
    cin >> input_fila;

    if (input_fila >= 0 && input_fila < board.size()) {
        int tamaño = board[input_fila].size();
        cout << "El tamaño es " << tamaño << endl;
    } else {
        cout << "Fila inválida." << endl;
    }
}

void rango_based(vector<vector<char>> board) {
    for (vector<char> fila : board) {
        for (char columna : fila) {
            cout << columna << " ";
        }
        cout << endl;
    }
}

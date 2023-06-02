#include <iostream>
#include <vector>
using namespace std;

void mostrar_matrix(const vector<int>& matrix_nichts);
void user_input(vector<int>& matrix_nichts);
void invertido(const vector<int>& matrix_nichts);
void orden_ascendente(vector<int>& matrix_nichts);

int main() {
    vector<int> matrix_nichts;
    user_input(matrix_nichts);
    mostrar_matrix(matrix_nichts);
    invertido(matrix_nichts);
    orden_ascendente(matrix_nichts);
    return 0;
}

void user_input(vector<int>& matrix_nichts) {
    for (int i = 0; i < 39; ++i) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        int valor;
        cin >> valor;
        matrix_nichts.push_back(valor);
    }
}

void mostrar_matrix(const vector<int>& matrix_nichts) {
    for (int fila : matrix_nichts) {
        cout << fila << " ";
    }
    cout << endl;
}

void invertido(const vector<int>& matrix_nichts) {
    for (int i = matrix_nichts.size() - 1; i >= 0; --i) {
        cout << matrix_nichts[i] << " ";
    }
    cout << endl;
}

void orden_ascendente(vector<int>& matrix_nichts) {
    for (int i = 0; i < matrix_nichts.size() - 1; ++i) {
        for (int p = 0; p < matrix_nichts.size() - 1 - i; ++p) {
            if (matrix_nichts[p] > matrix_nichts[p + 1]) {
                int save = matrix_nichts[p];
                matrix_nichts[p] = matrix_nichts[p + 1];
                matrix_nichts[p + 1] = save;
            }
        }
    }
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int col, lin;
    cout << "Coloque o Número de linhas do vetor : \n";
    cin >> lin;
    cout << "Coloque o Número de Colunas do Vetor: \n";
    cin >> col;
    double v[lin][col], linha, coluna;

    cout << "Coloque as Linhas e Depois as Colunas:" << endl;

    for (int i=0; i<lin;++i)
    {
        for (int j=0;j<col; ++j)
        {
            cout << "[" << i << "]" << " [" << j << "]"<< endl;
            cin >> v[i][j];
            cout << "\n";
        }
    }
    for (int i=0; i<lin;++i)
    {
        for (int j=0;j<col; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
        
        
    
    for  
    
    
    }
    return 0;
}

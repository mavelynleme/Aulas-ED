#include <iostream>
/* exercio nota aprovado e reprovado*/
using namespace std;
 
int main() {

    int nota;
    cout << "Digite sua nota: ";
    cin >> nota;
    
    string paridade = (nota >=6) ? " aprovado" : " reprovado";
    
    cout << "sua nota e " << nota << " voce esta" << paridade << endl;
    
    return 0;
}

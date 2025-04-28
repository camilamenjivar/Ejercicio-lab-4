#include <iostream>

using namespace std;

int main() {
  string usuario;
  cout << "Escribe Malo, Animal o Persona";
  cin >> usuario;

  if (usuario == "Malo")
    // Si es malo mostrar el siguiente mensaje
    cout << "Estas dentro de su lista de presas" << endl;
  else if (usuario == "Animal")
    // Si es animal mostrar el siguiente mensaje
    cout << "Kraven te protegerá" << endl;
  else if (usuario == "Persona")
    // Si es animal mostrar el siguiente mensaje
    cout << "Kraven te saluda" << endl;

  return 0;
}

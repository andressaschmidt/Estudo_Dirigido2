
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string palindromo (string palavra)
{
  string palavra_inversa = palavra;

  reverse (palavra_inversa.begin (), palavra_inversa.end ());

        cout << palavra_inversa;

  if (palavra == palavra_inversa)
    {
      cout << palavra_inversa;
      return "verdadeiro";

    }

  else
    {
      cout << "falso";
    }
}

int
main ()
{
  string palavra, palavra_inversa;

  cout << "Digite uma palavra para saber se ela C) um palindromo: " << endl;
  cin >> palavra;
  cout << palindromo (palavra);

  return 0;

}

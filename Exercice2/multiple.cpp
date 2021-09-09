/*
But: ce programme permet de v�rifier si un chiffre entr� par l'utilisateur est un multiple de deux, de trois ou les deux.
Auteur: Karim Dion Khelalfa
Date: 2021-09-08
*/

//cette ligne me permet d'utiliser les commandes d'input et de output du CMD.
#include <iostream>
//cette ligne me permet d'utiliser les commandes d'input et d'output sans que j'ai � �crire std:: devant.
using namespace std;

//main est la fonction principale du programme, la premi�re chose qui se lance au lancement.
void main()
{
   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils s'affichent normalement.
   setlocale(LC_ALL, "");

   //ici je d�clare ma variable qui est comme un contenant dans lequel je peux mettre le nombre.
   int nb1;

   //Je demande ici � l'utilisateur d'entrer un nombre et je lui explique pourquoi il le fait.
   cout << "veuillez entrer un nombre et ce programme v�rifiera si c'est un multiple de deux, de trois, des deux ou d'aucun des deux: ";
   // cette commande permets � l'utilisateur d'entrer un nombre et d'enregistrer le nombre dans ma variable.
   cin >> nb1;

   // je regarde si le chiffre qu'on m'a donn� est un multiple de 2 et de trois.
   if (nb1 % 2 == 0 && nb1 % 3 == 0)
   {
      cout << "le chiffre " << nb1 << " est un multiple de deux et de trois \n";
   }
   // si ce n'est pas le cas, je v�rifie si c'est seulement un multiple de deux.
   else if (nb1 % 2 == 0)
   {
      cout << "le chiffre " << nb1 << " est un multiple de deux \n";

   }
   // si ce n'est pas le cas non plus, je v�rifie si c'est seulement un multiple de trois.
   else if (nb1 % 3 == 0)
   {
      cout << "le chiffre " << nb1 << " est un multiple de trois \n";
   }
   // si le nombre arrive jusqu'ici, cela veut dire que c'est un multiple de rien.
   else
   {
      cout << nb1 << " n'est ni un multiple de deux ou de trois \n";
   }
   //cette ligne de code me permet de mettre le syst�me en pause pour pas que le CMD ferme � la fin du programme tout seul.
   system("pause");
}


/*
plan de tests
nb1   r�sultats
11    11 n'est ni un multiple de deux ou de trois
8     le chiffre 8 est un multiple de deux
12    le chiffre 12 est un multiple de deux et de trois
9     le chiffre 9 est un multiple de trois
*/
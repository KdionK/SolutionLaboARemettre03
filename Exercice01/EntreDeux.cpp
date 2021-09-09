/*
But: Determiner si, lorsque nous entrons trois chiffres, si le troisième chiffre est entre le premier et le deuxième
Auteur: Karim Dion Khelalfa
Date: 2021-09-08
*/

//cette ligne me permet d'utiliser les commandes d'input et de output du CMD.
#include <iostream>
//cette ligne me permet d'utiliser les commandes d'input et d'output sans que j'ai à écrire std:: devant.
using namespace std;

//main est la fonction principale du programme, la première chose qui se lance au lancement.
void main()
{
   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils sàffichent normalement
   setlocale(LC_ALL, "");

   //ici je déclare mes variables qui sont comme des contenants dans lesquels je peux mettre mes nombres.
   int nb1;
   int nb2;
   int nb3;

   //Je demande ici à l'utilisateur d'entrer trois chiffres et je lui explique pourquoi il le fait.
   cout << "veuillez entrer trois nombres, nous allons verifier si le troisième est entre les deux premiers ! \n";
   
   //Ensuite je luis fait tapper trois nombres differents.
   cout << "entrez le premier nombre: ";
   cin >> nb1;
   cout << "entrez le deuxième nombre: ";
   cin >> nb2;
   cout << "entrez le troisème nombre: ";
   cin >> nb3;

   //Ensuite je vérifie avec un if statement si nb3 est entre nb1 et nb2
   if (nb1 < nb3 && nb2 > nb3)
   {
      cout << "le nombre " << nb3 << " est bel et bien entre " << nb1 << " et " << nb2 << "\n";
   }
   // si il ne l'est pas je verifie si il est entre nb2 et nb1
   else if (nb2 < nb3 && nb1 > nb3)
   {
      cout << "le nombre " << nb3 << " est bel et bien entre " << nb2 << " et " << nb1 << "\n";
   }
   // puis finalement si aucun des deux n'a fonctionnés cela veux dire qu'il n'est pas entre nb1 et nb2 ou entre nb2 et nb1
   else
   {
      cout << "le nombre " << nb3 << " n'est pas entre " << nb1 << " et " << nb2 << "\n";
   }
   //cette ligne de code me permets de mettre le système en pause pour pas que le CMD ferme à la fin du programme tout seul
   system("pause");

}
/*plan de test
nb1   nb2   nb3   résultat
10    15    12    le nombre 12 est bel et bien entre 10 et 15 
15    10    12    le nombre 12 est bel et bien entre 10 et 15
-20   -45   -30   le nombre -30 est bel et bien entre -45 et -30
1     2     3     le nombre 3 n'est pas entre 1 et 2
*/
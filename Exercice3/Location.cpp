/*
But: un programme qui calcule le prix d'une location bas�e sur la distance parcourue et le temps du voyage
Auteur: Karim Dion Khelalfa
Date:2021-09-08
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

   //ici je d�clare mes variables qui sont comme des contenants dans lesquel je peux mettre les nombres.
   //Le nombre de jours que la location a dur�e.
   double nbjour = 0;

   //Le nombre de Kilom�tres parcourus.
   double nbkm = 0;

   // le nombres de kilom�tres parcourues apr�s le nombre de kilom�tres gratuits permis.
   double kilometres250 = 0;

   //le prix pour la location qui est de 45 $ par jours.
   double prixPourJours = 0;

   //le total de litre d'essence consum�.
   double consommationLitre = 0;

   //combien l'essence co�te au total apr�s la fin de la location
   double prixTotalEssence= 0;

   //combien la location coute par jour
   double coutLocation = 45;

   //combien de litre d'essence est utilis� par 100 kilom�tres
   double litreParCent = 7.6;

   // le prix de l'essence par litres
   double prixEssence = 1.35;

   //le prix par kilom�tres apr�s les 250 kilom�tres par jours de gratuits.
   double kmSup = 0.05;

   //Je demande ici � l'utilisateur d'entrer un nombre et je lui explique pourquoi il le fait.
   cout << "Veuillez entrer le nombre de jour et de kilom�tre parcouru. Ce programme calculera ensuite le prix de la location. \n";

   //La commande cout me permets d'afficher un message a l'utilisateur
   // La commande cin permets � l'utilisateur d'entrer un nombre et d'enregistrer le nombre dans ma variable.
   cout << "entrer le nombre de jour que votre location a dur�: \n";
   cin >> nbjour;

   //La commande cout me permets d'afficher un message a l'utilisateur
   // La commande cin permets � l'utilisateur d'entrer un nombre et d'enregistrer le nombre dans ma variable.
   cout << "entrer le nombre de kilom�tres parcourues: \n";
   cin >> nbkm;
   //ici je v�rifie si le nombre de jour et de kilom�tres est r�ealistique, donc au dessus de zero.
   if (nbjour < 0 || nbkm < 0)
   {
      cout << "erreur, cela est impossible, veuillez r�-�ssayer.";
   }
   //si les chiffres sont au-dessus de zero, le programme s'ex�cute.
   if (nbjour > 0 && nbkm > 0)
   {
      //Ici je v�rifie si le nombre de kilom�tres parcourus est plus grand que le nombre de kilom�tres gratuit permis
      if (nbkm > 250 * nbjour)
      {
         //Ensuite ici je v�rifie combien ils doivent s'ils ont d�pass�s le nombre de kilom�tres permis
         kilometres250 = (nbkm - (250 * nbjour)) * kmSup;
      }
      // cette �quation calcule combien d'argent la location co�te par jour aux locataires
      prixPourJours = coutLocation * nbjour;
      //celle-ci calcule combien de litres d'essences ils ont utilis�s au total.
      consommationLitre = litreParCent * (nbkm / 100);
      // Apr�s je regarde combien cette essence d�pens� � cout�
      prixTotalEssence = consommationLitre * prixEssence;
      // puis je montre les r�sultats, c'est � dire les prix, � l'utilisateur.
      cout << "le prix total de la location est de " << prixPourJours << " $ pour le cout hebdomadaire, plus " << prixTotalEssence << " $ pour l'essence, plus " << kilometres250 << " $ pour tous les kilom�tres au-dessus de votre 250 kilom�tres gratuit par jours, pour un total de " << prixPourJours + prixTotalEssence + kilometres250 << " $ \n";
      //cette ligne de code me permet de mettre le syst�me en pause pour pas que le CMD ferme � la fin du programme tout seul.
   }
   system("pause");


   //plan de tests.
  /*
  nbjour    nbkm  R�sulats
  5         2800  le prix total de la location est de 225 $ pour le cout hebdomadaire, plus 287.28 $ pour l'essence, plus 77.5 $ pour tous les kilom�tres au-dessus de votre 250 kilom�tres gratuit par jours, pour un total de 589.78 $
  10        250   le prix total de la location est de 450 $ pour le cout hebdomadaire, plus 25.65 $ pour l'essence, plus 0 $ pour tous les kilom�tres au-dessus de votre 250 kilom�tres gratuit par jours, pour un total de 475.65 $
  -20       -30   erreur, cela est impossible, veuillez r�-�ssayer.
  -10       2000  erreur, cela est impossible, veuillez r�-�ssayer.
  10        -2000 erreur, cela est impossible, veuillez r�-�ssayer.
  */
}
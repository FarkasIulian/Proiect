<!DOCTYPE html>
<html>
<body>

<h1>Se dă un tablou de N elemente ordonate. Să se determine minimul și maximul din tablou</h1>
<p> Pentru inceput am creat un vector de 1000 de elemente unice , alocat dinamic , pe care le-am generat 
aleator folosind functia time si rand. N-ul nu va fi citit de la tastatura ci hardcodat ca fiind 1000.
    Dupa creearea vectorului pe care vom lucra, acesta trebuie sortat pentru a putea lucra cu un tablou
cu elemente ordonate.</p>
<h2>Cautarea liniara</h2>
<p>Cautarea liniara este o metoda de cautare destul de ineficienta datorita numarului de comparatii necesare. Aceasta cautare
compara pe rand fiecare element al vectorului cu variabilele minim si maxim, astfel avand un vector sortat numarul de comparatii facute
va fi 1000, adica N, pentru a gasi maximul.</p>
<p>Avantajul cautarii liniare in general este atunci cand este utilizata pe un vector nesortat, astfel timpul executiei poate fi chiar
O(1), adica elementul cautat a fost gasit dupa prima comparatie. Dezavantajul este dat de evenimentul in care elementul cautat se afla la finalul vectorului sau acesta nu exista in vector, timpul de executie fiind O(N).</p>
<img src="Linear-Search.jpg">
</body>
</html>
 


      

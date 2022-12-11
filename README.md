<!DOCTYPE html>
<html>
<style>.center {
  display: block;
  margin:0 auto;
  width: 50%;
}
</style>
<body>
<h1>Se dă un tablou de N elemente ordonate. Să se determine minimul și maximul din tablou</h1>
<p> Pentru inceput am creat un vector de 1000 de elemente unice , alocat dinamic , pe care le-am generat 
aleator folosind functia time si rand. N-ul nu va fi citit de la tastatura ci hardcodat ca fiind 1000.
    Dupa creearea vectorului pe care vom lucra, acesta trebuie sortat pentru a putea lucra cu un tablou
cu elemente ordonate.</p>
<h2>Cautarea liniara</h2>
<p>Cautarea liniara este o metoda de cautare destul de ineficienta in cazul vectorilor de mari dimensiuni datorita numarului de comparatii necesare. Aceasta cautare compara pe rand fiecare element al vectorului cu variabilele minim si maxim, astfel avand un vector sortat numarul de comparatii facute va fi 1000, adica N, pentru a gasi maximul.</p>
<p>Avantajul cautarii liniare in general este atunci cand este utilizata pe un vector nesortat, astfel timpul executiei poate fi chiar
O(1), adica elementul cautat a fost gasit dupa prima comparatie.</p>
<p> Dezavantajul este dat de evenimentul in care elementul cautat se afla la finalul vectorului sau acesta nu exista in vector, timpul de executie fiind O(N).</p>
<!--<img src="Assets\Linear-Search.png" width="1000">-->
<div class="center">
<img src="Assets\Linear-Search.png">
</div>

<h3>Cautarea binara</h3>
<p>Cautarea binara este o metoda de cautare care se poate utiliza doar pe vectori sortati si algoritmul functioneaza prin impartirea repetata a vectorului in jumatati si returneaza pozitia la care s-a gasit elementul cautat. Cautarea functioneaza prin compararea elementului cautat cu mijlocul vectorului, iar apoi se injumatateste vectorul conform rezultatului comparatiei.</p>
<p>Avantajul cautarii binare este un numar redus de comparatii si un timp de executie mai scazut in cazul vectorilor de mari dimensiuni.
Cazul cel mai favorabil al cautarii binare este atunci cand elementul cautat este chiar in mijlocul vectorului reprezentand un timp de executie de O(1), iar cel mai dezavantajos caz este cel in care elementul nu exista in vector sau atunci cand elementul cautat se afla pe prima pozitie sau pe ultima, O(log(N)).</p>
<p>Dezavantajul cautarii binare este necesitatea de a lucra cu un vector sortat de elemente</p>
</body>
</html>
 


      

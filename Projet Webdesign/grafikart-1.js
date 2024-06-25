// Défintion des variables
let fileti
let filesami
let fileslary
let etiage = 16
let amiage = 8
let laryage = 4

//Collecte des données sur les personnels
fileti ={
    nom : 'ADRI',
    prenom : "Etienne Eliasaph",
    age : 10 + 'ans'
}
fileti.classe = 1+'ère';

// console.log(fileti)

//création du tableau
alltable = [etiage, amiage, laryage]

alltable.push(15, 17, 'unvaluable data')
console.log(alltable)

// Condition très importantes
let preferenceeating = prompt('Votre repas préférés')
if(preferenceeating < 100)
{
    console.log('Votre salaire du mois es de '+2000+' euros')
}
else{
    console.log('Votre salaire du mois es de '+1000+' euros')
}
//Exercice Grafikart
const age = prompt('Quel est votre age')
if (age< 13)
{
    console.log(Lilo & Stitch)
}
else if(age <= 18)
{
    console.log('Matrix')
}
else{
    console.log('Evil Dead)')
}

// les boucles while et for
let i = 0
while( i<3){
    console.log('je compte'+i)
    i = i + 1
}
    //Deuxième possibilité de while
do {
    console.log('Les bitches de Saitama'+ i)
    i = i + 1
} while(i>3)
    //Condition de for
for(let i= 2; i=6; i++) {
    console.log ('je compte ' +i)
}

//Exercice
let usernumber = prompt("Taper votre nombre")
if (usernumber > 10 || usernumber < 0) {
    console.log("le nombre n'est compris dans l'intervalle")
} else{
    for (let  i = usernumber; i >= 0; i --)
        console.log(i)
}
// Des fonctions 
const salutation = function(nom = 'John'){
    return 'Salut' + nom
}

// L'entête en générale
let entete = document.querySelector('header')
    entete.style.display = 'flex'
    entete.style.justifyContent = 'space-evenly'
    entete.style.alignItem = 'center'
    entete.style.textAlign = 'center'

// Toucher les children du header
let logosite = document.querySelector('.logo')
    logosite.style.width = "100px"

// Toucher les ul/li du header
let HEADER = document.querySelectorAll('li')
HEADER.style.display = 'inline'




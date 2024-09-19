#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>

class Personne {
public:
    Personne(const std::string& nom, int age)
        : nom_(nom), age_(age) {}

    void afficher() const {
        std::cout << "Nom: " << nom_ << ", Age: " << age_ << std::endl;
    }

    int getAge() const { return age_; }
    const std::string& getNom() const { return nom_; }

private:
    std::string nom_;
    int age_;
};

int main() {
    std::vector<std::unique_ptr<Personne>> personnes;

    // Ajout de personnes à la liste
    personnes.push_back(std::make_unique<Personne>("Alice", 30));
    personnes.push_back(std::make_unique<Personne>("Bob", 25));
    personnes.push_back(std::make_unique<Personne>("Charlie", 35));

    std::cout << "Liste des personnes : " << std::endl;
    for (const auto& p : personnes) {
        p->afficher();
    }

    // Tri des personnes par âge en utilisant un lambda
    std::sort(personnes.begin(), personnes.end(), 
              [](const std::unique_ptr<Personne>& p1, const std::unique_ptr<Personne>& p2) {
                  return p1->getAge() < p2->getAge();
              });

    std::cout << "\nListe triée par âge : " << std::endl;
    for (const auto& p : personnes) {
        p->afficher();
    }

    // Recherche d'une personne par nom avec lambda et std::find_if
    std::string nomRecherche = "Bob";
    auto it = std::find_if(personnes.begin(), personnes.end(),
                           [&nomRecherche](const std::unique_ptr<Personne>& p) {
                               return p->getNom() == nomRecherche;
                           });

    if (it != personnes.end()) {
        std::cout << "\nPersonne trouvée : " << std::endl;
        (*it)->afficher();
    } else {
        std::cout << "\nPersonne non trouvée." << std::endl;
    }

    return 0;
}

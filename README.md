# Projet Arduino - Feux de signalisation avec affichage LCD

Ce projet Arduino met en œuvre un système de gestion de feux de signalisation avec un affichage sur un écran LCD. Il utilise trois LED (rouge, jaune, verte) pour simuler un feu tricolore, ainsi qu’un écran LCD pour afficher l’état actuel du feu.

## Schéma de câblage

Voici le schéma de câblage utilisé pour ce projet :

![Schéma Arduino - Feux de signalisation avec LCD](./arduinos.png)

### Composants utilisés

- 1 x Arduino UNO
- 3 x LED (rouge, jaune, verte)
- 3 x Résistances (220Ω à 330Ω)
- 1 x Écran LCD 16x2 avec interface parallèle
- 1 x Breadboard
- Câbles de connexion

### Description

- Les trois LED simulent un feu tricolore (rouge, jaune, vert).
- L’écran LCD affiche l’état actuel : par exemple `"Feu Rouge"`, `"Feu Vert"`, `"Attention"` lors du passage au jaune.
- Le système alterne les états des LED de manière séquentielle, en synchronisation avec l'affichage LCD.

## Exécution

Branchez le circuit comme indiqué dans le schéma, puis téléversez le code Arduino disponible dans ce repository sur la carte UNO.

## Licence

Ce projet est sous licence MIT.

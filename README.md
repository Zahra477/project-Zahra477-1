# Ventilateur avec Arduino
| | |
|-|-|
|`Author` |Marmouche Fatma Ezzahra

## Description
Ce projet consiste à réaliser un ventilateur simple contrôlé par une carte Arduino. Le système utilise un moteur DC relié à une hélice qui tourne automatiquement lorsque le circuit est alimenté. Ce projet permet de comprendre le fonctionnement de base d’un moteur avec Arduino ainsi que les connexions électroniques simples.

## Motivation
Ce projet a été choisi pour :
apprendre les bases de l’électronique avec Arduino
comprendre le fonctionnement d’un moteur DC
réaliser un circuit simple et fonctionnel
développer des compétences pratiques en programmation et câblage électronique
découvrir les systèmes embarqués de base

## Architecture
Le système de ventilateur simple est composé de trois parties principales :
1. Entrée
Interrupteur / alimentation
Permet d’allumer ou d’éteindre le système.
2. Unité de traitement
Arduino UNO / Nano
Contrôle le fonctionnement du moteur.
3. Sortie
Moteur DC avec hélice
Fait tourner le ventilateur.

### Block diagram

<!-- Make sure the path to the picture is correct -->
schematicsblock_diagram.png.jpeg

### Schematic

schematicskicad_schematic.png.jpeg

### Components


<!-- This is just an example, fill in with your actual components -->

| Device                     | Usage                     | Prix    |
| -------------------------- | ------------------------- | ------- |
| Arduino UNO/Nano           | Microcontrôleur principal | ~60 RON |
| Moteur DC                  | Rotation du ventilateur   | ~20 RON |
| Hélice                     | Ventilation               | ~10 RON |
| Transistor                 | Contrôle du moteur        | ~5 RON  |
| Breadboard                 | Prototypage du circuit    | ~10 RON |
| Fils de connexion          | Connexions                | ~7 RON  |
| Batterie / alimentation 5V | Alimentation              | ~20 RON |



### Libraries
| Library     | Usage                 | Description        |
| ----------- | --------------------- | ------------------ |
| Arduino IDE | Programmation Arduino | Contrôle du moteur |
            |


## Log

<!-- write every week your progress here -->

### Week 6 - 12 May
Choix du projet et définition du système de parking intelligent. Étude du fonctionnement du capteur ultrason HC-SR04 et de la carte Arduino UNO.

### Week 7 - 19 May

### Week 20 - 26 May


## Reference links

<!-- Fill in with appropriate links and link titles -->

[Tutorial 1](https://www.youtube.com/watch?v=wdgULBpRoXk&t=1s&ab_channel=BenEater)

[Article 1](https://www.explainthatstuff.com/induction-motors.html)

[Link title](https://projecthub.arduino.cc/)

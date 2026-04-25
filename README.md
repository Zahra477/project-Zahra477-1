# Your Project Name
Système de Parking Intelligent avec Arduino
| | |
|-|-|
|`Author` |Marmouche Fatma Ezzahra

## Description
Ce projet consiste à réaliser un système intelligent de détection de place de parking en utilisant une carte Arduino Uno et un capteur à ultrasons HC-SR04.
Le capteur mesure la distance entre lui et un obstacle (voiture). Lorsqu’un véhicule est détecté dans la zone de stationnement, le système indique que la place est occupée en allumant une LED rouge. Si aucun véhicule n’est détecté, la place est considérée libre, et une LED verte s’allume.

## Motivation
Le stationnement est un problème fréquent dans les zones urbaines. Les conducteurs perdent du temps à chercher une place libre. Ce projet a été choisi pour :
simplifier la gestion des places de parking
réduire le temps de recherche d’une place
appliquer les connaissances en microprocesseurs
apprendre l’utilisation des capteurs avec Arduino
concevoir un système embarqué simple et utile
Ce projet permet également de comprendre la communication entre capteurs, microcontrôleur et actionneurs.

## Architecture
Le système de parking intelligent est basé sur trois parties principales :
 1. Partie détection (Entrée)
Capteur ultrason HC-SR04
Il mesure la distance pour détecter si une voiture est présente ou non
2. Partie traitement (Cerveau du système)
Carte Arduino UNO
Elle reçoit les données du capteur
Elle analyse la distance et prend une décision
3. Partie affichage (Sortie)
LED verte → place libre
LED rouge → place occupée

### Block diagram

<!-- Make sure the path to the picture is correct -->
schematicsblock_diagram.png.jpeg

### Schematic

schematicskicad_schematic.png.jpeg

### Components


<!-- This is just an example, fill in with your actual components -->

| Device                    | Usage                           | Price   |
| ------------------------- | ------------------------------- | ------- |
| Arduino UNO               | Microcontrôleur principal       | ~70 RON |
| HC-SR04 Ultrasonic Sensor | Détection de voiture (distance) | ~15 RON |
| LED Verte                 | Indique place libre             | ~1 RON  |
| LED Rouge                 | Indique place occupée           | ~1 RON  |
| Résistances (220Ω)        | Protection des LEDs             | ~1 RON  |
| Breadboard                | Montage du circuit              | ~10 RON |
| Jumper Wires              | Connexions entre composants     | ~7 RON  |


### Libraries

| Library                                                                              | Description                                         | Usage                                         |
| ------------------------------------------------------------------------------------ | --------------------------------------------------- | --------------------------------------------- |
| [Wire.h](https://www.arduino.cc/reference/en/language/functions/communication/wire/) | Bibliothèque Arduino standard                       | Communication bas niveau (I2C)                |
| [Arduino.h](https://www.arduino.cc/reference/en/)                                    | Bibliothèque principale Arduino                     | Contrôle des pins, digitalRead / digitalWrite |
| [NewPing.h](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home)               | Simplifie l’utilisation du capteur ultrason HC-SR04 | Mesure de distance plus facile et optimisée   |


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

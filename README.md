# Smartwatch avec Arduino
| | |
|-|-|
|`Author` |Marmouche Fatma Ezzahra

## Description
Ce projet consiste à concevoir un système simple de montre connectée (smartwatch) à l’aide d’un microcontrôleur Arduino Nano. La smartwatch est capable d’afficher des informations sur un écran OLED, de surveiller la fréquence cardiaque à l’aide d’un capteur de pouls, et de détecter les mouvements grâce à un capteur accéléromètre (MPU6050)
Le système fonctionne de manière autonome grâce à une batterie rechargeable et démontre l’intégration de plusieurs capteurs dans un système embarqué.

## Motivation
Les objets connectés et les systèmes de suivi de santé intelligents deviennent de plus en plus importants dans la technologie moderne. Ce projet a été choisi pour :
appliquer les concepts de microprocesseurs et de systèmes embarqués
apprendre à interfacer plusieurs capteurs avec Arduino
comprendre les protocoles de communication tels que I2C
créer un système électronique portable et autonome
afficher des informations en temps réel sur un écran OLED
explorer les technologies de suivi de santé et de mouvement
Ce projet permet également de développer des compétences pratiques en électronique, programmation et intégration de capteurs.

## Architecture
Le système de smartwatch est divisé en quatre parties principales :

1. Entrées / Capteurs

Capteur de pouls (Pulse Sensor)
Mesure la fréquence cardiaque de l’utilisateur.
Accéléromètre MPU6050
Détecte le mouvement et l’accélération.
2. Unité de traitement
Arduino Nano
Reçoit les données des capteurs, traite les informations et contrôle l’affichage.
3. Sortie / Affichage
Écran OLED SSD1306
Affiche la fréquence cardiaque et les données de mouvement en temps réel.
4. Alimentation
Batterie Li-Po + Module TP4056
Fournit une alimentation portable et permet la recharge de la batterie.

### Block diagram

<!-- Make sure the path to the picture is correct -->
schematicsblock_diagram.png.jpeg

### Schematic

schematicskicad_schematic.png.jpeg

### Components


<!-- This is just an example, fill in with your actual components -->

| device            | usage                            | Prix    |
| ----------------- | -------------------------------- | ------- |
| Arduino Nano      | Microcontrôleur principal        | ~60 RON |
| OLED SSD1306      | Affichage des informations       | ~25 RON |
| MPU6050           | Détection de mouvement           | ~20 RON |
| Capteur de pouls  | Surveillance du rythme cardiaque | ~25 RON |
| Batterie Li-Po    | Alimentation portable            | ~30 RON |
| Module TP4056     | Charge de la batterie            | ~10 RON |
| Breadboard        | Prototypage du circuit           | ~10 RON |
| Fils de connexion | Connexions                       | ~7 RON  |


### Libraries

| library            | Usage                     | descripition                        |
| ------------------ | ------------------------- | ---------------------------------- |
| [Wire.h  ](https://www.arduino.cc/reference/en/language/functions/communication/wire/)           | Communication I2C Ar[duino | Communication avec OLED et MPU6050 |
| Adafruit_GFX.h  ](https://github.com/adafruit/Adafruit-GFX-Library)    | Bibliothèque graphique    | Texte et graphiques sur écran      |
| [Adafruit_SSD1306.h](https://github.com/adafruit/Adafruit_SSD1306) | Contrôle OLED             | Gestion de l’écran OLED            |
| [MPU6050.h](https://github.com/adafruit/Adafruit_MPU6050)          | Capteur MPU6050           | Détection de mouvement             |


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

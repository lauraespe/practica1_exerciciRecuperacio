# Pràctica 1 - Exercici de Recuperacio

### Briefing:
El que s'ha de fer és **resoldre amb Arduino un circuit** que quan poses 3 sensors tipus hall (magnetics), es desactiva un electroiman. Amb 1 o 2 no n'hi ha prou, la lògica del arduino ha de ser tal que quan estan els 3 activats l'electroiman deixa d'actuar i s'allibera.

El concepte o aplicació seria per exemple resoldre un codi amb 3 imans colocats en una certa posició correcte, permetrien obrir una porta o un calaix etc.

### Abstract
Un mecanisme de seguretat basat en sensors magnètics i un sistema d’autenticació mitjançant imants per protegir documents confidencials en una oficina o empresa. És farien servir tres sensors magnètics i conjunts personalitzats d’imants per a cada empleat autoritzat.

Per accedir a una sala d'arxius que emmagatzema informació sensible, cal col·locar els imants en la posició correcta, cosa que és detectada pels sensors Hall. Si els imants coincideixen amb el codi d'accés predefinit, l'electroimant que manté tancada la porta de la sala es desactiva.

Aquesta aplicació proporciona un nivell addicional de seguretat i control d’accés, evitant l’accés no autoritzat a documents confidencials. A més, registra l'activitat de cada obertura i tancament de la sala, cosa que millora la traçabilitat i el seguiment de les operacions realitzades amb els documents.

### Descripció de la Solució
La solució per aconseguir que el circuit funcioni és declarar els diferents sensors com a inputs i l’imant sent un output als diferents pins.
Els sensors són considerats inputs al ser utilitzats per enviar informació i l’imant que actua com a output perquè ens dóna resposta sobre l’estat dels sensors.

### Arquitectura Tècnica
**Diagrama de flux**
![Start](https://github.com/lauraespe/practica1_exerciciRecuperacio/assets/81622003/10eac383-801a-4125-a431-a3a9f7ee2e7d)

**Codi Font**

https://github.com/lauraespe/practica1_exerciciRecuperacio/blob/main/practica1_exerciciRecuperacio_lauraEsteve.ino 


**Circuit Físic**

### Process Report

### Video

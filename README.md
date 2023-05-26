# Pràctica 1 - Exercici de Recuperació

### Briefing:
El que s'ha de fer és **resoldre amb Arduino un circuit** que quan poses 3 sensors tipus hall (magnetics), es desactiva un electroiman. Amb 1 o 2 no n'hi ha prou, la lògica del arduino ha de ser tal que quan estan els 3 activats l'electroiman deixa d'actuar i s'allibera.

El concepte o aplicació seria per exemple resoldre un codi amb 3 imans colocats en una certa posició correcte, permetrien obrir una porta o un calaix etc.

### Abstract
Un mecanisme de seguretat basat en sensors magnètics i un sistema d’autenticació mitjançant imants per protegir documents confidencials en una oficina o empresa. És farien servir tres sensors magnètics i conjunts personalitzats d’imants per a cada empleat autoritzat.

Per accedir a una sala d'arxius que emmagatzema informació sensible, cal col·locar els imants en la posició correcta, cosa que és detectada pels sensors Hall. Si els imants coincideixen amb el codi d'accés predefinit, l'electroimant que manté tancada la porta de la sala es desactiva.

Aquesta aplicació proporciona un nivell addicional de seguretat i control d’accés, evitant l’accés no autoritzat a documents confidencials. A més, registra l'activitat de cada obertura i tancament de la sala, cosa que millora la traçabilitat i el seguiment de les operacions realitzades amb els documents.

### Descripció de la Solució
El projecte consisteix en resoldre un circuit que desactiva un electroimant quan tres sensors magnètics tipus Hall estan activats. L'objectiu és simular un mecanisme de seguretat, com ara un codi de tres imants, que permeti obrir una porta o un calaix quan es col·loquen correctament. Els sensors Hall es conecten a l'Arduino, que llegeix el seu estat i, quan els tres sensors estan activats, envia un senyal per desactivar l'electroimant. Això allibera el mecanisme de seguretat i permet accedir-hi.

En el següent codi, es llegeixen els estats dels tres sensors defecte Hall. Si tots els sensors estan activats (detecten un camp magnètic), l'electroimant es desactiva (el pin del transistor s'estableix en LOW). En cas contrari, l'electroimant es manté activat (el pin del transistor s'estableix a HIGH). La variable sensorsActivated s'utilitza per emmagatzemar l'estat

### Arquitectura Tècnica
**Diagrama de flux**
![Start](https://github.com/lauraespe/practica1_exerciciRecuperacio/assets/81622003/10eac383-801a-4125-a431-a3a9f7ee2e7d)

**Codi Font**

https://github.com/lauraespe/practica1_exerciciRecuperacio/blob/main/practica1_exerciciRecuperacio_lauraEsteve.ino 


**Circuit Físic**
![Uploading practica1_exerciciRecuperacio_lauraEsteve.png…]()


### Process Report
Al principi vaig haber de fer investigació sobre l’electroimant dels sensors Hall. També em van ajudar alguns companys de classe explicant-me el funcionament d’aquests components. Es per això i el coneixements previs en arduino que no he tingut gaire complicació a l’hora de realitzar el projecte.  Ha estat interessant treballar amb aquests sensors i imants doncs tenen moltes aplicacions interessants. 

Per altra banda, m’ha sorprés el funcionament dels sensors Hall ja que tornen la informació al revés de lo que normalment estic acostumada. Retornen 0 quan estàn conectats als imants i 1 quan estàn deconectats. M’ha sorprés i sí que ha sigut una cosa que al principi m’ha costat d’entendre i de trobar quin era el problema en el codi.

### Video
https://vimeo.com/830494641?share=copy

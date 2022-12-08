### Array

* Déclarer un tableau d'entiers de 10 éléments et l'initialiser avec les nombres 1 à 10.

```c
int T[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
```

<hr>

* Déclarer un tableau d'entiers de 100 éléments et l'initialiser avec les nombres 0 à 99, Afficher le tableau en séparant les valeurs par des virgules (limiter à 10 valeurs par lignes).

```c
  int T[100];

  for(int i = 0; i<100 ; i++){
    T[i] = i;
  }

  printf("\t%d", T[0]);
  for(int i = 1; i<100 ; i++){
    if( i % 10 == 0)
      printf("\n ,%d", T[i]);
    else
      printf(" ,%d", T[i]);
  }
```

<hr>

* Soient deux tableaux de nombres réels tSource et tDestination de 10 éléments chacun.

* Écrire un programme permettant de recopier, dans tDestination, tous les éléments positifs de tSource, en complétant éventuellement tDestination par des zéros (initialiser tSource avec des valeurs au moment de sa déclaration).

```c


  int tSource[] = {1, 2, -3, -4, 6, -1, 0, 99, 2, -999};

  int n = 10;
  int tDestination[n];

  int j = 0;
  for (int i = 0; i < 10; i++) {
    if (tSource[i] >= 0) {
      tDestination[j] = tSource[i];
      tSource[i] = 0;
      j++;
    }
  }

  printf("\n\n tSource:\n");
  printf("%d", tSource[0]);
  for (int i = 1; i < 10; i++) {
    printf(" ,%d", tSource[i]);
  }

  printf("\n\n tDestination:\n");
  printf("%d", tDestination[0]);
  for (int i = 1; i < 10; i++) {
    printf(" ,%d", tDestination[i]);
  }
```

<hr>

* Écrire un programme qui demande 10 nombres entiers à l’utilisateur, les range dans un tableau avant d’en rechercher le plus grand et le plus petit.

```c

  printf("donner 10 entiers: \n");

  int T[10];
  for(int i = 0; i<10 ; i++){
    scanf("%d", &T[i]);
  }

  int min = T[0];

  for(int i = 1; i<10; i++){
    if( T[i] < min)
      min = T[i];
  }

  int max = T[0];

  for(int i = 1; i<10; i++){
    if( T[i] > max)
      max = T[i];
  }

  printf("max : %d et min : %d", max, min);
```

<hr>

* Demander à l’utilisateur de saisir des notes (entre 0 et 20) et lui expliquer qu’une valeur hors de cet intervalle arrêtera la saisie.

* Saisir les notes et les mémoriser dans un tableau
Compter les notes saisies et afficher leur nombre
Calculer et afficher la moyenne.

```c
  int T[100];  
  int k = 0;
  do {
    scanf("%d", &T[k]);
    k++;
  } while ((T[k] < 20) && (T[k] > 0));

  printf("Les notes saisies : %d", k);

  int sum = 0;
  for(int i = 0; i<k; i++){
    sum += T[i];
  }

  int moy = sum / k;
```
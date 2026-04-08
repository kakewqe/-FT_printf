# ft_printf

## 🇬🇧 English

The goal of this project is to recreate the behavior of the `printf` function from the C standard library.

### Description

`ft_printf` is a custom implementation of the `printf` function.

This project helps you better understand:

* variadic functions
* string parsing
* conversion handling
* number and base manipulation

### Supported Conversions

* `%c` : character
* `%s` : string
* `%p` : pointer
* `%d` / `%i` : signed integer
* `%u` : unsigned integer
* `%x` / `%X` : hexadecimal
* `%%` : percent character

### Compilation

```bash
make
```

### Usage

```bash
gcc main.c
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s\n", "42");
    return (0);
}
```

### Skills Developed

* C programming
* variadic functions (`stdarg.h`)
* parsing
* memory management
* basic data structures
* Makefile

---

## 🇫🇷 Français

Le but de ce projet est de recréer le comportement de la fonction `printf` de la bibliothèque standard en C.

### Description

`ft_printf` est une implémentation personnalisée de la fonction `printf`.

Ce projet permet de mieux comprendre :

* les fonctions variadiques
* le parsing de chaînes de caractères
* la gestion des conversions
* la manipulation de nombres et de bases

### Conversions gérées

* `%c` : caractère
* `%s` : chaîne de caractères
* `%p` : pointeur
* `%d` / `%i` : entier signé
* `%u` : entier non signé
* `%x` / `%X` : hexadécimal
* `%%` : caractère `%`

### Compilation

```bash
make
```

### Utilisation

```bash
gcc main.c 
```

### Exemple

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s\n", "42");
    return (0);
}
```

### Compétences travaillées

* langage C
* fonctions variadiques (`stdarg.h`)
* parsing
* gestion mémoire
* structures de données simples
* Makefile


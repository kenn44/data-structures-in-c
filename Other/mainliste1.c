#include <stdio.h>
#include <stdlib.h>

struct list_entier;
int taille_list (struct  list_entier *L);
void list_print (struct list_entier *L);
struct list_entier *elem_new (int val);
void elem_free (struct list_entier *elem);
struct list_entier * list_push (struct list_entier * L, struct list_entier *elt);
void list_insert (struct list_entier *p, struct list_entier *elt);
struct list_entier *list_append(struct list_entier *L, struct list_entier * elt);
struct list_entier *parcourt (struct list_entier *p, int val);
void suppr (struct list_entier *p, int val);

int main(int argc, char *argv[]) {

	struct list_entier *tete = NULL, *a = NULL;

	tete = list_append(tete,elem_new(30));
	tete = list_append(tete,elem_new(20));
	tete = list_append(tete,elem_new(10));
	list_print (tete);
	printf("\n");
	printf ("La taille de la liste est %d\n", taille_list(tete));
	printf("\n");
	list_insert (tete, elem_new(25));
	list_print (tete);
	printf("\n");
	a = parcourt (tete, 20);
	list_insert (a, elem_new(15));
	list_print (tete);
	printf("\n");
	suppr(tete, 15);
	//list_print (tete);
	return 0;
}

struct list_entier
{
int val;
struct list_entier *suivant;
};


struct list_entier *parcourt (struct list_entier *p, int val)
{
	struct list_entier *new;
	new=p;
	while(new->suivant != NULL)
	{
		if(new->val == val)
		return new;
		else
		new = new->suivant;
	}
	return new;
}

void suppr (struct list_entier *p, int val)
{
	struct list_entier *new;
	new = p;
	while(new->suivant != NULL)
	{
		if(new->val == val)
		elem_free(new);
		else
		new = new->suivant;
	}

}

int taille_list (struct list_entier *L)
{
int len=0;
while (L != NULL) {
L = L->suivant; len++;
}
return len;
}
//afficher
void list_print (struct list_entier *L)
{
int num;
for (num = 0 ; L ; num++)
{
printf("Element %d = %d\n", num, L->val);
L = L->suivant;
}
}

struct list_entier *elem_new (int val)
{
struct list_entier *new;
new = (struct list_entier *)malloc (sizeof(struct list_entier));
new->val = val;
new->suivant = NULL;
return new;
}

void elem_free (struct list_entier *elem)
{
free(elem);
}

/* Inserer un élément en tête */
struct list_entier * list_push (struct list_entier * L, struct
list_entier *elt)
{
elt->suivant = L;
return elt;
}
/*...
tete = list_push(tete,elem_new(12));*/

/* Inserer un élément après p */
void list_insert (struct list_entier *p, struct list_entier *elt)
{
elt->suivant = p->suivant;
p->suivant = elt;
}

 /* Inserer en "queue" de liste */
struct list_entier *list_append(struct list_entier *L, struct list_entier * elt)
{
struct list_entier *cur;
if (L == NULL)    //ici on insère en tête de liste si la liste est vide
return list_push(L,elt);
cur = L;
while (cur->suivant != NULL)
cur = cur->suivant;   //on parcours les élément pour pouvoir atteindre le dernier
list_insert(cur,elt);
return L;
}

struct list_entier *produit (struct list_entier *L1, struct list_entier *L2)
{
    struct list_entier *tete = NULL;
    while(L1->suivant != NULL)
	{
	    int L = (L1->val)*(L2->val);
	    tete = list_append(tete,elem_new(L));
	    L1 = L1->suivant;
	    L2 = L2->suivant;
    }
    return tete;
}

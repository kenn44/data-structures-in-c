#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct list_entier *elem_new (intval);
 struct list_entier* tete ;
int main(int argc, char *argv[]);

int a , b ,c ;
//tete = NULL;
//tete = list_append(tete,elem_new(a)); 
tete = list_append(tete,elem_new(b))); 
tete = list_append(tete,elem_new(c));
printf("entrer trois elements dans la liste");
scanf("%d%d%d"&a , &b ,&c);
printf("les valeurs de %da,%db et %dc sont"a,b,c)	
	return 0;
}

/* struct list_entier *list_append(struct list_entier *L, struct list_entier * elt); 
 { struct list_entier *cur;
  if (
{ intval; struct list_entier *suivant; }; 
... struct list_entier *tete=NULL

 int taille_list (struct list_entier *L) 
{ int len=0; while (L != NULL) { L = L->suivant; len++; } 
return len;
}

 void list_print (struct list_entier *L);? struct list_entier *elem_new (intval) ;
 { struct list_entier *new; new = (struct list_entier *)malloc (sizeof(struct list_entier)); 
 new->val = val; new->suivant = NULL; return new; } void elem_free (struct list_entier *elem);
 { free(elem); }? struct list_entier *elem_new (intval);
{ struct list_entier *new; new = (struct list_entier *)malloc (sizeof(struct list_entier));
    new->val = val; new->suivant = NULL; return new; 	} void elem_free (struct list_entier *elem);
 { free(elem);
 }
  { int num; for (num = 0 ; L ; num++); 
  { L = L->suivant; printf("Element %d = %d\n", num, L- >val); 
  } 
  
   struct list_entier *elem_new (intval)
{ struct list_entier *new; new = (struct list_entier *)malloc (sizeof(struct list_entier)); new->val = val; new->suivant = NULL; return new;
{ 
} void elem_free (struct list_entier *elem) { free(elem_new(12);

/* Inserer un élément après p */
/*void list_insert (struct list_entier *p, struct list_entier *elt); 
{ elt->suivant = p->suivant; p->suivant = elt; 




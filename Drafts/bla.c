//Suppression d’un élément de la liste selon sa valeur
List *List_remove(List *p_list,int val)
{
    if(p_list!=NULL)
    {
        LCDC *p_temp=p_list->debut;
        int found=0;
        while(p_temp->suivant != p_list->debut&&!found)
        {
            if(p_temp->val == val)
            {
                if(p_temp->suivant == p_list->debut)
                {
                    p_list->fin = p_temp->precedent;
                    p_list->fin->suivant = p_list->debut;
                }
                else if(p_temp->precedent== p_list->fin)
                {
                    p_list->debut=p_temp->suivant;
                    p_list->debut->precedent=p_list->fin;
                }
                else
                {
                    p_temp->suivant->precedent=p_temp->precedent;
                    p_temp->precedent->suivant=p_temp->suivant;
                }
                free(p_temp);
                p_list->taille--;
                found=1;
            }
            else
            {
            p_temp=p_temp->suivant;
            }
        }
    }
    return p_list;
}

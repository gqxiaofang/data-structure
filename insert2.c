#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct _Lnode{
    int data;
    struct _Lnode *next;
}Lnode;
Lnode *insert(Lnode *first, Lnode *p,int e);
Lnode *find(Lnode *first, int e);
Lnode *delete(Lnode *first, int e);
void print(Lnode *first);
Lnode *list_create(Lnode *first,int a[],int n);
void list_destroy(Lnode *first);

int main(void)
{
    int n=7,a[]={12,34,21,11,56,54,65};
    Lnode *first=0,*p=0;
    first=list_create(first,a,n);
    print(first);
    
    first=insert(first,first,100);
    print(first);

    p=find(first,11);
    print(first);

    insert(first,p,200);
    print(first);

    first = delete(first,54);
    print(first);
    list_destroy(first);
    
    system("pause");
    return 0;
}
Lnode *insert(Lnode *first, Lnode *p,int e)
{
    Lnode *q,*s;
    s = (Lnode *)malloc(sizeof(Lnode));
    s -> data = e;
    s -> next = NULL;

    if(first == NULL)
    {
        first = s;
        return first;
    }
    if(p == first)
    {
        s ->next = first;
        first = s;
    }else
    {
        q = first;
        while(q -> next != p)
            q = q->next;
        q->next = s;
        s->next = p;
    }
    return first;
}
Lnode *find(Lnode *first,int e)
{
    Lnode *p;
    p = first;
    if(first == NULL)
        return first;
    while (p)
    {
        if(p->data == e)
            return p;
        p = p -> next;
    }
    return NULL;
}
Lnode *delete (Lnode *first, int e)
{
    Lnode *p, *q;
    p=q=first;
    if(first == NULL)
        return NULL;
    if(first->data==e)
    {
        p=first;
        first=first->next;
        free(p);
        return first;
    }
    for(q=first; q->next; q=q->next)
    {
        p=q->next;
        if(p->data==e)
        {
            q->next=p->next;
            free(p);
            break;
        }
    }
    return first;
}
void print(Lnode *first)
{
    Lnode *p;
    p = first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
Lnode *list_create(Lnode *first,int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        first=insert(first,first,a[n-1-i]);
    }
    return first;
}
void list_destroy(Lnode *first)
{
    Lnode *p=first;
    first=first->next;
    free(p);
    while(first){
        p=first;
        first=first->next;
        free(p);
    }
}

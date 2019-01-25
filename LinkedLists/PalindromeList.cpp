
 ListNode * rev(ListNode*p1)
 {
    ListNode*ptr1=NULL;
    ListNode*ptr2=p1;
    while(ptr2!=NULL)
    {
        ListNode*ptr3=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr3;
    }
    return ptr1;
 }
 int pal(ListNode**n,ListNode*h)
 {
     if(h==NULL)
        return 1;
    int y=pal(n,h->next);
    if(y==1)
    {
        if((*n)->val==h->val)
        {
            (*n)=(*n)->next;
            return 1;
        }
        else 
            return 0;
    }
 }
int Solution::lPalin(ListNode* A) {
    int res=pal(&A,A);
    return res;
   
}


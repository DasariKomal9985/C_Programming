struct node
{
   int i;
   float j;
};
struct node *s[10];



/*


     s (array of 10 pointers)
 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
 │ s[0]   │ s[1]   │ s[2]   │ s[3]   │ s[4]   │ s[5]   │ s[6]   │ s[7]   │ s[8]   │ s[9]   │
 └───┬────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┴──┬─────┴──┬────┘
     │        │        │
     ▼        ▼        ▼

 nullptr   pointer   pointer
            ↓          ↓

         struct node   struct node
         ┌──────────┐ ┌──────────┐
         │ i = ...  │ │ i = ...  │
         │ j = ...  │ │ j = ...  │
         └──────────┘ └──────────┘




         s[0] = malloc(sizeof(struct node));
s[1] = malloc(sizeof(struct node));




*/
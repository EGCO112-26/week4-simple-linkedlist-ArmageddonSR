//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
//     int c=5;
//     struct node a,b,*head ;
//     a.value = c;
//     a.next=&b;
//     head=&a;

//     b.value=head->value+3;

//     printf("%d\n", head ->value ); //what value for 5
//     printf("%d\n", head ->next->value ); //what value for 8
//     //////////////////////////////////////
//     /*  Exercise I
//         1. Add 1 more than at the end
//         2. Add value(11)
//         3. Make next become NULL
//      */
        
//     struct node d;
//     b.next = &d;
//     d.value = 11;
//     d.next = NULL;
//     printf("%d\n", head ->next->next->value );
//     //////////////////////////////////////
// /*  Exercise II
//         1. Add 1 more than at the begining!!!!
//         2. Add value (2)
        
// */
//     struct node e;
//     e.next = &a;
//     e.value = 2;
//     head = &e;
//     printf("%d\n", head ->value);
//     //////////////////////////////////////
//     /*  Exercise II.II
//         1. Insert in middle
        
// */
//     struct node f;
//     f.next = &b;
//     a.next = &f;
//     f.value = 67;
//     printf("%d\n", head ->next->next->value);
//     //////////////////////////////////////

//     typedef struct node* NodePtr;
//     NodePtr tmp=head; //add temp value to faciliate
        
//     /*  Exercise III Use loop to print everything
//     */
//         int i,n=5;
//         for(i=0;i<n;i++){
//             printf("%3d", tmp->value);
//             // What is missing???
//             tmp=tmp->next;

//         }
//         printf("\n");
    
//    /*  Exercise IV change to while loop!! (you can use NULL to help)
//    */
//    tmp = head;
       
//          while(tmp){
//             printf("%3d", tmp->value);
//             tmp=tmp->next;
//            // What is missing???
//         }
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
         */

        typedef struct node* NodePtr;
        NodePtr head,temp;
        head=(NodePtr) malloc(sizeof(struct node));
        temp=head;

        int i=0,n=5;
        for(int i; i < n ; i++)
        {
            temp->value =7+i*2;
            temp->next = (NodePtr) malloc(sizeof(struct node));
            temp = temp->next;
        }
        temp->value =7+i*2;
        temp->next = NULL;

        temp=head;
        while(temp){
            printf("%3d", temp->value);
            temp=temp->next;
       }

    /*  Exercise VI Free all node !!
         //use a loop to help
    */
    temp=head;
    while(temp)
    {
        head = head->next;
        printf(" | Freeing %d\n",temp->value);
        free(temp);
        temp = head;
        //printf("e");
    }

          
    
    return 0;
}

//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "std_node.h"
#include <string.h>

int main(int argc, const char * argv[]) {
        //printf("%s\n",argv[4]);
        typedef struct std_node* NodePtr;
        NodePtr head,temp;
        head=(NodePtr) malloc(sizeof(struct std_node));
        temp=head;

        int i=1,n=(argc-1)/2;
        for( i; i < n ; i++)
        {
            temp->id =atoi(argv[(i*2)-1]);
            strcpy(temp->name,argv[i*2]);
            // temp->name = argv[2];
            temp->next = (NodePtr) malloc(sizeof(struct std_node));
            temp = temp->next;
        }
        temp->id =atoi(argv[(i*2)-1]);
        strcpy(temp->name,argv[i*2]);
        temp->next =NULL;



        temp=head;
        while(temp){
            printf("%d %s\n",temp->id,temp->name);
            temp=temp->next;
       }

    temp=head;
    while(temp)
    {
        head = head->next;
        free(temp);
        temp = head;
    }

          
    
    return 0;
}

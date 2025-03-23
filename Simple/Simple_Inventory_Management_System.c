#include<stdio.h>
#include<string.h>
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
void addpro(struct Product [],int);
void viewpro(struct Product [],int );
void updatepro(struct Product [],int );
void deletepro(struct Product [],int );
void searchpro(struct Product [],int );
void shortpro(struct Product []);
int main(){
    struct Product Products[100];
    int choice,proidcount=0;
    do
    {
        printf("\nInventory Management System\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Update Product\n");
        printf("4. Delete Product\n");
        printf("5. Search Product\n");
        printf("6. short Product\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        addpro(Products,proidcount);
        proidcount++;
            break;
        
        case 2:
        viewpro(Products,proidcount);
            break;

        case 3:
        updatepro(Products,proidcount);
            break;  

        case 4:
        deletepro(Products,proidcount);
        proidcount--;
            break;

        case 5:       
        searchpro(Products,proidcount);    
            break;

        case 6:
            
            break;

        case 7:
            printf("Exiting the program\n");
            break;
        
        default:
            printf("Invalid choice\n"); 
            break;
        }

    } while (choice != 7);
    
    return 0;
}
void addpro(struct Product pro[],int number){
    FILE *ptr = fopen("inventory.txt", "a");
    if(ptr == NULL){
        printf("Error in opening file\n");
    }

    printf("Enter Product ID : ");
    scanf("%d", &pro[number].id);
    printf("Enter Product Name: ");
    scanf("%s", pro[number].name);
    printf("Enter Product Quantity: ");
    scanf("%d", &pro[number].quantity);
    printf("Enter Product Price: ");
    scanf("%f", &pro[number].price);
    printf("Product added successfully\n");
    fprintf(ptr,"%d\t%s\t%d\t%f\n",pro[number].id,pro[number].name,pro[number].quantity,pro[number].price);
    
    fclose(ptr);
}
void viewpro(struct Product pro[],int number){
    FILE *ptr =fopen("inventory.txt","r");
    if (ptr == NULL)
    {
        printf("Error in opening file\n");
    }
    
    int i=0;
    while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF){
        printf("Product ID: %d\n",pro[i].id);
        printf("Product Name: %s\n",pro[i].name);
        printf("Product Quantity: %d\n",pro[i].quantity);
        printf("Product Price: %f\n",pro[i].price);
        printf("\n");
        i++;
    }

    fclose(ptr);

}
void updatepro(struct Product pro[],int number){
    FILE *ptr =fopen("inventory.txt","r");
    FILE *ptr1 =fopen("temp.txt","w");
    if (ptr == NULL)
    {
        printf("Error in opening file\n");
    }
    int id,found=0,i=0,updatechosie;
    printf("Enter the Product ID to update: ");
    scanf("%d",&id);
    while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF){
        if (pro[i].id == id){
            found = 1;
            printf("1.product ID\n");
            printf("2.product Name\n");
            printf("3.product Quantity\n");
            printf("4.product Price\n");
            printf("5.All\n");
            printf("Enter What you wnat to update\n");
            scanf("%d", &updatechosie);
            switch (updatechosie)
            {
            case 1:
            printf("Enter Product ID: ");
            scanf("%d", &pro[i].id);
                break;

            case 2:
            printf("Enter Product Name: ");
            scanf("%s", pro[i].name);
                break;

            case 3:
            printf("Enter Product Quantity: ");
            scanf("%d", &pro[i].quantity);
                break;

            case 4:
            printf("Enter Product Price: ");
            scanf("%f", &pro[i].price);
                break;

            case 5:
            printf("Enter Product ID: ");
            scanf("%d", &pro[i].id);
            printf("Enter Product Name: ");
            scanf("%s", pro[i].name);
            printf("Enter Product Quantity: ");
            scanf("%d", &pro[i].quantity);
            printf("Enter Product Price: ");
            scanf("%f", &pro[i].price);
                break;
            
            default:
             printf("Invalid choice\n");
                break;
            }
            
            printf("Product updated successfully\n");
            fprintf(ptr1,"%d\t%s\t%d\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
        }
        else{
            fprintf(ptr1,"%d\t%s\t%d\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
        }
        i++;
    }
    if (found == 0){
        printf("Product not found\n");
    }
    fclose(ptr);
    fclose(ptr1);
    remove("inventory.txt");
    rename("temp.txt","inventory.txt");
}
void deletepro(struct Product pro[],int number){
    FILE *ptr1 =fopen("inventory.txt","r");
    FILE *ptr2 = fopen("temp.txt","w");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,serid,found=0;
    printf("Enter the Product ID to delete: ");
    scanf("%d",&serid);

    while (fscanf(ptr1,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
    {
        if (serid == pro[i].id)
        {
            found=1;
            printf("Product deleted successfully\n");
        }
        else{
            fprintf(ptr2,"%d\t%s\t%d\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
        }
        i++;
    }
    fclose(ptr1);   
    fclose(ptr2);
    remove("inventory.txt");
    rename("temp.txt","inventory.txt");

}
void searchpro(struct Product pro[],int number){
    FILE *ptr =fopen("inventory.txt","r");
    if (ptr == NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,ser,temp;
    char tempstr[100];
    printf("\n");
    printf("1.search By ID\n");
    printf("2.search By Name\n");
    printf("3.search By Quantity\n");
    printf("4.search By Price\n");
    printf("Enter What you wnat to search By :- ");
    scanf("%d", &ser);
    printf("\n");
    int fount=0;
            switch (ser)
            {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &temp);
            while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (temp == pro[i].id)
                {
                    fount=1;
                    printf("Product ID: %d\n",pro[i].id);
                    printf("Product Name: %s\n",pro[i].name);
                    printf("Product Quantity: %d\n",pro[i].quantity);
                    printf("Product Price: %f\n",pro[i].price);
                    printf("\n");
                }
                i++;
            }
            if (fount==0)
            {
                printf("Product not found\n");
            }
            
                break;

            case 2:
                printf("Enter Product Name : ");
                scanf("%s",tempstr);
            while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (strcmp(tempstr,pro[i].name) == 0)
                {
                    fount=1;
                    printf("Product ID: %d\n",pro[i].id);
                    printf("Product Name: %s\n",pro[i].name);
                    printf("Product Quantity: %d\n",pro[i].quantity);
                    printf("Product Price: %f\n",pro[i].price);
                    printf("\n");
                }
                i++;
            }
            if (fount==0)
            {
                printf("Product not found\n");
            }
                break;
        
            case 3:
                printf("Enter Product Quantity: ");
                scanf("%d", &temp);
            while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (temp == pro[i].quantity)
                {
                    fount=1;
                    printf("Product ID: %d\n",pro[i].id);
                    printf("Product Name: %s\n",pro[i].name);
                    printf("Product Quantity: %d\n",pro[i].quantity);
                    printf("Product Price: %f\n",pro[i].price);
                    printf("\n");
                }
                i++;
            }
            if (fount==0)
            {
                printf("Product not found\n");
            }
                break;

            case 4:
                printf("Enter Product Price: ");
                scanf("%d", &temp);
            while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (temp == pro[i].price)
                {
                    fount=1;
                    printf("Product ID: %d\n",pro[i].id);
                    printf("Product Name: %s\n",pro[i].name);
                    printf("Product Quantity: %d\n",pro[i].quantity);
                    printf("Product Price: %f\n",pro[i].price);
                    printf("\n");
                }
                i++;
            }
            if (fount==0)
            {
                printf("Product not found\n");
            }
                break;
            
            default:
                printf("Invalid choice\n");
                break;
            }
}
void shortpro(struct Product pro[]){
    FILE *ptr = fopen("inventory.txt","r");
    if (ptr == NULL)
    {
        printf("Error in opening file\n");
    }

    int i=0,j=0,choice,and;
    struct Product temp[100];
    struct Product t;
    while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF){
        temp[i]=pro[i];
        i++;
    }
    int count = i;
    printf("1. Sort By ID\n");
    printf("2. Sort By Quantity\n");
    printf("3. Sort By Price\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
    case 1:
        printf("1.Ascending Order\n");
        printf("2.Descending Order\n");
        printf("Enter Your Choice: ");
        scanf("%d", &and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int  j = i+1; j < count; j++)
                {
                    if (temp[i].id > temp[j].id)
                    {
                        t = temp[i];
                        temp[i] = temp[j];
                        temp[j] = t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int  j = i+1; j < count; j++)
                {
                    if (temp[i].id < temp[j].id)
                    {
                        t = temp[i];
                        temp[i] = temp[j];
                        temp[j] = t;
                    }
                }
            }
        }
        else{
            printf("Invalid choice\n");
        }

        for (int i = 0; i < count; i++)
        {
            printf("%d\t%s\t%d\t%f\n",temp[i].id,temp[i].name,temp[i].quantity,temp[i].price);
        }
        break;

    case 2:
        printf("1.Ascending Order\n");
        printf("2.Descending Order\n");
        printf("Enter Your Choice: ");
        scanf("%d", &and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int  j = i+1; j < count; j++)
                {
                    if (temp[i].quantity > temp[j].quantity)
                    {
                        t = temp[i];
                        temp[i] = temp[j];
                        temp[j] = t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int  j = i+1; j < count; j++)
                {
                    if (temp[i].quantity < temp[j].quantity)
                    {
                        t = temp[i];
                        temp[i] = temp[j];
                        temp[j] = t;
                    }
                }
            }
        }
        else{
            printf("Invalid choice\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%s\t%d\t%f\n",temp[i].id,temp[i].name,temp[i].quantity,temp[i].price);
        }
        break;

    case 3:
    printf("1.Ascending Order\n");
    printf("2.Descending Order\n");
    printf("Enter Your Choice: ");
    scanf("%d", &and);

    if (and==1)
    {
        for (int i = 0; i < count; i++)
        {
            for (int  j = i+1; j < count; j++)
            {
                if (temp[i].price > temp[j].price)
                {
                    t = temp[i];
                    temp[i] = temp[j];
                    temp[j] = t;
                }
            }
        }
    }
    else if (and==2)
    {
        for (int i = 0; i < count; i++)
        {
            for (int  j = i+1; j < count; j++)
            {
                if (temp[i].price < temp[j].price)
                {
                    t = temp[i];
                    temp[i] = temp[j];
                    temp[j] = t;
                }
            }
        }
    }
    else{
        printf("Invalid choice\n");
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t%f\n",temp[i].id,temp[i].name,temp[i].quantity,temp[i].price);
    }
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

}

#include<stdio.h>
#include<string.h>
struct date {
    int day;
    int month;
    int year;
};
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
struct selling {
    int sellid;
    struct date selldate;
    char cutname[50];
    char Proname[50];
    int paymenttype;
    int quantity;
    float price;
    int total;
};
struct purchase {
    int purchaseid;
    struct date purchasedate;
    char name[50];
    char Proname[50];
    int paymenttype;
    int quantity;
    float price;
    int total;
};
void addpro(struct Product [],int);
void viewpro(struct Product [],int );
void updatepro(struct Product [],int );
void deletepro(struct Product [],int );
void searchpro(struct Product [],int );
void shortpro(struct Product []);

void addsell(struct selling [],struct Product [],int);
void viewsell(struct selling [],int );
void updatesell(struct selling [], struct Product [], int number);
void deletesell(struct selling [], struct Product [],int );
void searchsell(struct selling [],int );
void shortsell(struct selling []);

void addpur(struct purchase [],struct Product [],int);
void viewpur(struct purchase [],int );
void updatepur(struct purchase [], struct Product [],int );
void deletepur(struct purchase [], struct Product [],int );
void searchpur(struct purchase [],int );
void shortpur(struct purchase []);

void viewinventory(struct Product []);
void viewsales(struct selling []);
void viewpurchase(struct purchase []);
void profitandloss(struct Product [],struct selling [],struct purchase []);

int main(){
    struct selling sell[100];
    struct purchase pur[100];
    struct Product pro[100];
    int mainchoice,proidcount=0;  
    int prochoice;
    int sellchoice,sellidcount=0;
    int purchoice,puridcount=0;
    int repchoice,repcount=0;
    do
    {
        printf("\nInventory Management System\n");
        printf("1.inventory\n");
        printf("2.selling\n");
        printf("3.purchesh\n");
        printf("4.reports\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainchoice);
        switch (mainchoice)
        {
        case 1:
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
                    scanf("%d", &prochoice);
            
                    switch (prochoice)
                    {
                    case 1:
                    addpro(pro,proidcount);
                    proidcount++;
                        break;
                    
                    case 2:
                    viewpro(pro,proidcount);
                        break;
            
                    case 3:
                    updatepro(pro,proidcount);
                        break;  
            
                    case 4:
                    deletepro(pro,proidcount);
                    proidcount--;
                        break;
            
                    case 5:       
                    searchpro(pro,proidcount);    
                        break;
            
                    case 6:
                        shortpro(pro);
                        break;

                    case 7:
                        printf("Exiting the program\n");
                        break;
                    
                    default:
                        printf("Invalid choice\n"); 
                        break;
                    }
            
                } while (prochoice != 7);

            break;

        case 2:   
            do
            {
                printf("\nInventory Management System\n");
                printf("1. Mack Entry\n");
                printf("2. View Sale Transaction\n");
                printf("3. Update Sale Transaction\n");
                printf("4. Delete Sale Transaction\n");
                printf("5. Search Sale Transaction\n");
                printf("6. Short Sale Transaction\n");
                printf("7. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &sellchoice);
        
                switch (sellchoice)
                {
                case 1:
                addsell(sell,pro,sellidcount);
                sellidcount++;
                    break;
                
                case 2:
                viewsell(sell,sellidcount);
                    break;
        
                case 3:
                updatesell(sell,pro,sellidcount);
                    break;  
        
                case 4:
                deletesell(sell,pro,sellidcount);
                sellidcount--;
                    break;
        
                case 5:       
                searchsell(sell,sellidcount);    
                    break;

                case 6:
                shortsell(sell);
                    break;
        
                case 7:
                    printf("Exiting the program\n");
                    break;
                
                default:
                    printf("Invalid choice\n"); 
                    break;
                }
        
            } while (sellchoice != 7);

            break;

        case 3:
            do
            {
                printf("\nInventory Management System\n");
                printf("1. Mack Entry\n");
                printf("2. View purchase Transaction\n");
                printf("3. Update purchase Transaction\n");
                printf("4. Delete purchase Transaction\n");
                printf("5. Search purchase Transaction\n");
                printf("6. Short purchase Transaction\n");
                printf("7. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &purchoice);
        
                switch (purchoice)
                {
                case 1:
                addpur(pur,pro,puridcount);
                proidcount++;
                    break;
                
                case 2:
                viewpur(pur,puridcount);
                    break;
        
                case 3:
                updatepur(pur,pro,puridcount);
                    break;  
        
                case 4:
                deletepur(pur,pro,puridcount);
                puridcount--;
                    break;
        
                case 5:       
                searchpur(pur,puridcount);    
                    break;

                case 6:
                shortpur(pur);
                    break;
        
                case 7:
                    printf("Exiting the program\n");
                    break;
                
                default:
                    printf("Invalid choice\n"); 
                    break;
                }
        
            } while (purchoice != 7);

            break;

        case 4:
            do
            {
                printf("1. View All Inventory Items\n");
                printf("2. View Sales Report\n");
                printf("3. View Purchase Report\n");
                printf("4. Profit and Loss\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &repchoice);

                switch (repchoice)
                {
                case 1:
                    viewinventory(pro);
                    break;

                case 2:
                    viewsales(sell);
                    break;

                case 3:
                    viewpurchase(pur);
                    break;

                case 4:
                    profitandloss(pro,sell,pur);
                    break;

                case 5:
                    printf("Exiting the program\n");
                    break;
                
                default:
                    printf("Invalid choice\n"); 
                    break;
                }

            } while (repchoice !=5);
            
            break;

        case 5:
            printf("Exiting the program\n");
            break;
    
        default:
            break;
 }
    } while (mainchoice!=5);
    

    
    
    return 0;
}

//-------------------------inventory-------------------------

void addpro(struct Product pro[],int number){
    FILE *ptr = fopen("inventory.txt", "a");
    printf("Enter Product ID: ");
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
    fclose(ptr);
}

//-------------------------selling-------------------------

void addsell(struct selling sell[], struct Product pro[], int number) {
    FILE *ptr = fopen("selling.txt", "a");
    FILE *ptr1 = fopen("inventory.txt", "r");
    FILE *ptr2 = fopen("temp.txt", "w");

    printf("Enter Selling ID : ");
    scanf("%d", &sell[number].sellid);
    printf("Enter Selling Date (day month year): ");
    scanf("%d %d %d", &sell[number].selldate.day, &sell[number].selldate.month, &sell[number].selldate.year);
    printf("Enter customer Name: ");
    scanf("%s", sell[number].cutname);
    printf("Enter Product Name: ");
    scanf("%s", sell[number].Proname);
    printf("1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter Payment Type: ");
    scanf("%d", &sell[number].paymenttype);
    printf("Enter Quantity: ");
    scanf("%d", &sell[number].quantity);
    printf("Enter Price: ");
    scanf("%f", &sell[number].price);
    sell[number].total = sell[number].quantity * sell[number].price;
    printf("Total: %d\n", sell[number].total);
    printf("Product added successfully\n");
    fprintf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n", sell[number].sellid, sell[number].selldate.day, sell[number].selldate.month, sell[number].selldate.year, sell[number].cutname, sell[number].Proname, sell[number].paymenttype, sell[number].quantity, sell[number].price, sell[number].total);

    int found = 0;
    int i = 0;
    while (fscanf(ptr1, "%d\t%s\t%d\t%f\n", &pro[i].id, pro[i].name, &pro[i].quantity, &pro[i].price) != EOF) {
        if (strcmp(pro[i].name, sell[number].Proname) == 0) {
            found = 1;
            if (pro[i].quantity > 0)
            {
                pro[i].quantity -= sell[number].quantity;
            }
            else
            {
                printf("Error: Not enough stock for product %s\n", pro[i].name);
                break;
            }
            fprintf(ptr2, "%d\t%s\t%d\t%f\n", pro[i].id, pro[i].name, pro[i].quantity, pro[i].price);
        } else {
            fprintf(ptr2, "%d\t%s\t%d\t%f\n", pro[i].id, pro[i].name, pro[i].quantity, pro[i].price);
        }
        i++;
    }
    if (found==0) {
        printf("Error: Product %s not found in inventory\n", sell[number].Proname);
    }

    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");
}
void viewsell(struct selling sell[],int number){
    FILE *ptr =fopen("selling.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    
    int i=0;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        printf("Selling ID: %d\n",sell[i].sellid);
        printf("Selling Date: %d\\%d\\%d\n",sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year);
        printf("Customer Name: %s\n",sell[i].cutname);
        printf("Product Name: %s\n",sell[i].Proname);
        printf("1.Cash\n2.Credit\n3.Debit\n4.Online\nPayment Type: %d\n",sell[i].paymenttype);
        printf("Quantity: %d\n",sell[i].quantity);
        printf("Price: %f\n",sell[i].price);
        printf("Total: %d\n",sell[i].total);
        printf("\n");
        i++;
    }

    fclose(ptr);
    
    
}
void updatesell(struct selling sell[], struct Product pro[], int number){
    FILE *ptr =fopen("selling.txt","r");
    FILE *ptr1 =fopen("temp.txt","w");
    FILE *ptr2 =fopen("inventory.txt","r");
    FILE *ptr3 =fopen("temp1.txt","w");
    if (ptr == NULL || ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Error in opening file\n");
    }
    int askid,found=0,i=0,updatechosie,j,oldquantity,err=0;
    char oldnametemp[100];
    printf("Enter the Selling ID to update: ");
    scanf("%d",&askid);
    printf("\n");

    printf("1.Selling ID\n");
    printf("2.Selling Date\n");
    printf("3.Customer Name\n");
    printf("4.Product Name\n");
    printf("5.Payment Type\n");
    printf("6.Quantity\n");
    printf("7.Price\n");
    printf("Enter What you wnat to update\n");
    scanf("%d", &updatechosie);

    switch (updatechosie)
    {
    case 1:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                printf("Enter New sell ID: ");
                scanf("%d", &sell[i].sellid);
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
        break;

    case 2:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                printf("Enter New sell Date: ");
                scanf("%d %d %d", &sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year);
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
        break;

    case 3:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                printf("Enter New Customer Name: ");
                scanf("%s", sell[i].cutname);
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
    {
        printf("Purchase ID not found\n");
    }
        break;

    case 4:
    i=0,found=0,j=0;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        if (askid == sell[i].sellid)
        {
            found=1;
            strcpy(oldnametemp,sell[i].Proname);
            printf("Enter New Product Name: ");
            scanf("%s", sell[i].Proname);
            j=0;
            while (fscanf(ptr2,"%d\t%s\t%d\t%f\n",&pro[j].id,pro[j].name,&pro[j].quantity,&pro[j].price) != EOF)
            {
                if (strcmp(pro[j].name,sell[i].Proname) == 0)
                {
                    if (pro[j].quantity > 0)
                    {
                        pro[j].quantity -= sell[i].quantity;
                    }
                    else if (pro[j].quantity <= 0)
                    {
                        printf("Error: Not enough stock for product %s\n",pro[i].name);
                        err=1;
                        break;
                    }
                    fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                }
                else if (strcmp(pro[j].name,oldnametemp) == 0)
                {
                    pro[j].quantity += sell[i].quantity;
                    fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                }
                else{
                    fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                }
                j++;
            }
            fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
        }
        else{
            fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
        }
        i++;
    }
    if (found==0)
    {
        printf("Purchase ID not found\n");
    }
        break;

    case 5:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                printf("\n1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter New Payment Type: ");
                scanf("%d", &sell[i].paymenttype);
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
        break;

    case 6:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                oldquantity=sell[i].quantity;
                printf("Enter New Quantity: ");
                scanf("%d", &sell[i].quantity);

                j=0;
                    while (fscanf(ptr2,"%d\t%s\t%d\t%f\n",&pro[j].id,pro[j].name,&pro[j].quantity,&pro[j].price) != EOF)
                    {
                        if (strcmp(pro[j].name,sell[i].Proname) == 0)
                        {
                            if (pro[j].quantity > 0)
                            {
                                pro[j].quantity += oldquantity;
                                pro[j].quantity -= sell[i].quantity;
                            }
                            else if (pro[j].quantity <= 0)
                            {
                                printf("Error: Not enough stock for product %s\n",pro[i].name);
                                err=1;
                                break;
                            }
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        else{
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        j++;
                    }

                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
        break;

    case 7:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
        {
            if (askid == sell[i].sellid)
            {
                found=1;
                printf("Enter New Price: ");
                scanf("%d", &sell[i].price);
                sell[i].total = sell[i].quantity * sell[i].price;
                printf("Total: %d\n", sell[i].total);
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }

    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    if (err=0 && (updatechosie==4 || updatechosie==6))
    {
        remove("inventory.txt");
        rename("temp1.txt","inventory.txt");
    }
    else{
        remove("temp1.txt");
    }
    remove("selling.txt");
    rename("temp.txt","selling.txt");
}
void deletesell(struct selling sell[],struct Product pro[],int number){
    FILE *ptr1 =fopen("selling.txt","r");
    FILE *ptr2 = fopen("temp.txt","w");
    FILE *ptr3 = fopen("inventory.txt","r");
    FILE *ptr4 = fopen("temp1.txt","w");
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,serid,found=0;
    printf("Enter the selling ID to delete: ");
    scanf("%d",&serid);

    while (fscanf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        if (serid == sell[i].sellid)
        {
            found=1;
            while (fscanf(ptr3,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (strcmp(pro[i].name,sell[i].Proname) == 0)
                {
                    pro[i].quantity += sell[i].quantity;
                }
                fprintf(ptr4,"%d\t%s\t%d\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
            }
            printf("Transaction deleted successfully\n");
        }
        else{
            fprintf(ptr2,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
        }
        i++;
    }
    fclose(ptr1);   
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    remove("inventory.txt");
    remove("selling.txt");
    rename("temp1.txt","inventory.txt");
    rename("temp.txt","selling.txt");
}
void searchsell(struct selling sell[],int number){
    FILE *ptr =fopen("selling.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,ser,temp[10],upptemp[5],lowtemp[5],found;
    char tempstr1[100],tempstr2[100];
        printf("\n");
        printf("1.search By Selling ID\n");
        printf("2.search By Selling Date\n");
        printf("3.search By Customer Name\n");
        printf("4.search By Product Name\n");
        printf("5.search By Payment Type\n");
        printf("6.search By Quantity\n");
        printf("7.search By Price\n");
        printf("8.search By Total\n");
        printf("Enter What you wnat to search By :- ");
        scanf("%d", &ser);
        printf("\n");

        switch (ser)
        {
        case 1:
            found=0;
            printf("Enter Selling ID: ");
            scanf("%d",&temp[0]);
            i=0;
            while (fscanf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &sell[i].sellid, &sell[i].selldate.day, &sell[i].selldate.month, &sell[i].selldate.year, sell[i].cutname, sell[i].Proname, &sell[i].paymenttype, &sell[i].quantity, &sell[i].price, &sell[i].total) != EOF)
            {
                if (temp[0]==sell[i].sellid)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;
            
        case 2:
            found=0;
            printf("Enter Selling Date (day month year): ");
            scanf("%d %d %d", &temp[1],&temp[2],&temp[3]);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (temp[1] == sell[i].selldate.day && (temp[2] == sell[i].selldate.month && temp[3] == sell[i].selldate.year))
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;
        
        case 3:
            found=0;
            printf("Enter Customer Name: ");
            scanf("%s",tempstr1);
            i=0;
            while(fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (strcmp(tempstr1,sell[i].cutname)==0)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 4:
            found=0;
            printf("Enter Product Name: ");
            scanf("%s",tempstr2);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (strcmp(tempstr2,sell[i].Proname)==0)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            break;

        case 5:
            found=0;
            printf("\n1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter Payment Type: ");
            scanf("%d", &temp[4]);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (temp[4]==sell[i].paymenttype)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;
        
        case 6:
            found=0;
            printf("Enter Quantity Upper and Lower Rang: ");
            scanf("%d %d", &upptemp[0], &lowtemp[0]);
            i=0;    
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (upptemp[0] >= sell[i].quantity && lowtemp[0] <= sell[i].quantity)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 7:
        found=0;
            printf("Enter Price Upper and Lower Rang: ");
            scanf("%d %d", &upptemp[1], &lowtemp[1]);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (upptemp[1] >= sell[i].price && lowtemp[1] <= sell[i].price)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 8:
            found=0;
            printf("Enter Total Upper and Lower Rang: ");
            scanf("%d %d", &upptemp[2], &lowtemp[2]);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
            {
                if (upptemp[2] >= sell[i].total && lowtemp[2] <= sell[i].total)
                {
                    printf("\n");
                    printf("Selling ID: %d\n", sell[i].sellid);
                    printf("Selling Date: %d\\%d\\%d\n", sell[i].selldate.day, sell[i].selldate.month, sell[i].selldate.year);
                    printf("Customer Name: %s\n", sell[i].cutname);
                    printf("Product Name: %s\n", sell[i].Proname);
                    printf("Payment Type: %d\n", sell[i].paymenttype);
                    printf("Quantity: %d\n", sell[i].quantity);
                    printf("Price: %f\n", sell[i].price);
                    printf("Total: %d\n", sell[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

    fclose(ptr);

    
}
void shortsell(struct selling sell[]){
    FILE *ptr =fopen("selling.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,j=0,choise,and;
    struct selling temp[100];
    struct selling t;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        temp[i]=sell[i];
        i++;
    }
    int count=i;
    printf("1. Sort by Selling ID\n");
    printf("2. Sort by Quantity\n");
    printf("3. Sort by Price\n");
    printf("4. Sort by Total\n");
    printf("Enter your choise: ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].sellid>temp[j].sellid)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].sellid<temp[j].sellid)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].sellid,temp[i].selldate.day,temp[i].selldate.month,temp[i].selldate.year,temp[i].cutname,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }

        break;

    case 2:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].quantity>temp[j].quantity)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].quantity<temp[j].quantity)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].sellid,temp[i].selldate.day,temp[i].selldate.month,temp[i].selldate.year,temp[i].cutname,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;

    case 3:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].price>temp[j].price)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].price<temp[j].price)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].sellid,temp[i].selldate.day,temp[i].selldate.month,temp[i].selldate.year,temp[i].cutname,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;

    case 4:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].total>temp[j].total)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].total<temp[j].total)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].sellid,temp[i].selldate.day,temp[i].selldate.month,temp[i].selldate.year,temp[i].cutname,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;
    
    default:
    printf("Invalid choice\n");
        break;
    }
    fclose(ptr);
}


//-------------------------purchase-------------------------


void addpur(struct purchase purchase[],struct Product pro[],int number){
    FILE *ptr = fopen("purchase.txt", "a");
    FILE *ptr1 = fopen("inventory.txt", "r");
    FILE *ptr2 = fopen("temp.txt", "w");
    printf("Enter Purchase ID: ");
    scanf("%d", &purchase[number].purchaseid);
    printf("Enter Purchase Date (day month year): ");
    scanf("%d %d %d", &purchase[number].purchasedate.day, &purchase[number].purchasedate.month, &purchase[number].purchasedate.year);
    printf("Enter Name: ");
    scanf("%s", purchase[number].name);
    printf("Enter Product Name: ");
    scanf("%s", purchase[number].Proname);
    printf("1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter Payment Type: ");
    scanf("%d", &purchase[number].paymenttype);
    printf("Enter Quantity: ");
    scanf("%d", &purchase[number].quantity);
    printf("Enter Price: ");
    scanf("%f", &purchase[number].price);
    purchase[number].total = purchase[number].quantity * purchase[number].price;
    printf("Total: %d\n", purchase[number].total);
    printf("Product added successfully\n");
    fprintf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n", purchase[number].purchaseid, purchase[number].purchasedate.day, purchase[number].purchasedate.month, purchase[number].purchasedate.year, purchase[number].name, purchase[number].Proname, purchase[number].paymenttype, purchase[number].quantity, purchase[number].price, purchase[number].total);

    int found = 0;
    int i = 0;
    while (fscanf(ptr1, "%d\t%s\t%d\t%f\n", &pro[i].id, pro[i].name, &pro[i].quantity, &pro[i].price) != EOF) {
        if (strcmp(pro[i].name, purchase[number].Proname) == 0) {
            found = 1;
            pro[i].quantity += purchase[number].quantity;
            fprintf(ptr2, "%d\t%s\t%d\t%f\n", pro[i].id, pro[i].name, pro[i].quantity, pro[i].price);
        } else {
            fprintf(ptr2, "%d\t%s\t%d\t%f\n", pro[i].id, pro[i].name, pro[i].quantity, pro[i].price);
        }
        i++;
    }
    if (found==0) {
        printf("Error: Product %s not found in inventory\n", purchase[number].Proname);
    }

    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");
}
void viewpur(struct purchase purchase[],int number){
    FILE *ptr =fopen("purchase.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
    {
        printf("\n");
        printf("Purchase ID: %d\n",purchase[i].purchaseid);
        printf("Purchase Date: %d\\%d\\%d\n",purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year);
        printf("Customer Name: %s\n",purchase[i].name);
        printf("Product Name: %s\n",purchase[i].Proname);
        printf("1.Cash\n2.Credit\n3.Debit\n4.Online\nPayment Type: %d\n",purchase[i].paymenttype);
        printf("Quantity: %d\n",purchase[i].quantity);
        printf("Price: %f\n",purchase[i].price);
        printf("Total: %d\n",purchase[i].total);
        printf("\n");
        i++;
    }
    fclose(ptr);
}
void updatepur(struct purchase purchase[],struct Product pro[],int number){

    FILE *ptr =fopen("purchase.txt","r");
    FILE *ptr1 = fopen("temp.txt","w");
    FILE *ptr2 = fopen("inventory.txt","r");
    FILE *ptr3 = fopen("temp1.txt","w");
    if (ptr == NULL || ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Error in opening file\n");
    }
    int askid,choise,i,found,j,oldquantity,err=0;
    char temp[100],oldnametemp[100];
    printf("Enter the Purchase ID to update: ");
    scanf("%d", &askid);
    printf("\n");
        printf("1.Purchase ID\n");
        printf("2.Purchase Date\n");
        printf("3.Name\n");
        printf("4.Product Name\n");
        printf("5.Payment Type\n");
        printf("6.Quantity\n");
        printf("7.Price\n");
        printf("Enter What you want to update: ");
        scanf("%d", &choise);
        
        switch (choise)
        {
        case 1:
            i=0,found=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    printf("Enter New Purchase ID: ");
                    scanf("%d", &purchase[i].purchaseid);
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                else{
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                i++;
            }
            if (found==0)
            {
                printf("Purchase ID not found\n");
            }
            break;

        case 2:
            i=0,found=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    printf("Enter New Purchase Date(Day\\Month\\Year): ");
                    scanf("%d %d %d", &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year);
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                else{
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                i++;
            }
            if (found==0)
            {
                printf("Purchase ID not found\n");
            }
            break;

        case 3:
            i=0,found=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    printf("Enter New Name: ");
                    scanf("%s", purchase[i].name);
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                else{
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                i++;
            }
            if (found==0)
            {
                printf("Purchase ID not found\n");
            }
            break;
        
        case 4:
            i=0,found=0,j=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    strcpy(oldnametemp,purchase[i].name);
                    printf("Enter New Product Name: ");
                    scanf("%s", purchase[i].Proname);
                    j=0;
                    while (fscanf(ptr2,"%d\t%s\t%d\t%f\n",&pro[j].id,pro[j].name,&pro[j].quantity,&pro[j].price) != EOF)
                    {
                        if (strcmp(pro[j].name,purchase[i].Proname) == 0)
                        {
                            if (pro[j].quantity > 0)
                            {
                                pro[j].quantity += purchase[i].quantity;
                            }
                            else if (pro[j].quantity <= 0)
                            {
                                printf("Error: Not enough stock for product %s\n",pro[i].name);
                                err=1;
                                break;
                            }
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        else if (strcmp(pro[j].name,oldnametemp) == 0)
                        {
                            pro[j].quantity -= purchase[i].quantity;
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        else{
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        j++;
                    }
                    fprintf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total);
                }
                else{
                    fprintf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total);
                }
                i++;
            }
            if (found==0)
        {
            printf("Purchase ID not found\n");
        }
            break;
        
        case 5:
            i=0,found=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    printf("\n1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter New Payment type : ");
                    scanf("%d", &purchase[i].paymenttype);
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                else{
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                i++;
            }
            if (found==0)
            {
                printf("Purchase ID not found\n");
            }
            break;
        
        case 6:
        i=0,found=0;
        while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
        {
            if (askid == purchase[i].purchaseid)
            {
                found=1;
                oldquantity=purchase[i].quantity;
                printf("Enter New Quantity : ");
                scanf("%d", &purchase[i].quantity);
                j=0;
                    while (fscanf(ptr2,"%d\t%s\t%d\t%f\n",&pro[j].id,pro[j].name,&pro[j].quantity,&pro[j].price) != EOF)
                    {
                        if (strcmp(pro[j].name,purchase[i].Proname) == 0)
                        {
                            if (pro[j].quantity > 0)
                            {
                                pro[j].quantity -= oldquantity;
                                pro[j].quantity += purchase[i].quantity;
                            }
                            else if (pro[j].quantity <= 0)
                            {
                                printf("Error: Not enough stock for product %s\n",pro[i].name);
                                err=1;
                                break;
                            }
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        else{
                            fprintf(ptr3,"%d\t%s\t%d\t%f\n",pro[j].id,pro[j].name,pro[j].quantity,pro[j].price);
                        }
                        j++;
                    }
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
            }
            else{
                fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
            }
            i++;
        }
        if (found==0)
        {
            printf("Purchase ID not found\n");
        }
            break;
        
        case 7:
            i=0,found=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
            {
                if (askid == purchase[i].purchaseid)
                {
                    found=1;
                    printf("Enter New price : ");
                    scanf("%d", &purchase[i].price);
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                else{
                    fprintf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
                }
                i++;
            }
            if (found==0)
            {
                printf("Purchase ID not found\n");
            }
            break;
        
        default:
            printf("Invalid choice\n");
            break;
        }

    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    if ((choise==4 || choise==6) && err==0)
    {
        remove("inventory.txt");
        rename("temp1.txt","inventory.txt");
    }
    else{
        remove("temp1.txt");
    }
    remove("purchase.txt");
    rename("temp.txt","purchase.txt");
}
void deletepur(struct purchase purchase[],struct Product pro[],int number){
    FILE *ptr1 =fopen("purchase.txt","r");
    FILE *ptr2 = fopen("temp.txt","w");
    FILE *ptr3 = fopen("inventory.txt","r");
    FILE *ptr4 = fopen("temp1.txt","w");
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL || ptr4 == NULL) 
    {
        printf("Error in opening file\n");
    }
    int i=0,serid,found=0;
    printf("Enter the Purchase ID to delete: ");
    scanf("%d",&serid);

    while (fscanf(ptr1,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
    {
        if (serid == purchase[i].purchaseid)
        {
            found=1;
            while (fscanf(ptr3,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) != EOF)
            {
                if (strcmp(pro[i].name,purchase[i].Proname) == 0)
                {
                    pro[i].quantity -= purchase[i].quantity;
                }
                fprintf(ptr4,"%d\t%s\t%d\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
            }
            printf("Transaction deleted successfully\n");
        }
        else{
            fprintf(ptr2,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
        }
        i++;
    }
    fclose(ptr1);   
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    remove("inventory.txt");
    remove("purchase.txt");
    rename("temp1.txt","inventory.txt");
    rename("temp.txt","purchase.txt");
}
void searchpur(struct purchase purchase[],int number){
    FILE *ptr =fopen("purchase.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,ser,temp1,temp2,temp3,temp4,temp5,upptemp1,lowtemp1,upptemp2,lowtemp2,upptemp3,lowtemp3,found=0;
    char tempstr1[100], tempstr2[100],tempstr3[100];

        printf("\n");
        printf("1.search By Purchase ID\n");
        printf("2.search By Purchase Date\n");
        printf("3.search By Name\n");
        printf("4.search By Product Name\n");
        printf("5.search By Payment Type\n");
        printf("6.search By Quantity\n");
        printf("7.search By Price\n");
        printf("8.search By Total\n");
        printf("Enter What you wnat to search By :- ");
        scanf("%d", &ser);
        printf("\n");

        switch (ser)
        {
        case 1:
        found=0;
            printf("Enter Purchase ID: ");
            scanf("%d",&temp1);
            i=0;
            while (fscanf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (temp1==purchase[i].purchaseid)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            break;

        case 2:
        found=0;
            printf("Enter Purchase Date (day month year): ");
            scanf("%d %d %d",&temp2,&temp3,&temp4);
            i=0;
            while (fscanf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (temp2 == purchase[i].purchasedate.day && (temp3 == purchase[i].purchasedate.month && temp4 == purchase[i].purchasedate.year))
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            break;

            case 3:
            found = 0;
                printf("Enter Name: ");
                scanf("%s",tempstr1);
                i = 0;
                while (fscanf(ptr, "%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF) {
                    if (strcmp(tempstr1, purchase[i].name)==0) {
                        printf("\n");
                        printf("Purchase ID: %d\n", purchase[i].purchaseid);
                        printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                        printf("Customer Name: %s\n", purchase[i].name);
                        printf("Product Name: %s\n", purchase[i].Proname);
                        printf("Payment Type: %d\n", purchase[i].paymenttype);
                        printf("Quantity: %d\n", purchase[i].quantity);
                        printf("Price: %f\n", purchase[i].price);
                        printf("Total: %d\n", purchase[i].total);
                        printf("\n");
                        found = 1;
                    }
                    i++;
                }
                if (found==0) {
                    printf("Product not found\n");
                }
            break;

        case 4:
        found = 0;
            printf("Enter Product Name: ");
            scanf("%s",tempstr2);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (strcmp(tempstr2, purchase[i].Proname)==0)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found = 1;
                }
                if (found==0)
                {
                    printf("Product not found\n");
                }
                i++;
            }
            break;

        case 5:
            found=0;
            printf("1.Cash\n2.Credit\n3.Debit\n4.Online\nEnter Payment Type: ");
            scanf("%d", &temp5);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (temp5 == purchase[i].paymenttype)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 6:
        found=0;
            printf("Enter Quantity upper And lower Range : ");
            scanf("%d %d", &upptemp1,&lowtemp1);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (upptemp1 >= purchase[i].quantity && lowtemp1 <= purchase[i].quantity)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            } 
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 7:
            found=0;    
            printf("Enter Price upper And lower Range : ");
            scanf("%d %d", &upptemp2, &lowtemp2);
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (upptemp2 >= purchase[i].price && lowtemp2 <= purchase[i].price)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;

        case 8:
            found=0;
            printf("Enter Total upper And lower Range : ");
            scanf("%d %d", &upptemp3, &lowtemp3);
            i=0;
            while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d", &purchase[i].purchaseid, &purchase[i].purchasedate.day, &purchase[i].purchasedate.month, &purchase[i].purchasedate.year, purchase[i].name, purchase[i].Proname, &purchase[i].paymenttype, &purchase[i].quantity, &purchase[i].price, &purchase[i].total) != EOF)
            {
                if (upptemp3 >= purchase[i].total && lowtemp3 <= purchase[i].total)
                {
                    printf("\n");
                    printf("Purchase ID: %d\n", purchase[i].purchaseid);
                    printf("Purchase Date: %d\\%d\\%d\n", purchase[i].purchasedate.day, purchase[i].purchasedate.month, purchase[i].purchasedate.year);
                    printf("Customer Name: %s\n", purchase[i].name);
                    printf("Product Name: %s\n", purchase[i].Proname);
                    printf("Payment Type: %d\n", purchase[i].paymenttype);
                    printf("Quantity: %d\n", purchase[i].quantity);
                    printf("Price: %f\n", purchase[i].price);
                    printf("Total: %d\n", purchase[i].total);
                    printf("\n");
                    found=1;
                }
                i++;
            }
            if (found==0)
            {
                printf("Product not found\n");
            }
            
            break;
        
        default:
            printf("Invalid choice\n");
            break;
        }
}
void shortpur(struct purchase purchase[]){
    FILE *ptr = fopen("purchase.txt","r");
    if (ptr != NULL)
    {
        printf("Error in opening file\n");
    }
    int i=0,j=0,choise,and;
    struct purchase temp[100];
    struct purchase t;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
    {
        temp[i]=purchase[i];
        i++;
    }
    int count=i;
    printf("1. Sort by Purchase ID\n");
    printf("2. Sort by Quantity\n");
    printf("3. Sort by Price\n");
    printf("4. Sort by Total\n");
    printf("Enter your choise: ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].purchaseid>temp[j].purchaseid)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].purchaseid<temp[j].purchaseid)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].purchaseid,temp[i].purchasedate.day,temp[i].purchasedate.month,temp[i].purchasedate.year,temp[i].name,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }

        break;

    case 2:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].quantity>temp[j].quantity)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].quantity<temp[j].quantity)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].purchaseid,temp[i].purchasedate.day,temp[i].purchasedate.month,temp[i].purchasedate.year,temp[i].name,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;

    case 3:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].price>temp[j].price)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].price<temp[j].price)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].purchaseid,temp[i].purchasedate.day,temp[i].purchasedate.month,temp[i].purchasedate.year,temp[i].name,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;

    case 4:
        printf("1. Ascending Order\n");
        printf("2. Descending Order\n");
        printf("Enter your choise: ");
        scanf("%d",&and);

        if (and==1)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].total>temp[j].total)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else if (and==2)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (temp[i].total<temp[j].total)
                    {
                        t=temp[i];
                        temp[i]=temp[j];
                        temp[j]=t;
                    }
                }
            }
        }
        else{
            printf("Invalid choise\n");
        }
        
        for (int i = 0; i < count; i++)
        {
            printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",temp[i].purchaseid,temp[i].purchasedate.day,temp[i].purchasedate.month,temp[i].purchasedate.year,temp[i].name,temp[i].Proname,temp[i].paymenttype,temp[i].quantity,temp[i].price,temp[i].total);
        }
        break;
    
    default:
    printf("Invalid choice\n");
        break;
    }
    fclose(ptr);
}


//------------------------report--------------------------

void viewinventory(struct Product pro[]){
    FILE *ptr = fopen("inventory.txt","r");
    if(ptr == NULL){
        printf("Error in opening file\n");
    }
    for (int i = 0; i < 100; i++)
    {
        printf("-");
    }
    printf("\nid\tname\tquantity\tprice\n");
    for (int i = 0; i < 100; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\n");
    int i=0;
    while (fscanf(ptr,"%d\t%s\t%d\t%f\n",&pro[i].id,pro[i].name,&pro[i].quantity,&pro[i].price) !=EOF)
    {
        printf("%d\t%s\t%d\t\t%f\n",pro[i].id,pro[i].name,pro[i].quantity,pro[i].price);
    }
    printf("\n");
    fclose(ptr);
}
void viewsales(struct selling sell[]){
    FILE *ptr = fopen("selling.txt","r");
    if(ptr == NULL){
        printf("Error in opening file\n");
    }
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\nsellid\tselldate\tcutname\tProname\tpaymenttype\tquantity\tprice\t\ttotal\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\n");
    int i=0;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        printf("%d\t%d\\%d\\%d\t%s\t%s\t%d\t\t%d\t\t%f\t%d\n",sell[i].sellid,sell[i].selldate.day,sell[i].selldate.month,sell[i].selldate.year,sell[i].cutname,sell[i].Proname,sell[i].paymenttype,sell[i].quantity,sell[i].price,sell[i].total);
    }
    printf("\n");
    fclose(ptr);
}
void viewpurchase(struct purchase purchase[]){
    FILE *ptr = fopen("purchase.txt","r");
    if (ptr == NULL)
    {
        printf("Error in opening file\n");
    }
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\npurchaseid\tpurchasedate\tname\tProname\tpaymenttype\tquantity\tprice\t\ttotal\n");
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\n");
    
    int i=0;
    while (fscanf(ptr,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
    {
        printf("%d\t\t%d\\%d\\%d\t%s\t%s\t%d\t\t%d\t\t%f\t%d\n",purchase[i].purchaseid,purchase[i].purchasedate.day,purchase[i].purchasedate.month,purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,purchase[i].paymenttype,purchase[i].quantity,purchase[i].price,purchase[i].total);
        i++;
    };

    printf("\n");
    fclose(ptr);
}
void profitandloss(struct Product pro[],struct selling sell[],struct purchase purchase[]){
    // 1.Cash\n2.Credit\n3.Debit\n4.Online\n
    FILE *ptr1 = fopen("inventory.txt","r");
    FILE *ptr2 = fopen("purchase.txt","r");
    FILE *ptr3 = fopen("selling.txt","r");
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Error in opening file\n");
    }

    int totlesell[4],totlepur[4];
    totlesell[0]=0,totlesell[1]=0,totlesell[2]=0,totlesell[3]=0;
    totlepur[0]=0,totlepur[1]=0,totlepur[2]=0,totlepur[3]=0;
    int i=0;

    for(int i=0;i<120;i++) printf("-");
    printf("\nProfit and Loss\n");
    for(int i=0;i<120;i++) printf("-");
    
    printf("\npurchase : ");
    while (fscanf(ptr2,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&purchase[i].purchaseid,&purchase[i].purchasedate.day,&purchase[i].purchasedate.month,&purchase[i].purchasedate.year,purchase[i].name,purchase[i].Proname,&purchase[i].paymenttype,&purchase[i].quantity,&purchase[i].price,&purchase[i].total) != EOF)
    {
        if (purchase[i].paymenttype==1)
        {
            totlepur[0]+=purchase[i].total;
        }
        else if (purchase[i].paymenttype==2)
        {
            totlepur[1]+=purchase[i].total;
        }
        else if (purchase[i].paymenttype==2)
        {
            totlepur[2]+=purchase[i].total;
        }
        else if (purchase[i].paymenttype==4)
        {
            totlepur[3]+=purchase[i].total;
        }
        i++;
    }

    printf("\n");
    printf("\n\tTotle Purchase by Cash :- %d",totlepur[0]);
    printf("\n\tTotle Purchase by Credit :- %d",totlepur[1]);
    printf("\n\tTotle Purchase by Debit :- %d",totlepur[2]);
    printf("\n\tTotle Purchase by Online :- %d",totlepur[3]);
    
    printf("\n");
    printf("\nSell : \n");
    while (fscanf(ptr3,"%d\t%d\\%d\\%d\t%s\t%s\t%d\t%d\t%f\t%d\n",&sell[i].sellid,&sell[i].selldate.day,&sell[i].selldate.month,&sell[i].selldate.year,sell[i].cutname,sell[i].Proname,&sell[i].paymenttype,&sell[i].quantity,&sell[i].price,&sell[i].total) != EOF)
    {
        if (sell[i].paymenttype==1)
        {
            totlesell[0]+=sell[i].total;
        }
        else if (sell[i].paymenttype==2)
        {
            totlesell[1]+=sell[i].total;
        }
        else if (sell[i].paymenttype==2)
        {
            totlesell[2]+=sell[i].total;
        }
        else if (sell[i].paymenttype==4)
        {
            totlesell[3]+=sell[i].total;
        }
        i++;
    }

    printf("\n\tTotle Sell by Cash :- %d",totlesell[0]);
    printf("\n\tTotle Sell by Credit :- %d",totlesell[1]);
    printf("\n\tTotle Sell by Debit :- %d",totlesell[2]);
    printf("\n\tTotle Sell by Online :- %d",totlesell[3]);

    
    printf("\n\n");
    
    for(int i=0;i<120;i++) printf("-");
    printf("\nTotle Purchase is :- %d\nTotle Sell is :- %d\nProfit and Loss = %d\n",totlepur[0]+totlepur[1]+totlepur[2]+totlepur[3],totlesell[0]+totlesell[1]+totlesell[2]+totlesell[3],(totlepur[0]+totlepur[1]+totlepur[2]+totlepur[3])-(totlesell[0]+totlesell[1]+totlesell[2]+totlesell[3]));
    for(int i=0;i<120;i++) printf("-");
    printf("\n");

    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
}

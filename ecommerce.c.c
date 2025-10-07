
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a shopping cart node
struct node {
    char name[50];
    int price;
    struct node *next;
};

struct node *head = NULL;

// Function Declarations
void fashion(), women(), traditionalw(), salwars(), western(), sarees(), kanchipuram(), stylish(), accessories(), colour(), jumpsuitsw(), jeansw(), t_shirts();
void kitchen(), dals(), oils(), rice();
void electronics(), mobile(), laptop(), watches();
void createnode(int price, char item[]);
void display_bill();

// Function to create and add items to cart
void createnode(int price, char item[]) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, item);
    newNode->price = price;
    newNode->next = head;
    head = newNode;
    printf("\n%s added to cart!\n\n", item);
}

// Function to select color
void colour() {
    printf("Select colour:\n1. Red 🔴\n2. Blue 🔵\n3. Green 🟢\n4. Yellow 🟡\n5. Orange 🟠\n6. Purple 🟣\n");
    printf("Enter choice: ");
    int col;
    scanf("%d", &col);
}

// *********** Women’s Fashion ***********
void kanchipuram() {
    int price = 8000;
    colour();
    printf("Price of Kanchipuram saree: 8000/- only\nEnter 1 to add to cart: ");
    int x; scanf("%d", &x);
    if (x == 1) createnode(price, "Kanchipuram Saree");
}

void designersaree() {
    int price = 1500;
    colour();
    printf("Price of Designer saree: 1500/- only\nEnter 1 to add to cart: ");
    int x; scanf("%d", &x);
    if (x == 1) createnode(price, "Designer Saree");
}

void banarassaree() {
    int price = 3000;
    colour();
    printf("Price of Banaras saree: 3000/- only\nEnter 1 to add to cart: ");
    int x; scanf("%d", &x);
    if (x == 1) createnode(price, "Banaras Saree");
}

void sarees() {
    int choice;
    while (1) {
        printf("1. Kanchipuram\n2. Designer\n3. Banaras\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: kanchipuram(); break;
            case 2: designersaree(); break;
            case 3: banarassaree(); break;
            case 4: return;
            default: printf("Invalid choice!\n");
        }
    }
}

void traditionalw() {
    int choice;
    while (1) {
        printf("1. Sarees\n2. Kurtis\n3. Lehengas\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: sarees(); break;
            case 2: createnode(2000, "Kurti"); break;
            case 3: createnode(5000, "Lehenga"); break;
            case 4: return;
            default: printf("Invalid choice!\n");
        }
    }
}

void western() {
    int choice;
    while (1) {
        printf("1. Jumpsuits\n2. Jeans\n3. T-Shirts\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: jumpsuitsw(); break;
            case 2: jeansw(); break;
            case 3: t_shirts(); break;
            case 4: return;
            default: printf("Invalid choice!\n");
        }
    }
}

void women() {
    int choice;
    while (1) {
        printf("1. Traditional\n2. Western\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: traditionalw(); break;
            case 2: western(); break;
            case 3: return;
            default: printf("Invalid choice!\n");
        }
    }
}

// *********** Western Clothes ***********
void jumpsuitsw() { int price = 1000; colour(); printf("Price of Jumpsuit: 1000/- only\nEnter 1 to add to cart: "); int x; scanf("%d", &x); if(x==1) createnode(price,"Jumpsuit"); }
void jeansw() { int price = 1500; printf("Price of Jeans: 1500/- only\nEnter 1 to add to cart: "); int x; scanf("%d",&x); if(x==1) createnode(price,"Jeans"); }
void t_shirts() { int price = 800; printf("Price of T-Shirt: 800/- only\nEnter 1 to add to cart: "); int x; scanf("%d",&x); if(x==1) createnode(price,"T-Shirt"); }

// *********** Kitchen ***********
void dals() { int price=79,i,d; printf("Select dal\n1.Red dal\n2.Moong dal\n3.Urad dal\n4.Chana dal\nEnter choice:"); scanf("%d",&d); printf("Enter 1 to add to cart: "); scanf("%d",&i); if(i==1) createnode(price,"Dal"); }
void oils() { int price=120; int i,d; printf("Select oil\n1.Groundnut\n2.Palm\n3.Olive\n4.Sesame\nEnter choice: "); scanf("%d",&d); printf("Enter 1 to add to cart: "); scanf("%d",&i); if(i==1) createnode(price,"Oil"); }
void rice() { int price=99; int i,d; printf("Select rice\n1.Basmati\n2.Sona Masuri\n3.Brown\nEnter choice:"); scanf("%d",&d); printf("Enter 1 to add to cart: "); scanf("%d",&i); if(i==1) createnode(price,"Rice"); }
void kitchen() { int choice; while(1) { printf("1.Dals\n2.Oils\n3.Rice\n4.Exit\nEnter choice: "); scanf("%d",&choice); switch(choice){ case 1: dals(); break; case 2: oils(); break; case 3: rice(); break; case 4: return; default: printf("Invalid choice!\n"); }}}

// *********** Electronics ***********
void mobile() { int price=15000; printf("Mobile Price: 15000/-\nEnter 1 to add to cart: "); int x; scanf("%d",&x); if(x==1) createnode(price,"Mobile"); }
void laptop() { int price=80000; printf("Laptop Price: 80000/-\nEnter 1 to add to cart: "); int x; scanf("%d",&x); if(x==1) createnode(price,"Laptop"); }
void watches() { int price=3000; printf("Watch Price: 3000/-\nEnter 1 to add to cart: "); int x; scanf("%d",&x); if(x==1) createnode(price,"Watch"); }
void electronics() { int choice; while(1) { printf("1.Mobile\n2.Laptop\n3.Watches\n4.Exit\nEnter choice: "); scanf("%d",&choice); switch(choice){ case 1: mobile(); break; case 2: laptop(); break; case 3: watches(); break; case 4: return; default: printf("Invalid choice!\n"); }}}

// *********** Display Bill ***********
void display_bill() {
    if(head==NULL){ printf("Your cart is empty!\n"); return; }
    struct node *temp=head; int total=0, count=1;
    printf("\n**** BILL ****\nS.No\tItem\tPrice\n-----------------------\n");
    while(temp!=NULL){ printf("%d\t%s\t%d/-\n", count, temp->name, temp->price); total+=temp->price; temp=temp->next; count++; }
    printf("-----------------------\nTotal: %d/-\n", total);
}

// *********** Fashion Menu ***********
void fashion() {
    int choice;
    while(1) {
        printf("1.Kitchen\n2.Electronics\n3.Men\n4.Kids\n5.Women\n6.Display Bill\n7.Exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: kitchen(); break;
            case 2: electronics(); break;
            case 3: printf("Men's section not added yet.\n"); break;
            case 4: printf("Kids section not added yet.\n"); break;
            case 5: women(); break;
            case 6: display_bill(); break;
            case 7: return;
            default: printf("Invalid choice!\n");
        }
    }
}

// *********** Main ***********
int main() {
    printf("🛒 WELCOME TO ONLINE SHOPPING 🛒\n");
    fashion();
    printf("🛍 THANK YOU FOR SHOPPING 🛍\n");
    return 0;
}

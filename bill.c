#include <stdio.h>

int main()
{
    int n, i;
    char product[50][50];
    float price[50], total[50];
    int quantity[50];

    float subtotal = 0;
    float gst, grand_total;

    printf("====================================\n");
    printf("        SIMPLE BILLING SYSTEM       \n");
    printf("====================================\n");

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details for Product %d\n", i + 1);

        printf("Enter product name: ");
        scanf("%s", product[i]);

        printf("Enter price: ");
        scanf("%f", &price[i]);

        printf("Enter quantity: ");
        scanf("%d", &quantity[i]);

        // Calculate total for each product
        total[i] = price[i] * quantity[i];

        // Add to subtotal
        subtotal = subtotal + total[i];
    }

    // Calculate GST
    gst = subtotal * 0.05;

    // Calculate final amount
    grand_total = subtotal + gst;

    // Display bill
    printf("\n====================================\n");
    printf("              BILL                  \n");
    printf("====================================\n");

    printf("%-15s %-10s %-8s %-10s\n", "Product", "Price", "Qty", "Total");

    printf("------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%-15s %-10.2f %-8d %-10.2f\n", product[i], price[i], quantity[i], total[i]);
    }

    printf("------------------------------------\n");

    printf("Subtotal       : %.2f\n", subtotal);
    printf("GST (5%%)       : %.2f\n", gst);
    printf("Grand Total    : %.2f\n", grand_total);

    printf("====================================\n");
    printf("        THANK YOU!\n");
    printf("====================================\n");

    return 0;
}

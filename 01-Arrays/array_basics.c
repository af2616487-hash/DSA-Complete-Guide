// ===========================
// ARRAYS - Basics Ke Liye!
// ===========================
// Ye file array ke pehle concept explain karta hai
// Beginner-friendly code with detailed comments

#include <stdio.h>

int main() {
    printf("\n========== ARRAY BASICS TUTORIAL =========\n\n");
    
    // 1. Array kya hota hai?
    // Array = ek hi type ke elements ka collection
    // Sab elements consecutive memory mein store hote hain
    
    // 2. Array declare karna
    int arr[5];  // 5 integers ke liye array
    printf("1. Array declare kiya: int arr[5]\n");
    printf("   Size = 5 elements\n\n");
    
    // 3. Array mein values assign karna
    arr[0] = 10;  // Index 0 par value 10
    arr[1] = 20;  // Index 1 par value 20
    arr[2] = 30;  // Index 2 par value 30
    arr[3] = 40;  // Index 3 par value 40
    arr[4] = 50;  // Index 4 par value 50
    
    printf("2. Array elements assign kiye:\n");
    printf("   arr[0] = 10\n");
    printf("   arr[1] = 20\n");
    printf("   arr[2] = 30\n");
    printf("   arr[3] = 40\n");
    printf("   arr[4] = 50\n\n");
    
    // 4. Array elements print karna
    printf("3. Array elements print:\n   ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // 5. Array ki properties
    printf("4. Array Properties:\n");
    printf("   - Index shuru hota hai 0 se\n");
    printf("   - Array elements continuous memory\n");
    printf("   - Array name = address of first element\n\n");
    
    // 6. Initialization ke samay assign
    int arr2[] = {100, 200, 300, 400};  // Auto size detect
    printf("5. Initialization at declaration:\n   int arr2[] = {100, 200, 300, 400}\n");
    printf("   Elements: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
    
    // 7. Array ka sum
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];  // Sum = 10+20+30+40+50 = 150
    }
    printf("6. Sum of array elements: %d\n", sum);
    
    // 8. Array ka maximum element
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("7. Maximum element: %d\n", max);
    
    // 9. Array ka average
    float avg = (float)sum / 5;
    printf("8. Average of elements: %.2f\n\n", avg);
    
    printf("========== KHATAM! =========\n\n");
    
    return 0;
}

/*
Kya Sikha?
===========
1. Array kaise declare karte hain
2. Elements kaise assign karte hain
3. Loop se elements access kaise karte hain
4. Sum, Max, Average nikalne ka tarika
5. Arrays ke basics clear ho gaye!

Next: Array operations (search, sort, insert, delete)
*/

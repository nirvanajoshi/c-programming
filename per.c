/*wap with two user define functions process data and display data
read two numbers from main function and calculate permutation and combintion 
 using those number and disply the result fro respecterd function*/
 #include <stdio.h>


  int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

  int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}


  int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

        
   
        int perm = permutation(n, r);
        int comb = combination(n, r);

        printf("Permutation P(%d, %d) = %d\n", n, r, perm);
        printf("Combination C(%d, %d) = %d\n", n, r, comb);
    }
    /*How to retunrn multiple values in c in function*/

    


 
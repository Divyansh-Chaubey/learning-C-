# include<iostream>
using namespace std;
int main(){


int pass;
cin>> pass;

if (pass==12341)
{
    cout<<"open";
}

else
{
    cout<<" \nwrong password try again \n";
    cin>> pass;
    if(pass==12341){
        cout<<"open";
    }

    else{
        cout<<"\n wrong password  try again \n";
        cin>>pass;
        if(pass==12341)
        {
            cout<<"open";       
             }

              else{
        cout<<"block";
    }
    }

   
}



    return 0;
}





// import java.util.Scanner;

// public class Calculator {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         System.out.println("Simple Calculator");
//         System.out.println("1. Addition");
//         System.out.println("2. Subtraction");
//         System.out.println("3. Multiplication");
//         System.out.println("4. Division");
//         System.out.println("5. Exit");

//         while (true) {
//             System.out.print("Enter your choice (1-5): ");
//             int choice = scanner.nextInt();

//             if (choice == 5) {
//                 System.out.println("Exiting...");
//                 break;
//             }

//             System.out.print("Enter first number: ");
//             double num1 = scanner.nextDouble();

//             System.out.print("Enter second number: ");
//             double num2 = scanner.nextDouble();

//             switch (choice) {
//                 case 1:
//                     System.out.println("Result: " + (num1 + num2));
//                     break;
//                 case 2:
//                     System.out.println("Result: " + (num1 - num2));
//                     break;
//                 case 3:
//                     System.out.println("Result: " + (num1 * num2));
//                     break;
//                 case 4:
//                     if (num2 != 0) {
//                         System.out.println("Result: " + (num1 / num2));
//                     } else {
//                         System.out.println("Error: Division by zero is not allowed.");
//                     }
//                     break;
//                 default:
//                     System.out.println("Invalid choice. Please try again.");
//             }
//         }

//         scanner.close();
//     }
// }
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>


#include"Classes/Account/Account.h"
#include"Classes/Admin/Admin.h"
#include"Classes/Customer/Customer.h"
#include"Classes/Employee/Employee.h"
#include"Classes/Loan/Loan.h"
#include"Classes/Login/Login.h"
#include"Classes/Transaction/Transaction.h"
#include"Classes/UserInfo/UserInfo.h"




bool authenticateCustomer() {
    std::string username, password;
    int choice;
    
    std::cout << std::endl<< "=== Customer Authentication ===" << std::endl;
    std::cout << "1. Log in" << std::endl;
    std::cout << "2. Sign up" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin>>choice;
    
    switch(choice)
    {
    	case 1:
		    std::cout << std::endl<< "Enter username: ";
		    std::cin >> username;
		    
		    std::cout << "Enter password: ";
		    std::cin >> password;
		    
		    // Perform customer log-in logic here

		    if (username == "customer" && password == "password") {
		        return true;
		    } else {
		        std::cout << std::endl << "Authentication failed. Invalid credentials." <<std::endl<<std::endl<<"Press any button to continue...";
		        return false;
		    }
		    
		case 2:
			//Perform customer sign-up logic here    
			
			return true;
			
		default:
			return false;	
	}
}

bool authenticateAdmin() {
    std::string username, password;
    int choice;
    
    std::cout << std::endl<< "=== Admin Authentication ===" << std::endl;
    std::cout << "1. Log in" << std::endl;
    std::cout << "2. Sign up" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin>>choice;
    
    switch(choice)
    {
    	case 1:
		    std::cout << std::endl << "Enter username: ";
		    std::cin >> username;
		    
		    std::cout << "Enter password: ";
		    std::cin >> password;
		    
		    // Perform Admin log-in logic here

		    if (username == "admin" && password == "password") {
		        return true;
		    } else {
		        std::cout << std::endl << "Authentication failed. Invalid credentials." <<std::endl<<std::endl<<"Press any button to continue...";
		        return false;
		    }
		    
		case 2:
			//Perform Admin sign-up logic here    
			
			return true;	
					
		default:
			return false;	
	}
}

bool authenticateEmployee() {
    std::string username, password;
    int choice;
    
    std::cout << std::endl<< "=== Employee Authentication ===" << std::endl;
    std::cout << "1. Log in" << std::endl;
    std::cout << "2. Sign up" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin>>choice;
    
    switch(choice)
    {
    	case 1:
		    std::cout << std::endl << "Enter username: ";
		    std::cin >> username;
		    
		    std::cout << "Enter password: ";
		    std::cin >> password;
		    
		    // Perform employee log-in logic here

		    if (username == "employee" && password == "password") {
		        return true;
		    } else {
		        std::cout << std::endl << "Authentication failed. Invalid credentials." <<std::endl<<std::endl<<"Press any button to continue...";
		        return false;
		    }
		    
		case 2:
			//Perform employee sign-up logic here    
			
			return true;
					
		default:
			return false;		
	}
}

// Function to display the main menu
void displayMainMenu() {
    system("CLS");
    std::cout << "=== Bank Management System ===" << std::endl;
    std::cout << "1. Customer Section" << std::endl;
    std::cout << "2. Management Section" << std::endl;
    std::cout << "3. Employee Section" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "==============================" << std::endl;
}

// Function to handle the customer menu selection
void handleCustomerMenuSelection() {
    if (authenticateCustomer())
	{ 
		int choice;
	    while (true) {
	        system("CLS");
	        std::cout << "=== Customer Menu ===" << std::endl;
	        std::cout << "1. View accessible accounts" << std::endl;
	        std::cout << "2. Perform transaction" << std::endl;
	        std::cout << "3. Request account creation or deletion" << std::endl;
	        std::cout << "4. View account transactions" << std::endl;
	        std::cout << "5. Return to Main Menu" << std::endl;
	        std::cout << "=====================" << std::endl;
	        std::cout << "Enter your choice: ";
	        std::cin >> choice;
	
	        switch (choice) {
	            case 1:
	                // Handle view accessible accounts
	                // Your code here
	                break;
	            case 2:
	                // Handle perform transaction
	                // Your code here
	                break;
	            case 3:
	                // Handle request account creation or deletion
	                // Your code here
	                break;
	            case 4:
	                // Handle view account transactions
	                // Your code here
	                break;
	            case 5:
	                return;
	            default:
	                std::cout << "Invalid choice. Please try again." << std::endl;
	        }
	    }	   

    }
    
    else
    {
    	char c;
    	if(c == _getch())
    		return;
	}
}

// Function to handle the management menu selection
void handleManagementMenuSelection() {
    if (authenticateAdmin())
	{
	    int choice;
	    while (true) {
	        system("CLS");
	        std::cout << "=== Management Menu ===" << std::endl;
	        std::cout << "1. View, add, modify, or delete employees" << std::endl;
	        std::cout << "2. View, add, modify, or delete customers" << std::endl;
	        std::cout << "3. View, add, modify, or delete accounts" << std::endl;
	        std::cout << "4. View and modify loan and transaction details" << std::endl;
	        std::cout << "5. Search and view list of employees and customers" << std::endl;
	        std::cout << "6. Search and view list of transactions and loans" << std::endl;
	        std::cout << "7. Return to Main Menu" << std::endl;
	        std::cout << "=======================" << std::endl;
	        std::cout << "Enter your choice: ";
	        std::cin >> choice;
	
	        switch (choice) {
	            case 1:
	                // Handle view, add, modify, or delete employees
	                // Your code here
	                break;
	            case 2:
	                // Handle view, add, modify, or delete customers
	                // Your code here
	                break;
	            case 3:
	                // Handle view, add, modify, or delete accounts
	                // Your code here
	                break;
	            case 4:
	                // Handle view and modify loan and transaction details
	                // Your code here
	                break;
	            case 5:
	                // Handle search and view list of employees and customers
	                // Your code here
	                break;
	            case 6:
	                // Handle search and view list of transactions and loans
	                // Your code here
	                break;
	            case 7:
	                return;
	            default:
	                std::cout << "Invalid choice. Please try again." << std::endl;
	        }
	    }
    }
    
	else
    {
    	char c;
    	if(c == _getch())
    		return;
	}
}

// Function to handle the employee menu selection
void handleEmployeeMenuSelection() {
    if (authenticateEmployee())
	{
	    int choice;
	    while (true) {
	        system("CLS");
	        std::cout << "=== Employee Menu ===" << std::endl;
	        std::cout << "1. Search and view list of customers and accounts" << std::endl;
	        std::cout << "2. Display list of accounts for each customer" << std::endl;
	        std::cout << "3. Perform transaction between accounts" << std::endl;
	        std::cout << "4. Approve or reject loan requests" << std::endl;
	        std::cout << "5. Obtain status of an account, customer, or loan" << std::endl;
	        std::cout << "6. Return to Main Menu" << std::endl;
	        std::cout << "=====================" << std::endl;
	        std::cout << "Enter your choice: ";
	        std::cin >> choice;
	
	        switch (choice) {
	            case 1:
	                // Handle search and view list of customers and accounts
	                // Your code here
	                break;
	            case 2:
	                // Handle display list of accounts for each customer
	                // Your code here
	                break;
	            case 3:
	                // Handle perform transaction between accounts
	                // Your code here
	                break;
	            case 4:
	                // Handle approve or reject loan requests
	                // Your code here
	                break;
	            case 5:
	                // Handle obtain status of an account, customer, or loan
	                // Your code here
	                break;
	            case 6:
	                return;
	            default:
	                std::cout << "Invalid choice. Please try again." << std::endl;
	        }
	    }
    }
    
    else
    {
    	char c;
    	if(c == _getch())
    		return;
	}
}

int main ()
{
    int mainChoice;
    
    while (true) {
        displayMainMenu();
        std::cout << "Enter your choice: ";
        std::cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                handleCustomerMenuSelection();
                break;
            case 2:
                handleManagementMenuSelection();
                break;
            case 3:
                handleEmployeeMenuSelection();
                break;
            case 4:
                system("CLS");
                std::cout << "Thank you for using the Bank Management System. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}


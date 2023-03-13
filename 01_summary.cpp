#include <bits/stdc++.h>
using namespace std;

// 10 min revision of all the basic concepts of CPP.

int main() {
        
    //     -10^9  <        int        < 10^9
    //     -10^12 <      long int     < 10^12
    //     -10^18 <   long long int   < 10^18

// ----------------------------------------------------------

    //TODO:
    // IF-ELSE STATEMENT
    // School Grading system
    // a. Below 25 - F
    // b. 25 to 44 - E
    // c. 45 to 49 - D
    // d. 50 to 59 - C
    // e. 60 to 79 - B
    // f. 80 to 100 - A
    // Ask user to enter and print the corresponding grades
    int marks;
    cin>> marks;

    if (marks < 25) {
    	cout<< "F";
    }
    else if (marks <= 44) {
		cout<< "E";
    }
    else if (marks <= 49) {
        cout<< "D";
    }
    else if (marks <= 59) {
        cout<< "C";
    }
    else if (marks <= 79) {
        cout<< "B";
    }
    else if (marks <= 100) {
        cout<< "A";
    }

    // TODO:
    // Take the input from the user and then decide accordingly.
    // 1. if age < 18,
    //    print => not eligible for job
    // 1. if age >= 18 and age <= 54,
    //    print => eligible for job
    // 1. if age >= 55 and age <= 57,
    //    print => not eligible for job, but retirement soon
    // 1. if age > 57,
    //    print => retirement time
    int age;
    cin>> age;
		
    if (age < 18) {
    	cout<< "not eligible for job";
    }
    else if (age <= 57) {
    	cout<< "eligible for job";
    	if (age >= 55) {
    		cout<< ", but retirement soon";
    	}
    }
    else {
    	cout<< "retirement time";
    }

// ------------------------------------------------------------------------------

    // TODO:
    // SWITCH STATEMENT
    // Take the day no and print the corresponding day
    // for 1 print Monday 
    // for 2 print Tuesday and so on for 7 print Sunday
    int day;
    cin>> day;

    switch(day) {
    	case 1:
            cout<< "Monday";
            break;
        case 2:
            cout<< "Tuesday";
            break;
        case 3:
            cout<< "Wednesday";
            break;
		case 4:
        	cout<< "Thrusday";
            break;
        case 5:
        	cout<< "Friday";
            break;
		case 6:
      		cout<< "Saturday";
            break;
        case 7:
        	cout<< "Sunday";
            break;
        default:
            cout<< "Invalid no.";
    }

// ------------------------------------------------------------------------------

    // TODO:
    // ARRAY
    int num;
    cin>> num;

    int arr[num];
    for (int i = 0; i < num; i++) {
        cin>> arr[i];
    }

    arr[1] += 10;
    arr[3] = 16;
        
    cout<< arr[1] << " " << arr[3];

    cout<< endl;

    // FIXME:
    // 2D ARRAY
    int a, b;
    cin>> a >> b;        // 1 3
    int arr1[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin>> arr1[i][j];
        }
        cout<<endl;
    }

	//FIXME: Printing the array
	for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout<< arr1[i][j] << " ";
        }
        cout<<endl;
	}
    cout<<endl;

    arr1[1][3] = 78;
        
    cout<< arr1[1][3] << " " << arr1[2][4];
    // arr1[2][4] will return a random garbage value to us.
    cout<<endl;
    
// ----------------------------------------------------------------------------------------

    // TODO:
    // STRINGS
    string s2;         //Tanish Singhal
    getline (cin, s2);
    cout<< s2;

    cout<<endl;
  
    string s1 = "Tanish";
    s1[0] = 'M';
    cout<< s1;

    cout<<endl;

    int len1 = s1.size();
    cout<< len1 <<endl;

    int len2 = s2.size();
    cout<< len2 <<endl;

    // last character of the string
    cout<< s1[len1 - 1] <<endl;
    // here we write [len - 1] because the indexing of the string strts with 0.

    s1[len1 - 1] = 'z';
    cout<< s1[len1 - 1];
    cout<< s1;

    cout<<endl;

    // FIXME: Reverse of a string
    string s1_rev;
    for (int i = s1.size() - 1; i >= 0; --i) {
        s1_rev.push_back(s1[i]);                // push_back is used to enter a string at the end of the string
    }
    cout<< s1_rev;

    cout<<endl;

    // Dealing with very very large numbers
    // For this we cannot deal with such a large number with int or long long int 
    // so we have to deal with them with the help of string
    FIXME:
    // we have 1234567891234567891234567891234567890 number
    string str;
    cin>> str;

    int last_digit = str[str.size() - 1] - '0';   // by this we can extract last digit in integer form
    cout<< last_digit;
    last_digit = last_digit + 1;
    cout<< last_digit;
    cout<<endl;

// ----------------------------------------------------------------------------------------------------

    // TODO:
    // FOR LOOPS
	for (int i = 1; i <= 5; i++) {
        cout<< "Tanish " << i <<endl;
    }

    for (int j = 5; j > 0; j--) {
        cout<< "Singhal " << j <<endl;
    }


    // TODO:
    // WHILE LOOP
    int i = 1;
    while (i <= 5) {
        cout<< "Tanish " << i <<endl;
            i = i + 1; 
    }

    int j = 5;
     while (j > 0) {
         cout<< "Singhal " << j <<endl;
        j = j - 1;
    }


    // TODO:
    // DO-WHILE LOOP
    // Do while loop run run atleast once irrespective whether the condition is true or false
    int k = 2;
    do {
    	cout<< "Tanish " << i <<endl;
        i++;
    } while (i <= 1);
    cout<< i <<endl;

    return 0;
}

// ----------------------------------------------------------------------------------------------

	// TODO:
	// FUNCTIONS
	// Types:-	void => which does not return anything
	// 			return 
	// 			parameterised
	// 			non paramaterised

#include<bits/stdc++.h>
using namespace std;

void printHello() {
    cout<< "Namaste Duniya!";
}

void printname(string name) {       // This name and inside main function name (name and name2) are different
    cout<< "Hey " << name <<endl;
}

int main() {

    printHello();

    string name;
    cin>> name;
    printname(name);    // This name and inside main function name (name and name2) are different

    string name2;
    cin>> name2;
    printname(name2);   // This name and inside main function name (name and name2) are different
}

                // ===============================================
    
                                       // FIXME: USING INT FUNCTION
#include<bits/stdc++.h>
using namespace std;

int sum1(int a, int b) {     // This variable name (a and b) can be different
    // a and b are formal parameters which take values from the actual parameters
    int c = a + b;
    return c;
}

int main() {

    int num1, num2;
    cin>> num1 >> num2;

    int res = sum1(num1, num2);   // This variable name (num1 and num2) can be different
    // Here num1 and num2 are the actual parameters
    cout<< res;

    return 0;
}

                                        // FIXME: USING VOID FUNCTION
#include<bits/stdc++.h>
using namespace std;

void sum2(int a, int b) {
    int c = a + b;
    cout<< c;
}

int main() {

    int num1, num2;
    cin>> num1 >> num2;

    sum2(num1, num2);

    return 0;
}
            // ====================================================

#include <bits/stdc++.h>
using namespace std;

int digit_sum (int n) {
    int digit_sum = 0;

    while (n) {
        // n = n % 10;
        digit_sum = digit_sum + n % 10;
        n = n / 10;
    }
    return digit_sum;
}

int main() {
    int n, m;
    cin>> n >> m;
    
    cout<< digit_sum(n) + digit_sum(m);

}


// ----------------------------------------------------------------------------------------------------

// // TODO:
// // PASS BY VALUE

#include <bits/stdc++.h>
using namespace std;

void doSomething1(int num) {
   
    cout<< num <<endl;  // 10
    num = num + 5;
    cout<< num <<endl;  // 15
    num = num + 5;
    cout<< num <<endl;  // 20
}

int main() {

    int num = 10;
    doSomething1(num);

    cout<< num <<endl;  // 10 (It doesnot change because doSomething make changes to the copy of the num)
    // (It don't change the original value of the num.)

    return 0;
}

// =======================================================

#include <bits/stdc++.h>
using namespace std;

void doSomething2(string s) {
    s[0] = 'M';
    cout<< s <<endl;    // Manish
}

int main() {

    string s = "Tanish";
    doSomething2(s);     // Here doSomething makes a copy of string s and make change to copy of string s

    cout<< s <<endl;    // Tanish

    return 0;
}

// ----------------------------------------------------------------------------------

// TODO:
// PASS BY REFERENCE
// ARRAY always pass by reference. (we can make pass by reference without adding the & sign)

#include <bits/stdc++.h>
using namespace std;

void doSomething3(int &num) {        // In pass by reference only & sign was added
                                    // Rest all the code of pass by value was there
    cout<< num <<endl;  // 10
    num = num + 5;
    cout<< num <<endl;  // 15
    num = num + 5;
    cout<< num <<endl;  // 20
}

int main() {

    int num = 10;
    doSomething3(num);

    cout<< num <<endl;  // Here doSomething make changes to the original variable
                        // 20
    return 0;
}

// ==========================================================

#include <bits/stdc++.h>
using namespace std;

void doSomething4(string &s) {       // In pass by reference only & sign was added                                    // Rest all the code of pass by value was there
    s[0] = 'M';
    cout<< s <<endl;    // Manish
}

int main() {

    string s = "Tanish";
    doSomething4(s);     // Here doSomething makes changes to the original variable

    cout<< s <<endl;    // Manish

    return 0;
}

// ===============================================================

// ARRAY always pass by reference. (we can make pass by reference without adding the & sign)
#include <bits/stdc++.h>
using namespace std;

void doSomething5(int arr[], int n) {
    arr[0] = arr[0] + 100;
    cout<< "Value inside int main: " << arr[0] <<endl;
}

int main() {

    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    doSomething5(arr, n);

    cout<< "Value inside int main: " << arr[0] <<endl;
}

// ======================================================

#include <bits/stdc++.h>
using namespace std;

void func (int a[][20]) {       // in case of 2D array we have to specify the second number
    a[0][0] = 5;
}

int main () {

    int a[10][20];
    a[0][0] = 7;
    cout<< a[0][0] <<endl;
    func(a);
    cout<< a[0][0] <<endl;

}

// -------------------------------------------------------------------------------

// ERRORS

// 1. Compilation Error
// => When there is any syntax error

// 2. Memory Limit Exceeded

// 3. Run Time error
// => Illegeal excess of memory
// example:- when you try to excess the memory which was not declared

// 4. Time Limt Exceeded Error

#include<iostream>
#include<math.h>
using namespace std;
char repeat;
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareRoot();
void factorial();
void exponential();
int main()
{
	int op;
	do
    {                         
    	system("cls");
    	cout << "\t\t\tCalculator\n";
	    cout<<"Pick an operation you want to perform" << endl;
	    cout<<"Enter 1 for addition \n";
	    cout<<"Enter 2 for subtraction\n";
	    cout<<"Enter 3 for multiplication\n";
	    cout<<"Enter 4 for division\n";
	    cout<<"Enter 5 for power calculation\n";
	    cout<<"Enter 6 for square root \n";
	    cout<<"Enter 7 for factorial calculation\n";
	    cout<<"Enter 8 for exponential calculation\n";
	    cout<<"Enter 0 for exit\n";
	    cout<<"\nEnter option: ";
	    cin>>op;
	    
		if(op==1)
	    {
			addition();
		}		
        else if(op==2)
		{
			subtraction();
		} 
        else if(op==3)
		{
			multiplication();
		}     
        else if(op==4)
		{
			division();
		}
        else if(op==5)
		{
			power();
		}
        else if(op==6)
		{
			squareRoot();
		}
		else if(op==7)
		{
			factorial();
		}
        else if(op==8)
		{
			exponential();
		}
	    
        else if(op==0)
		{
        	system("cls");
        	cout<<"Thank you";
			exit(0);  
		}
        else
		{
        	cout<<"invalid input\n";
        	system("pause");
        	system("cls");
		}
		
	}while(op==1||2||3||4||5||6||7||8||0);
	
	return 0;
}

void addition()
{
	int sum = 0;
	int n;
	int numbers;
	
	do{
	system("cls");
	cout << "\t\t\tAddition\n";
	cout << "Enter how many numbers you want to add: ";
	cin >> numbers;
	
	for(int loop = 0; loop < numbers; loop++)
	{
		cout << "Enter number: ";
		cin >> n;
		sum = sum + n;
	}
	cout << "The sum is: " << sum << endl;
	
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	
	}while(repeat=='y'||repeat=='Y');
}

void subtraction()
{
	int diff;
	int num1,num2;
	
	do{
	system("cls");
	cout << "\t\t\tSubtraction\n";
	
	cout << "Enter two numbers to find their difference" << endl;
	cout << "First num:";
	cin >> num1;
	cout << "Second num:";
	cin >> num2;
	
	diff = num1 - num2;
	cout << "The difference is: " << diff << endl ;
	
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}

void multiplication()
{
	int product = 1;
	int n;
    int number;
    
    do{
    system("cls");
    cout << "\t\t\tMultiplication\n";
    cout << "Enter how many numbers:";
	cin >> number;
	
    for(int loop = 1; loop <= number; loop++)
    {
		cout << "Enter number:";
		cin >> n;
		product = product * n;
    }
    
	cout << "The product is:" << product << endl;
	
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}

void division()
{
    int div;
    int num1;
    int num2;
    
    do{
    system("cls");
    cout << "\t\t\tDivision\n";
    cout << "Enter 2 numbers to find their quotient\n\n";
    
	cout << "Enter numerator:";
    cin >> num1;
    cout << "\nEnter denominator:";
    cin >> num2;
    
	div = num1 / num2;
    
    cout << "\nThe quotient is:" << div << endl << endl;
    
    cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}      

void power()
{     
    long int power;
    int res = 1;
	int n; 
    
    do
	{
	system("cls");
	cout << "\t\t\tPower\n";
	cout << "Enter number:";
    cin >> n;
    
	cout << "\nEnter power:";
    cin >> power;
    
	for(int i = 1; i <= power; i++)
    {
		res = n * res;
    }
    cout << n << " raised to " << power << " is :" << res << endl;
    
    cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
} 
       
void squareRoot()
{
    float s;
    int n;
    
    do
	{
    system("cls");
	cout << "\t\t\tSquare root\n";
	cout << "Enter number to find its square root: ";
	cin >> n;
	s = sqrt(n);
	cout << "\nThe square root of " << n << " is :" << s << endl;
	
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}

void factorial()
{
	long int f=1;
    int c=1,n;
    
    do{
    system("cls");
    cout << "\t\t\tFactorial\n";
    cout << "Enter number to find its factorial: ";
    cin >> n;
    
    while(c<=n)
    {
		f = f * c;
		c += 1;
    }
	cout <<"\nThe factorial of "<< n << " is:" << f << endl;
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}

void exponential()
{
	long double res=1,p;
	double e = 2.718281828;
	
	do{
	system("cls");
	cout << "\t\t\tExponential\n";
	cout<<"Enter power of exponential function: ";
	cin>>p;
	
	for(int i=1;i<=p;i++)
	{
		res = e * res;
	}
	
	cout<<"e^"<<p<<" is :"<<res<<endl;
	
	cout << "Do you want to repeat? (Y/N) :";
	cin >> repeat;
	}while(repeat=='y'||repeat=='Y');
}


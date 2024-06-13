 /*#include<iostream>
using namespace std;
int main(){

	int apples;
	cin>>apples;
	cout<<"apples:"<<apples<<endl;
	return 0;
}*/

/*ce std;
int main(){
	int a=8;
	cout<<a;
	return 0;
} */
 
 // swap string
/* # include<iostream>
 using namespace std;
 int main(){
 	int a, b;
 	a=5;
 	b=6;
 	cout<<a<<endl;
 	cout<<b<<endl;
 	int c;
 	c =b;
 	
 	b=a;
 	a=c;
 	cout<<a<< endl;
 	cout<<b<<endl;
 	
 	
 	return 0;
 }*/
 
 /*Arthemetic operators
 #include<iostream>
 using namespace std;
  int main(){
  	 int a=6;
  	 int b=8;
  	 cout<<a+b<<endl;
  	 cout<<a-b<<endl;
  	 cout<<a%b<<endl;
  	
  	return 0;
  } */
  
  //relational operators
  #include<iostream>
  using namespace std;
  int main(){
  	/*
  	int a=6;
  	 int b=8;
  	 cout<<(a==b)<<endl;
  	 cout<<(a!=b)<<endl;
  	 cout<<(a>=b)<<endl;
  	 // assignment operators
  	 cout<<(a+=1)<<endl;
  	 cout<<(b-=1)<<endl;
  	 // bitwise operators
  	 cout<<(a|b)<<endl;
  	 cout<<(a or b)<<endl;
  	 // misc operators
  	 int c=3;
  	 cout<<sizeof(c)<<endl;
  	 cout<<(++c)<<endl;
  	cout<<(c--)<<endl;
  	//if else condition : print even or add
  	int num;
  	cin>>num;
  	if(num%2){
  		cout<<"even"<<endl;
  	    
	  } else{
	  	cout<<"odd"<<endl;
	  }
	  // prime no or not
	  int no;
	  cin>>no;
	  if(no%2){
	  	cout<<"isaprimeno"<<endl;
	    }else{
	  	cout<<"primenonot"<<endl;
	  }
	  
	  //if else if else codition 
	  int marks;
	  cin>>marks;
	  if(marks>80){
	  	cout<<"A"<<endl;
	  } else if(marks>60){
	  	cout<<"B"<<endl;
	  } else if(marks<60){
	  	cout<<"C"<<endl;
	  } else{
	  	cout<<"F"<<endl;
	  }
	  //nested if else condition
	if(marks>>33){
		if(marks>>80){
			cout<<"A"<<endl;
		}else {
			cout<<"pass"<<endl;
		}
	}else{
		cout<<"F"<<endl;
	}
	//switch case
	int day;
	cin>>day;
	switch(day){
		case 1:
			cout<<"Monday"<<endl;
			break;
	
	    case 2:
	         cout<<"tuesday" <<endl;
	         break;
	         
	    case 3:
		    cout<<"wednesday"<<endl;  
			break; 
		}
	//loop
	int i=0;
	while(i<10){
		cout<<i<<endl;
		i++;
	}
	for(int i=0; i<3; i++)	
	 cout<<i<<endl; 
	 
	 for(int i=0; i<8; i++){
	 	 if(i%2){
	 	 	continue;
	 }
	    	cout<<i<<endl;
		}
		//rectangular pattern
		int n;
		cin>>n;
		int m;
		cin>>m;
		for( int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			cout<<"*";
		}
		cout<<endl;
	} */
	// rectangular pattern
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1; i<=n; i++){
	for(int j=1; j<=m; j++){
		if(i ==1 || j == i || i == n || j == m){
			cout<<"*";
		} else{
			cout<<" ";
		}
	}
	cout<<endl;
}
	
  
  //do while loop
    /* int n;
    cin>>n; 
    int sum=0;
    do{
  	int num;
  	cin>>num;
  	sum+=num;
  	n--;
    } while(n>0)
  	cout<<sum<<endl; */
  	
  	return 0;
    } 
    

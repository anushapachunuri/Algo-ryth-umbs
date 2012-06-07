#include<iostream>
#include<string>
using namespace std;

class NaiveMatching{

public:

int NaiveMatch(string, string);
};
int NaiveMatching::NaiveMatch(string toSearch, string searchIn){

int flag = -1;
int i,j;
int t = searchIn.length();
int p = toSearch.length();
int temp;
for(i=0 ;i< t-p+1 ;i++){
	for(j=0 ; j<p ;j++){
		if(toSearch[j] == searchIn[i+j])
			continue;
		else
			break;
	}
	if (j==p){
		cout<<"was here";
		flag = 1;
		temp = i;
		break;
	}

}
if(flag)
 return temp;
else
 return flag;


}

int main(){

NaiveMatching n ;
string toSearch("anu");
string searchIn("pachunuanusha");

int found = n.NaiveMatch(toSearch,searchIn);
cout<<"value found at location"<<found;

return 0;
}



# include <iostream>
using namespace std;
 
int main ()
 
{
  char S;
  int N;
  cin >> S;
  cin >> N;
  switch (N) {
    case 1: switch (S) {
   		case 'N': cout << "W"; break;
   		case 'S': cout << "Â"; break;  
   		case 'W': cout << "S"; break;
   		case 'E': cout << "N"; break;
    } break ;
	case -1: switch (S) {
   		case 'N': cout << "E"; break;
   		case 'S': cout << "W"; break;  
   		case 'W': cout << "N"; break;
   	    case 'E': cout << "S"; break;
	} break;
	case 0: switch (S) {
   		case 'N': cout << "N"; break;
   		case 'S': cout << "S"; break;  
   		case 'W': cout << "W"; break;
   	    case 'E': cout << "E"; break;
	} break;
   }
   cout << endl; 
   return 0;
}
 /* Create the program TravelSummary that can produce the list of cities and countries that the user has visited.
The user input consists of a positive integer n followed by n lines. 
Each line contains two strings: cityName and countryName. 
The program should list all countries in alphabetical order and for each of them print all different cities 
(also in alphabetical order). The format of the output is shown in the example below.

Example:

Example: 
Input: 
8 
Ypres Belgium 
Ottawa Canada 
Waterloo Belgium 
Munich Germany 
Ottawa Canada 
Waterloo Canada 
Antwerp Belgium 
Frankfurt Germany 
*/

#include <iostream>
#include <map>
#include <set>
int main() {
    std::map <std::string, std::set <std::string> > count_vis;
    std::set < std::string> count_set;
    std::string town;
    std::string country;
    int n;
    std::cout << "please enter the number of countries you would like to enter" << std::endl;
    std::cin >>n;
    for ( int i=0; i< n; i++){
        std::cout <<"please enter a new country or a new town";
        std::cin>> town >> country;

        count_vis[country].insert(town);
    }
    std::map <std::string, std::set <std::string>>::iterator it;
    std::set <std::string> ::iterator vt;
    for ( it=count_vis.begin(); it!= count_vis.end(); it++){
        std::cout << "the countiries visitd in " << it->first<<" ";
        for (vt=(it->second).begin(); vt!= (it->second).end(); vt++ ){
            std::cout <<*vt << " ";
        }
        std::cout << std:: endl;
    }
    return 0;
}

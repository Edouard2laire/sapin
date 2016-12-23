//============================================================================
// Name        : sapin.cpp
// Author      : Edouard22
//============================================================================

#include <iostream>


/**
 *  @brief Dessine un sapin de façon récursive
 *  @param n : la taille du sapin ( n >=1 )
 *  	   i : la ligne du sapin à afficher.
 *  	   tmp : curseur permetant de savoir quel caractère de la ligne est en train d'etre dessiné.
 *  	   c : choix du caractère pour dessiner le sapin.
 *
 */
void sapin(int n ,char c='*', int i = 0,int tmp=0 ) {

	if( tmp < n- i)
		std::cout << " ";
	if(tmp>= n- i && tmp <= i + n )
		std::cout << c;
	if(tmp < 2*n)
		sapin(n,c,i,tmp+1);
	if(tmp== 2*n && i < n)
		std::cout<<std::endl;
	if(tmp== 2*n && i < n-1)
		sapin(n,c,i+1,0);

}

int main() {

	for(int k=1; k <= 5; ++k) {
		sapin(k,'+');
		std::cout<<"================== " << std::endl;

	}

	return 0;
}

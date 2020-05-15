#include <iostream>

#include "./header/key.h"
#include "./header/des.h"
#include "./header/tripledes.h"

using namespace std;

int main(int argc, char** argv)
{    
    /**
     * 
     *  TRIPLE DES PROCESS 
     * 
     * */
    
    /*Keys*/
    string k1 = "1000011100001111111100001110001111000111000011110001110000111111";
    string k2 = "1000111000011110001110000111111100001110000111111110000111000111";
    string k3 = "1111110000111000111100001110001111000111000011111111000011100001";
    
    /*Encryption*/
    string ciphertext = TripleDesEnryption("0123456789ABCDEF",k1,k2,k3);
	cout << "Encrypt[k1,k2,k3](0123456789ABCDEF) = {" << ciphertext << "}" << endl;
	
	/*Decryption*/
	cout << "Encrypt[k1,k2,k3](" << ciphertext << ") = {" << TripleDesDecryption(ciphertext,k1,k2,k3) << "}" << endl;
}

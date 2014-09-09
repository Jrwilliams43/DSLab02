#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;
//!Class to read a line in from a text document and return it somewhere else
/*!
 *The ReadFile class accepts a const char pointer through the constructor
 *No changes are made to the input text file
 *The destructor closes the file and leaving the string 
 */
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
   
	public:
	//!  the constructor accepts constant char pointer 
		ReadFile(const char* file_name);
	//! the destructor which does not delete the string 
		~ReadFile();
	//! checks to see if  has been read to end of file
		bool eof();
	//! checks to see if input text file is closed
		void close();
	//! returns line of text file as string
		String* readLine();
		
};


#endif

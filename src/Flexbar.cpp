/*==================================================
   
   Flexbar - flexible barcode and adapter removal
   
   Version 3.2.0
   
   BSD 3-Clause License
   
   uses SeqAn library release 2.2.0
   and TBB library 4.0 or later
   
   
             Developer:  Johannes Roehr
   
   Former contributors:  Matthias Dodt
                         Benjamin Menkuec
                         Sebastian Roskosch
   
   
   https://github.com/seqan/flexbar
   
===================================================*/

#include "Flexbar.h"


int main(int argc, const char* argv[]){
	
	using namespace std;
	using namespace seqan;
	
	const string version = "3.2";
	const string date    = "May 2018";
	
	ArgumentParser parser("flexbar");
	
	defineOptions(parser, version, date);
	parseCmdLine(parser, version, argc, argv);
	
	Options o;
	
	initOptions(o, parser);
	loadOptions(o, parser);
	
	startComputation(o);
	
	return 0;
}

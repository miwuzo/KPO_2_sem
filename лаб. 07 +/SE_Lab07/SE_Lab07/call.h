#pragma once

namespace Call {
	//ѕараметры помещаютс€ в стек в обратном пор€дке(справа налево) 
	int _cdecl cdeml(int x, int y, int z) {
		return x + y + z;
	} 
	int _stdcall cstd(int& x, int y, int z) {
		return x + y + z;
	}
	//’ран€тс€ в регистрах, затем помещаютс€ в стек
	int _fastcall cfst(int x, int y, int z, int s) {
		return x + y + z + s;
	}

}


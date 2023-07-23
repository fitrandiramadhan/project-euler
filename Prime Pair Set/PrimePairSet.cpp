//file		:	PrimePairSet.cpp
//author	:	steaKK

PrimePairSet::PrimePairSet() : data(1000000000) {

}

PrimePairSet::~PrimePairSet() {

}

void PrimePairSet::populate() {
	data.sieve_of_erastothenes();
}

vector<long> PrimePairSet::solve() {
	vector<long> result;
	for(long i=0;i<data.get_size();i++) {
		for(long j=0;j<data.get_size();j++) {
			if(i!=j && data.get_data(i) && data.get_data(j)) {
				if(is_prime(concat(i,j) && is_prime(concat(j,i)) && !contain())
			}
		}
	}
}


long PrimePairSet::concat(long x1, long x2) {
	string s1 = to_string s1;
	string s2 = to_string s2;
	return stoi(s1+s2);
}

bool PrimePairSet::is_prime(long x) {
	return data.get_data(x);
}

bool PrimePairSet::contain(vector<long> v, long x) {
	for(long i=0;i<v.size();i++) {
		if(v[i]==x) return true;
	}
	return false;
}

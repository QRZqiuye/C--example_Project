#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED

class NamedObj {
private:
	char* name;
	int id;
	static int nCount;
	static int nDestr;
public:
	NamedObj(const char* s);
	~NamedObj();
	void dispaly() const;
	static int nObj();
};


#endif

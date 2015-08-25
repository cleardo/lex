#include <stdio.h>

/* 0到DFA_MAX-1个状态 */
#define DFA_MAX 254

typedef unsigned char TTYPE;

#define F -1

/* 128个字符 */
/* 遍历所有字符来确定下一个状态 */
#define MAX_CHARS 128

typedef int ROW[MAX_CHARS];

/*
 * 添加一个新的状态
 * 并返回一个新的DFA状态号(DStates索引)
 *
 */
int add_to_dstates(NFA_set, accepting_string, anchor)
{
	int nextstate;

	if (Nstates > (DFA_MAX - 1))
		ferr("太多状态了\n");

	/* 增加状态号 */
	nextstate = Nstates++;
	
	Dstates[nextstate].set = NFA_set;
	Dstates[nextstate].accept = accepting_string;
	Dstates[nextstate].anchor = anchor;

	return nextstate;
}

/**
 * 查找
 * 返回Dstate的索引
 */
PRIVATE int in_dstates(SET* NFA_set)
{
	DFA_STATE *p;

	for (p = &Dstates[Nstates]; --p >= Dstates;)
	{
		if (IS_EQUIVALENT(NFA_set, p->set))
			return (p - Dstates);
	}

	return (-1);
}


PRIVATE DFA_STATE* get_unmarked()
{

}

PRIVATE void make_tran(int sstate)
{
	SET *NFA_set;
	
	DFA_STATE *current;

	int nextstate;

	char *isaccept;

	int anchor;

	int c;

	NFA_set = newset();

	put('\n', stderr);

	free_sets();
}

#include <stdio.h>

/* 0到DFA_MAX-1个状态 */
#define DFA_MAX 254

typedef unsigned char TTYPE;

#define F -1

/* 128个字符 */
/* 遍历所有字符来确定下一个状态 */
#define MAX_CHARS 128

typedef int ROW[MAX_CHARS];

int add_to_dstates(NFA_set, accepting_string, anchor)
{
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

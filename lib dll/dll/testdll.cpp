//ע��˴��ĺ궨����Ҫд��#include "testdll.h"֮ǰ  
//�������dll��Ŀ�ڲ�ʹ��__declspec(dllexport)����  
//��dll��Ŀ�ⲿʹ��ʱ����__declspec(dllimport)���� 
#define  TSET_DLL_EXPORTS_

#include "testdll.h"

int add3(int l1, int l2, int l3) {
	return l1 + l2 + l3;
}
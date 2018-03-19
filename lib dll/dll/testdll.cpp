//注意此处的宏定义需要写在#include "testdll.h"之前  
//以完成在dll项目内部使用__declspec(dllexport)导出  
//在dll项目外部使用时，用__declspec(dllimport)导入 
#define  TSET_DLL_EXPORTS_

#include "testdll.h"

int add3(int l1, int l2, int l3) {
	return l1 + l2 + l3;
}
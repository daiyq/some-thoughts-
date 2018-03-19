#ifndef TESTDLL_H_
#define TESTDLL_H_

//该宏完成在dll项目内部使用__declspec(dllexport)导出  
//在dll项目外部使用时，用__declspec(dllimport)导入  
//宏TSET_DLL_EXPORTS_在testdll.cpp中定义 
#ifdef TSET_DLL_EXPORTS_
#define TEST_DLL_API_ _declspec(dllexport)
#else
#define TEST_DLL_API_ _declspec(dllimport)
#endif // TSET_DLL_EXPORTS_

TEST_DLL_API_ int add3(int l1, int l2, int l3);

#endif // !TESTDLL_H_


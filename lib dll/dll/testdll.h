#ifndef TESTDLL_H_
#define TESTDLL_H_

//�ú������dll��Ŀ�ڲ�ʹ��__declspec(dllexport)����  
//��dll��Ŀ�ⲿʹ��ʱ����__declspec(dllimport)����  
//��TSET_DLL_EXPORTS_��testdll.cpp�ж��� 
#ifdef TSET_DLL_EXPORTS_
#define TEST_DLL_API_ _declspec(dllexport)
#else
#define TEST_DLL_API_ _declspec(dllimport)
#endif // TSET_DLL_EXPORTS_

TEST_DLL_API_ int add3(int l1, int l2, int l3);

#endif // !TESTDLL_H_


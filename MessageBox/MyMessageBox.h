/*

	���b�Z�[�W�{�b�N�X�̊ȗ��p
	�w�b�_

*/

#pragma once

#include <Windows.h>


namespace MyLib
{
	//OK�{�^���̂�
	inline void MessageBoxOK(LPCTSTR _Title,LPCTSTR _text){
		MessageBox(NULL, _text,_Title, MB_OK);
	}

	inline void MessageBoxErrOK(LPCTSTR _Title, LPCTSTR _text){
		MessageBox(NULL, _text, _Title, MB_OK | MB_ICONERROR);
	}


}

/*

	���b�Z�[�W�{�b�N�X�̊ȗ��p
	�w�b�_

*/

#pragma once

#include <Windows.h>


namespace MyLib
{
	//OK�{�^���̂�
	void MessageBoxOK(LPCTSTR _Title,LPCTSTR _text){
		MessageBox(NULL, _text,_Title, MB_OK);
	}

	void MessageBoxErrOK(LPCTSTR _Title, LPCTSTR _text){
		MessageBox(NULL, _text, _Title, MB_OK | MB_ICONERROR);
	}


}

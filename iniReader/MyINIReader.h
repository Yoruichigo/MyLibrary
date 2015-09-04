/*

	ini�e�L�X�g��ǂݍ��ރN���X
	�w�b�_

	
	GetValue/GetStringValue�́A
	���p�C�R�[���u=�v�ő�����Ă���L�[���[�h�ɂ̂�
	�Ή����Ă��܂��B
*/

#pragma once

#include <windows.h>
#include <fstream>
#include <iostream>
#include <string>


namespace MyLib
{

	class INIReader{
	public:
		INIReader(){};
		~INIReader(){};

		//�w�肳�ꂽ�t�@�C����ǂݍ��݂܂�(false���s)
		bool LoadFile(const std::string _FileLocation);

		//(int�^)�L�[���[�h�ɑ�����ꂽ�l���A�n���ꂽ�ϐ��ɓ���܂�
		bool GetPutValue(const std::string _Keyword, int* _Storage);

		//(bool�^)�L�[���[�h�ɑ�����ꂽ�l���A�n���ꂽ�ϐ��ɓ���܂�
		bool GetPutBoolValue(const std::string _Keyword, bool* _Storage);

		//(string�^)�L�[���[�h�ɑ�����ꂽ�l���A�n���ꂽ�ϐ��ɓ���܂�
		bool GetPutStringValue(const std::string _Keyword, std::string* _Storage);
		

		//�f�[�^���擾���܂�
		inline std::string GetData()const{
			return TextData;
		}

	private:
		//�ǂݍ��񂾃f�[�^�̕ۑ��p
		std::string TextData;
	};

}
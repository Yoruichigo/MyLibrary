/*

	�X�V�A�`����s���N���X���Ǘ�����N���X
	�\�[�X

*/

#pragma once

#include <memory>
#include <list>

#include "BasicUpdateAndDrawClass.h"



namespace ManagerClass
{

	class UpdateAndDrawManagerClass{
	public:
		UpdateAndDrawManagerClass(){}
		~UpdateAndDrawManagerClass(){}

		//�o�^���Ă���N���X�̍X�V���s���܂�
		void AllUpdate();

		//�o�^���Ă���N���X�̕`����s���܂�
		void AllDraw();

		//�N���X�̓o�^���s���܂�
		void Register(std::shared_ptr<BasicClass::UpdateAndDrawClass> _RegisteredPerson);

		//�o�^���Ă���N���X�����O���܂�
		void Exclusion(std::shared_ptr<BasicClass::UpdateAndDrawClass> _ExcludedPerson);

		//�o�^���Ă���N���X��"�S��"���O���܂�
		void Clear();

		//�o�^�f�[�^���X�g�̎擾
		const std::list<std::shared_ptr<BasicClass::UpdateAndDrawClass> > &GetDataList(){
			return BasicClasesList;
		}

	private:
		
		//�o�^�f�[�^���X�g
		std::list< 
			std::shared_ptr<BasicClass::UpdateAndDrawClass>
				> BasicClasesList;

	};


}





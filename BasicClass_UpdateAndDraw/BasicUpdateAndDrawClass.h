/*

	�X�V�ƕ`����s�����N���X
	�w�b�_

*/


#pragma once

#include <memory>


namespace BasicClass
{
	
	class UpdateAndDrawClass{
	public:
		UpdateAndDrawClass(){}
		virtual ~UpdateAndDrawClass(){}

		//�X�V�֐�
		virtual void Update() = 0;

		//�`��֐�
		virtual void Draw() = 0;



		//�C���X�^���X�擾�֐�
		std::shared_ptr<UpdateAndDrawClass> GetInstance(){
			return std::shared_ptr<UpdateAndDrawClass>(this);
		}

	};



}


/*

	�X�V�ƕ`����s�����N���X
	�w�b�_

	//enable_shard_from_this���p�����A�����̃X�}�[�g�|�C���^��Ԃ���悤�ɂ���B
	//Create�֐����g�p���ăC���X�^���X�𐶐�����悤��

*/


#pragma once

#include <memory>


namespace MyLib
{
	
	
	class UpdateAndDrawClass : public std::enable_shared_from_this<UpdateAndDrawClass>{
	protected:
		UpdateAndDrawClass(){}

	public:
		virtual ~UpdateAndDrawClass(){}

		//�X�V�֐�
		virtual void Update() = 0;

		//�`��֐�
		virtual void Draw() = 0;

		
		//<class T>�̃C���X�^���X���쐬���܂�
		template<class T>
			static inline std::shared_ptr<T> CreateInstance(){
				auto ins = std::make_shared<T>();
				return ins;
		}


		//�C���X�^���X�擾�֐�
		std::shared_ptr<UpdateAndDrawClass> GetInstance(){
			return this->shared_from_this();
		}


	};



}


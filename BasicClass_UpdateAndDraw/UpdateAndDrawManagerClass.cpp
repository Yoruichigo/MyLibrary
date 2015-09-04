/*

	�X�V�A�`����s���N���X���Ǘ�����N���X
	�\�[�X

*/





#include "UpdateAndDrawManagerClass.h"





using namespace ManagerClass;

//�X�V
void UpdateAndDrawManagerClass::AllUpdate()
{
	//foreach���őS�Ă̍X�V
	for (auto data : BasicClasesList)
	{
		data->Update();
	}
}

//�`��
void UpdateAndDrawManagerClass::AllDraw()
{
	//foreach���őS�Ă̕`��
	for (auto data : BasicClasesList)
	{
		data->Draw();
	}
}


//�o�^
void UpdateAndDrawManagerClass::Register(std::shared_ptr<BasicClass::UpdateAndDrawClass> _RegisteredPerson)
{
	//�f�[�^���X�g�̖����ɓo�^
	BasicClasesList.push_back(_RegisteredPerson);
}



//���O
void UpdateAndDrawManagerClass::Exclusion(std::shared_ptr<BasicClass::UpdateAndDrawClass> _ExcludedPerson)
{
	//�C�e���[�^�[
	std::list<std::shared_ptr<BasicClass::UpdateAndDrawClass> >::iterator
		it;

	//�f�[�^���X�g���珜�O����f�[�^�����������O����
	for (it = BasicClasesList.begin(); it != BasicClasesList.end();)
	{
		if ((*it) == _ExcludedPerson){
			it = BasicClasesList.erase(it);
		}
		else{
			it++;
		}
	}

}


//�S�č폜
void UpdateAndDrawManagerClass::Clear()
{
	BasicClasesList.clear();
}



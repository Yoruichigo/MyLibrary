/*

	�X�V�A�`����s���N���X���Ǘ�����N���X
	�\�[�X

*/





#include "UpdateAndDrawManagerClass.h"





using namespace MyLib;

	

//�X�V
void UpdateAndDrawManagerClass::AllUpdate()
{
	//foreach���őS�Ă̍X�V
	for (auto data : BasicClassesList)
	{
		data->Update();
	}
}

//�`��
void UpdateAndDrawManagerClass::AllDraw()
{
	//foreach���őS�Ă̕`��
	for (auto data : BasicClassesList)
	{
		data->Draw();
	}
}


//�o�^
void UpdateAndDrawManagerClass::Register(std::shared_ptr<UpdateAndDrawClass> _RegisteredPerson)
{
	//�f�[�^���X�g�̖����ɓo�^
	BasicClassesList.push_back(_RegisteredPerson);

	int a = (*BasicClassesList.begin()).use_count();

	int b = 0;
}



//���O
void UpdateAndDrawManagerClass::Exclusion(std::shared_ptr<UpdateAndDrawClass> _ExcludedPerson)
{
	//�C�e���[�^�[
	std::list<std::shared_ptr<UpdateAndDrawClass> >::iterator
		it;

	//�f�[�^���X�g���珜�O����f�[�^�����������O����
	for (it = BasicClassesList.begin(); it != BasicClassesList.end();)
	{
		if ((*it) == _ExcludedPerson){
			it = BasicClassesList.erase(it);
		}
		else{
			it++;
		}
	}

}


//�S�č폜
void UpdateAndDrawManagerClass::Clear()
{
	BasicClassesList.clear();
}


#include <Windows.h>
#include "XAudio2/SoundManager.h"
#include <thread>

using namespace std;

int main() 
{
//-------------------------
// ��x�����Ă�.
	// �T�E���h�\�[�X�쐬.
	CSoundManager::CreateSoundData();
	// BGM�Đ��֐�.
	// �����@�F�@	BGM�̖��O , Loop���邩���Ȃ���(�f�t�H���gtrue).
	CSoundManager::ThreadPlayBGM("BGMNAME");

	while (1)
	{
		if (GetAsyncKeyState('D') & 0x8000) {
			CSoundManager::PlaySE("SE�̖��O");	// SE�̖��O��SE�X���b�h�N���X�ɑ���.
		}
		if (GetAsyncKeyState('W') & 0x8000) {
			// BGM��~���X���b�h��~.
			while (CSoundManager::StopBGMThread("BGMNAME") == false);
			break;
		}
	}
//------------------------
// �㏈��.
	//�T�E���h�}�l�[�W���[�����[�X.
	CSoundManager::Release();

	return 0;
}
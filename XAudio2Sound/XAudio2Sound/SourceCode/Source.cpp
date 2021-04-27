#include <Windows.h>
#include "XAudio2/SoundManager.h"
#include <thread>

using namespace std;

int main() 
{
//-------------------------
// 一度だけ呼ぶ.
	// サウンドソース作成.
	CSoundManager::CreateSoundData();
	// BGM再生関数.
	// 引数　：　	BGMの名前 , Loopするかしないか(デフォルトtrue).
	CSoundManager::ThreadPlayBGM("BGMNAME");

	while (1)
	{
		if (GetAsyncKeyState('D') & 0x8000) {
			CSoundManager::PlaySE("SEの名前");	// SEの名前をSEスレッドクラスに送る.
		}
		if (GetAsyncKeyState('W') & 0x8000) {
			// BGM停止兼スレッド停止.
			while (CSoundManager::StopBGMThread("BGMNAME") == false);
			break;
		}
	}
//------------------------
// 後処理.
	//サウンドマネージャーリリース.
	CSoundManager::Release();

	return 0;
}
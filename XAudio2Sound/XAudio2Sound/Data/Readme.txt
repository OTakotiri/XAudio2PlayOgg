//-----------------------------------------
// 色々調べてカタカタまとめたXAudio2サウンドクラス.
// LastUpdate 2021/04/27

共通の処理.
作成	CSoundManager::CreateSoundData();
解放　	CSoundManager::Release();

**BGMを鳴らす**
1_ 	"Data\\Sound\\BGM"にOggデータファイルを入れる.
2_	CSoundManager::PlayBGM("BGMの名前", ループフラグ);
**BGMを停止**
1_	CSoundManager::StopBGMThread("BGMの名前");
**BGMを一時停止**
1_	CSoundManager::PauseBGM("BGMの名前");

**SEを鳴らす**
1_ 	"Data\\Sound\\SE" にOggデータファイルを入れる.
2_	CSoundManager::PlaySE("SEの名前");



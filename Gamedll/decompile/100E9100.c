/*
 * func-name: ?Tick@SenceBackgroundMusicPlayer@@UAEXXZ_0
 * func-address: 0x100e9100
 * callers: 0x10006415
 * callees: none
 */

void __thiscall SenceBackgroundMusicPlayer::Tick(SenceBackgroundMusicPlayer *this)
{
  float *v1; // ebx
  Editor *v2; // eax
  float *v3; // ebp
  float *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  void *v10; // [esp+4h] [ebp-3Ch]
  _DWORD v11[7]; // [esp+8h] [ebp-38h] BYREF
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  SenceBackgroundMusicPlayer *v15; // [esp+38h] [ebp-8h]
  _DWORD *v16; // [esp+3Ch] [ebp-4h]

  v1 = (float *)this;
  v15 = this;
  v2 = (Editor *)Editor::Instance(v13, v14);
  if ( Editor::GetEditorMode(v2) )
  {
    v3 = v1 + 271;
    v4 = v1 + 263;
    if ( (unsigned __int8)std::operator!=<char>(v1 + 263, v1 + 271) )
    {
      v5 = OggPlayer::Instance();
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 28))(v5) )
      {
        v6 = OggPlayer::Instance();
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
      }
      v12 = 0x10000;
      v16 = v11;
      v10 = v1 + 263;
      v7 = OggPlayer::Instance();
      std::string::string(v11, v10);
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v7 + 4))(
             v7,
             v11[0],
             v11[1],
             v11[2],
             v11[3],
             v11[4],
             v11[5],
             v11[6],
             v12) )
      {
        v8 = OggPlayer::Instance();
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 12))(v8, 1);
        std::string::operator=(v3, v4);
      }
      v1 = (float *)v15;
    }
    v9 = OggPlayer::Instance();
    (*(void (__thiscall **)(int, float))(*(_DWORD *)v9 + 20))(v9, v1[270]);
  }
  Actor::Tick((Actor *)v1);
}

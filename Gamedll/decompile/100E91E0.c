/*
 * func-name: ?DeserializationComplete@SenceBackgroundMusicPlayer@@UAEXXZ_0
 * func-address: 0x100e91e0
 * callers: 0x1000f169
 * callees: none
 */

void __thiscall SenceBackgroundMusicPlayer::DeserializationComplete(SenceBackgroundMusicPlayer *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  _DWORD v7[7]; // [esp+8h] [ebp-30h] BYREF
  int v8; // [esp+24h] [ebp-14h]
  _DWORD *v9; // [esp+34h] [ebp-4h]

  v2 = OggPlayer::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 28))(v2) )
  {
    v3 = OggPlayer::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  }
  v8 = 0x10000;
  v9 = v7;
  v4 = OggPlayer::Instance();
  std::string::string(v7, (char *)this + 1052);
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 4))(
         v4,
         v7[0],
         v7[1],
         v7[2],
         v7[3],
         v7[4],
         v7[5],
         v7[6],
         v8) )
  {
    v5 = OggPlayer::Instance();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, 1);
    v6 = OggPlayer::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 20))(v6, *((float *)this + 270));
  }
  Actor::DeserializationComplete(this);
}

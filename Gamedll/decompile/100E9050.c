/*
 * func-name: ??1SenceBackgroundMusicPlayer@@UAE@XZ_0
 * func-address: 0x100e9050
 * callers: 0x100035a8
 * callees: none
 */

void __thiscall SenceBackgroundMusicPlayer::~SenceBackgroundMusicPlayer(struct Model **this)
{
  int v2; // eax
  int v3; // eax

  *this = (struct Model *)&SenceBackgroundMusicPlayer::`vftable';
  Precacher::PurgeModel(this + 179);
  v2 = OggPlayer::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 28))(v2) )
  {
    v3 = OggPlayer::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  }
  std::string::~string(this + 271);
  std::string::~string(this + 263);
  Actor::~Actor((Actor *)this);
}

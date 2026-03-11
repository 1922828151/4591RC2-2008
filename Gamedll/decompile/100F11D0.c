/*
 * func-name: sub_100F11D0
 * func-address: 0x100f11d0
 * callers: 0x10014c90
 * callees: 0x10010bae, 0x1001884a
 */

void __thiscall sub_100F11D0(struct Sound **this)
{
  SoundMgr *v2; // eax

  if ( *((_BYTE *)this + 64) )
  {
    v2 = SoundMgr::Instance();
    if ( SoundMgr::RemoveSound(v2, (struct SOUND_OPTION *)this, 0) )
      Precacher::PurgeSound(this + 14);
  }
  else
  {
    Precacher::PurgeSound2D(this + 14);
  }
  std::string::~string(this + 7);
  std::string::~string(this);
}

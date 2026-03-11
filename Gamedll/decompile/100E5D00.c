/*
 * func-name: ?PlayIdleAnimation@SampleWeapon@@QAEXXZ_0
 * func-address: 0x100e5d00
 * callers: 0x10003f5d
 * callees: none
 */

void __thiscall SampleWeapon::PlayIdleAnimation(SampleWeapon *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 263);
  if ( v2 && !*(_BYTE *)(v2 + 1064) && !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 272)) )
    Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 270), 0.2, -1.0, 0.0, 1.0);
}

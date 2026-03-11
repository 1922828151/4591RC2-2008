/*
 * func-name: ?PlayWalkAnimation@SampleWeapon@@QAEXXZ_0
 * func-address: 0x100e5d70
 * callers: 0x10012a8f
 * callees: none
 */

void __thiscall SampleWeapon::PlayWalkAnimation(SampleWeapon *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 263);
  if ( v2 && !*(_BYTE *)(v2 + 1064) && !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 272)) )
    Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 271), 0.2, -1.0, 0.0, 1.0);
}

/*
 * func-name: ?PlayShootAnimaiton@SampleWeapon@@QAEXXZ_0
 * func-address: 0x100e5de0
 * callers: 0x1000846d
 * callees: none
 */

void __thiscall SampleWeapon::PlayShootAnimaiton(SampleWeapon *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 263);
  if ( v1 )
  {
    if ( !*(_BYTE *)(v1 + 1064) )
      Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 272), 0.0, -1.0, 0.0, 1.0);
  }
}

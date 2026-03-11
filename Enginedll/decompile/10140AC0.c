/*
 * func-name: ?ReleaseMaterial@NxPhysics@@QAEXH@Z
 * func-address: 0x10140ac0
 * callers: none
 * callees: none
 */

void __thiscall NxPhysics::ReleaseMaterial(NxPhysics *this, int a2)
{
  int v3; // eax

  if ( *((_DWORD *)this + 2) && a2 > 0 )
  {
    v3 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 320))(*((_DWORD *)this + 3), a2);
    if ( v3 )
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 148))(*((_DWORD *)this + 3), v3);
  }
}

/*
 * func-name: ?SetMaterialProperties@NxPhysics@@QAEXHMM@Z
 * func-address: 0x101447f0
 * callers: none
 * callees: 0x10144030
 */

void __thiscall NxPhysics::SetMaterialProperties(NxPhysics *this, int a2, float a3, float a4)
{
  int v5; // esi

  if ( a2 >= 0 && *((_DWORD *)this + 2) )
  {
    NxPhysics::FlushScene(this);
    v5 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 320))(*((_DWORD *)this + 3), a2);
    if ( v5 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 36))(v5, LODWORD(a3));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 28))(v5, LODWORD(a4));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 20))(v5, LODWORD(a4));
    }
  }
}

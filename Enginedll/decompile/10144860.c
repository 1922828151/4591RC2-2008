/*
 * func-name: ?SetMaterialProperties@NxPhysics@@QAEXHMMM@Z
 * func-address: 0x10144860
 * callers: none
 * callees: 0x10144030
 */

void __thiscall NxPhysics::SetMaterialProperties(NxPhysics *this, int a2, float a3, float a4, float a5)
{
  int v6; // esi
  float v7; // [esp+30h] [ebp+10h]
  float v8; // [esp+30h] [ebp+10h]

  if ( a2 >= 0 && *((_DWORD *)this + 2) )
  {
    NxPhysics::FlushScene(this);
    v6 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 320))(*((_DWORD *)this + 3), a2);
    if ( v6 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 36))(v6, LODWORD(a3));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 28))(v6, LODWORD(a5));
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 20))(v6, LODWORD(a4));
      v7 = a5 * 0.2000000029802322;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 52))(v6, LODWORD(v7));
      v8 = a4 * 0.2000000029802322;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 44))(v6, LODWORD(v8));
    }
  }
}

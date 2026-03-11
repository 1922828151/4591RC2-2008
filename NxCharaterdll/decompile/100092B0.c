/*
 * func-name: sub_100092B0
 * func-address: 0x100092b0
 * callers: none
 * callees: none
 */

int __thiscall sub_100092B0(_DWORD *this)
{
  int result; // eax
  void (__thiscall **v3)(_DWORD *, int); // esi
  int v4; // eax

  for ( result = this[2]; *(_DWORD *)(result + 8); result = this[2] )
  {
    v3 = (void (__thiscall **)(_DWORD *, int))(*this + 12);
    v4 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(result + 4) + 8))(**(_DWORD **)(result + 4));
    (*v3)(this, v4);
  }
  return result;
}

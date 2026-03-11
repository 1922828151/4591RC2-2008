/*
 * func-name: sub_10009110
 * func-address: 0x10009110
 * callers: 0x10009350
 * callees: none
 */

_DWORD *__thiscall sub_10009110(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  *this = &CharacterControllerManager::`vftable';
  this[3] = a2;
  v3 = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 16, 0);
  this[2] = v3;
  if ( v3 )
  {
    *v3 = this[3];
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
  }
  result = this;
  this[1] = 0;
  return result;
}

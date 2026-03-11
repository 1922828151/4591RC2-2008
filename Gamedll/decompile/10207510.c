/*
 * func-name: sub_10207510
 * func-address: 0x10207510
 * callers: 0x10008f12
 * callees: none
 */

int __thiscall sub_10207510(_DWORD *this, int a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax

  v3 = (void (__thiscall ***)(_DWORD, int))this[74];
  if ( v3 )
  {
    (**v3)(v3, 1);
    result = a2;
    this[74] = 0;
  }
  this[74] = a2;
  return result;
}

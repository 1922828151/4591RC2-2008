/*
 * func-name: sub_1001C7C0
 * func-address: 0x1001c7c0
 * callers: 0x10013d90, 0x10020950, 0x10020ae0, 0x10020c00, 0x10020e20, 0x10023eb0, 0x100286a0, 0x100313e0, 0x100318d0, 0x10031d00, 0x10032ab0, 0x10032bd0, 0x100585f0, 0x100f5df0
 * callees: none
 */

int *__thiscall sub_1001C7C0(int *this)
{
  int v2; // eax
  int v3; // ecx

  if ( !*this )
    invalid_parameter_noinfo();
  v2 = *(_DWORD *)(this[1] + 4);
  v3 = *this;
  this[1] = v2;
  if ( v2 == *(_DWORD *)(v3 + 4) )
    invalid_parameter_noinfo();
  return this;
}

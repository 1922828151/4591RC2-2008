/*
 * func-name: sub_102B3E90
 * func-address: 0x102b3e90
 * callers: 0x100151d1
 * callees: 0x1000f8f8, 0x100147b3
 */

int __thiscall sub_102B3E90(int this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx

  sub_1000F8F8((void *)this, a2);
  v3 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(this + 4) > v3 )
    _invalid_parameter_noinfo();
  v4 = *(_DWORD *)(this + 4);
  if ( v4 > *(_DWORD *)(this + 8) )
    _invalid_parameter_noinfo();
  return sub_100147B3(this, v4, this, v3, *(unsigned __int8 *)(this + 16));
}

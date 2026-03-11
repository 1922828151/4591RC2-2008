/*
 * func-name: sub_10053B70
 * func-address: 0x10053b70
 * callers: 0x10053de0, 0x10053f70
 * callees: 0x10053650
 */

_DWORD *__thiscall sub_10053B70(int this)
{
  char *v2; // edi
  unsigned int v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = *(char **)(this + 8);
  if ( *(_DWORD *)(this + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(_DWORD *)(this + 4);
  if ( v3 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  return sub_10053650((char **)this, &v5, this, v3, this, v2);
}

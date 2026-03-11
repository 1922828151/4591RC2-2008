/*
 * func-name: sub_100709D0
 * func-address: 0x100709d0
 * callers: 0x10070f20
 * callees: 0x1006fde0
 */

_DWORD *__thiscall sub_100709D0(int this)
{
  char *v2; // edi
  char *v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = *(char **)(this + 8);
  if ( *(_DWORD *)(this + 4) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = *(char **)(this + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  return sub_1006FDE0((char **)this, &v5, this, v3, this, v2);
}

/*
 * func-name: sub_10170180
 * func-address: 0x10170180
 * callers: 0x10170df0
 * callees: 0x10027f90, 0x101100e0
 */

_DWORD *__thiscall sub_10170180(_DWORD *this, unsigned int a2, int *a3)
{
  int v3; // edx
  char *v5; // edi
  bool v6; // cc
  char *v7; // ebx
  _DWORD *v8; // edi
  int v10[2]; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF

  v3 = a3[1];
  v5 = (char *)this[2];
  v6 = this[1] <= (unsigned int)v5;
  v10[0] = *a3;
  v10[1] = v3;
  if ( !v6 )
    invalid_parameter_noinfo();
  v7 = (char *)this[1];
  if ( (unsigned int)v7 > this[2] )
    invalid_parameter_noinfo();
  sub_101100E0(this, &v11, (int)this, v7, (int)this, v5);
  v8 = (_DWORD *)this[1];
  if ( (unsigned int)v8 > this[2] )
    invalid_parameter_noinfo();
  return sub_10027F90(this, (int)this, v8, a2, v10);
}

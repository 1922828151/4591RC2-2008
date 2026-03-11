/*
 * func-name: sub_10230670
 * func-address: 0x10230670
 * callers: 0x10006e51
 * callees: 0x10017143, 0x102c9d50
 */

_DWORD *__thiscall sub_10230670(_DWORD *this, _DWORD *a2, int a3, int *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int i; // ebx
  int v8; // ecx
  int v9; // edi
  int *v10; // edx
  int v11; // ecx
  _DWORD *v12; // edi
  int v13; // edi
  _DWORD *result; // eax

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(int **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = this[8];
  v6 = v5 & sub_10017143((int)(a4 + 2));
  if ( this[9] <= v6 )
    v6 += -1 - (v5 >> 1);
  for ( i = v6; ; --i )
  {
    v8 = this[5];
    if ( !v8 || i >= (this[6] - v8) >> 3 )
      _invalid_parameter_noinfo();
    v9 = 8 * i + this[5];
    if ( a3 != *(_DWORD *)v9 )
      _invalid_parameter_noinfo();
    v10 = a4;
    if ( a4 != *(int **)(v9 + 4) )
      break;
    v11 = this[5];
    if ( !v11 || i >= (this[6] - v11) >> 3 )
    {
      _invalid_parameter_noinfo();
      v10 = a4;
    }
    v12 = (_DWORD *)(8 * i + this[5]);
    if ( !*v12 )
    {
      _invalid_parameter_noinfo();
      v10 = a4;
    }
    if ( v12[1] == *(_DWORD *)(*v12 + 4) )
    {
      _invalid_parameter_noinfo();
      v10 = a4;
    }
    v12[1] = *(_DWORD *)v12[1];
    if ( !i )
      break;
  }
  if ( v10 == *(int **)(a3 + 4) )
  {
    _invalid_parameter_noinfo();
    v10 = a4;
  }
  v13 = *v10;
  if ( v10 != (int *)this[2] )
  {
    *(_DWORD *)v10[1] = v13;
    *(_DWORD *)(*v10 + 4) = v10[1];
    std::string::~string(v10 + 2);
    operator delete(a4);
    --this[3];
  }
  result = a2;
  a2[1] = v13;
  *a2 = a3;
  return result;
}

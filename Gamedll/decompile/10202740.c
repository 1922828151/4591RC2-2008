/*
 * func-name: sub_10202740
 * func-address: 0x10202740
 * callers: 0x10013241
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10202740(_DWORD *this, _DWORD *a2, int a3, _DWORD *a4)
{
  ldiv_t v5; // rax
  unsigned int v6; // eax
  unsigned int i; // ebx
  int v8; // ecx
  int v9; // esi
  void *v10; // edx
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *v13; // ebp
  int v14; // esi
  int v15; // ebx
  _DWORD *result; // eax

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = ldiv(a4[2] ^ 0xDEADBEEF, 127773);
  v6 = (16807 * v5.rem - 2836 * v5.quot + (16807 * v5.rem - 2836 * v5.quot < 0 ? 0x7FFFFFFF : 0)) & this[8];
  if ( this[9] <= v6 )
    v6 += -1 - (this[8] >> 1);
  for ( i = v6; ; --i )
  {
    v8 = this[5];
    if ( !v8 || i >= (this[6] - v8) >> 3 )
      _invalid_parameter_noinfo();
    v9 = 8 * i + this[5];
    if ( a3 != *(_DWORD *)v9 )
      _invalid_parameter_noinfo();
    v10 = a4;
    if ( a4 != *(_DWORD **)(v9 + 4) )
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
  if ( v10 == *(void **)(a3 + 4) )
  {
    _invalid_parameter_noinfo();
    v10 = a4;
  }
  v13 = *(_DWORD **)v10;
  if ( v10 != (void *)this[2] )
  {
    **((_DWORD **)v10 + 1) = v13;
    *(_DWORD *)(*(_DWORD *)v10 + 4) = *((_DWORD *)v10 + 1);
    v14 = *((_DWORD *)v10 + 7);
    if ( v14 )
    {
      v15 = *((_DWORD *)v10 + 8);
      if ( v14 != v15 )
      {
        do
        {
          std::string::~string((void *)(v14 + 4));
          v14 += 84;
        }
        while ( v14 != v15 );
        v10 = a4;
      }
      operator delete(*((void **)v10 + 7));
      v10 = a4;
    }
    *((_DWORD *)v10 + 7) = 0;
    *((_DWORD *)v10 + 8) = 0;
    *((_DWORD *)v10 + 9) = 0;
    operator delete(v10);
    --this[3];
  }
  result = a2;
  a2[1] = v13;
  *a2 = a3;
  return result;
}

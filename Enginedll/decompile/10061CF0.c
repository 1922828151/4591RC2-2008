/*
 * func-name: sub_10061CF0
 * func-address: 0x10061cf0
 * callers: 0x100604d0
 * callees: none
 */

_DWORD *__thiscall sub_10061CF0(_DWORD *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  _WORD *v8; // eax
  char *v9; // ecx
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = (char *)this[2];
    if ( a6 != v9 )
    {
      do
      {
        *(_WORD *)((char *)v8 + a4 - a6) = *v8;
        ++v8;
      }
      while ( v8 != (_WORD *)v9 );
      v6 = a3;
    }
    this[2] = &a4[2 * ((v9 - a6) >> 1)];
  }
  result = a2;
  a2[1] = a4;
  *a2 = v6;
  return result;
}

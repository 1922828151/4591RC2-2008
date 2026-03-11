/*
 * func-name: sub_1005FB90
 * func-address: 0x1005fb90
 * callers: 0x1000e746
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_1005FB90(int this, _DWORD *a2, int a3, void *a4)
{
  _DWORD *v5; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(void **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *(_DWORD **)a4;
  if ( a4 != *(void **)(this + 4) )
  {
    **((_DWORD **)a4 + 1) = v5;
    *(_DWORD *)(*(_DWORD *)a4 + 4) = *((_DWORD *)a4 + 1);
    if ( *((_DWORD *)a4 + 4) )
      operator delete(*((void **)a4 + 4));
    *((_DWORD *)a4 + 4) = 0;
    *((_DWORD *)a4 + 5) = 0;
    *((_DWORD *)a4 + 6) = 0;
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}

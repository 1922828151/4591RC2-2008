/*
 * func-name: sub_100670D0
 * func-address: 0x100670d0
 * callers: 0x1000f4ed
 * callees: 0x10006bea, 0x102c9d50
 */

_DWORD *__thiscall sub_100670D0(int this, _DWORD *a2, int a3, void *a4)
{
  _DWORD *v6; // eax
  _DWORD *result; // eax
  _DWORD *v8; // [esp+24h] [ebp+Ch]

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(void **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v6 = *(_DWORD **)a4;
  v8 = *(_DWORD **)a4;
  if ( a4 != *(void **)(this + 4) )
  {
    **((_DWORD **)a4 + 1) = v6;
    *(_DWORD *)(*(_DWORD *)a4 + 4) = *((_DWORD *)a4 + 1);
    if ( *((_DWORD *)a4 + 8) )
      operator delete(*((void **)a4 + 8));
    *((_DWORD *)a4 + 8) = 0;
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 10) = 0;
    sub_10006BEA();
    operator delete(*((void **)a4 + 5));
    *((_DWORD *)a4 + 5) = 0;
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v8;
  return result;
}

/*
 * func-name: sub_10003520
 * func-address: 0x10003520
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_10003520(_DWORD *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *i; // ecx
  _DWORD *v14; // edx
  _DWORD *result; // eax

  v3 = this[8224];
  v4 = this[8223];
  if ( v3 <= v4 )
  {
    v5 = this[8222];
    v6 = 2 * ((int)(v4 - v5) >> 2) + 2;
    v7 = v5 ? (int)(v3 - v5) >> 2 : 0;
    if ( v7 < v6 )
    {
      v8 = v6;
      v9 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * v6, 289);
      v10 = (_DWORD *)this[8223];
      v11 = (_DWORD *)v9;
      v12 = (_DWORD *)this[8222];
      for ( i = v11; v12 != v10; ++i )
        *i = *v12++;
      if ( this[8222] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[8222]);
      v14 = &v11[(this[8223] - this[8222]) >> 2];
      this[8222] = v11;
      this[8224] = &v11[v8];
      this[8223] = v14;
    }
  }
  result = (_DWORD *)this[8223];
  *result = a2;
  this[8223] += 4;
  return result;
}

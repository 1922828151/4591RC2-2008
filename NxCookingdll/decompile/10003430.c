/*
 * func-name: sub_10003430
 * func-address: 0x10003430
 * callers: none
 * callees: none
 */

int __thiscall sub_10003430(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *i; // edx
  int v4; // esi

  result = 0;
  if ( (this[8223] - this[8222]) >> 2 )
  {
    for ( i = (_DWORD *)this[8222]; *i != a2; ++i )
    {
      if ( ++result >= (unsigned int)((this[8223] - this[8222]) >> 2) )
        return result;
    }
    v4 = this[8222];
    if ( result != ((this[8223] - v4) >> 2) - 1 )
      *(_DWORD *)(v4 + 4 * result) = *(_DWORD *)(this[8223] - 4);
    this[8223] -= 4;
  }
  return result;
}

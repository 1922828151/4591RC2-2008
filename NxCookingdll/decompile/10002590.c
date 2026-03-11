/*
 * func-name: sub_10002590
 * func-address: 0x10002590
 * callers: none
 * callees: none
 */

int __thiscall sub_10002590(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  int result; // eax
  int v6; // ecx
  unsigned int i; // edi
  int v8; // ecx

  v3 = this[8217];
  v4 = 0;
  result = (this[8223] - this[8222]) >> 2;
  if ( result )
  {
    do
    {
      v6 = *(_DWORD *)(this[8222] + 4 * v4);
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 8))(v6, v3, a2);
      ++v4;
    }
    while ( v4 < (this[8223] - this[8222]) >> 2 );
  }
  this[8217] = a2;
  for ( i = 0; i < (this[8223] - this[8222]) >> 2; ++i )
  {
    v8 = *(_DWORD *)(this[8222] + 4 * i);
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 12))(v8, v3, a2);
  }
  return result;
}

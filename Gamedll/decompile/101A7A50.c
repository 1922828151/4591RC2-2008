/*
 * func-name: sub_101A7A50
 * func-address: 0x101a7a50
 * callers: 0x10003d82
 * callees: none
 */

int __thiscall sub_101A7A50(_DWORD *this)
{
  char v1; // dl
  int v2; // ebp
  int i; // esi
  int v5; // ecx
  int v6; // eax
  char v8; // [esp+13h] [ebp-1h]

  v1 = v8;
  v2 = 0;
  for ( i = 0; i != 35; i += 7 )
  {
    v5 = this[3];
    if ( (unsigned int)(v5 + 1) <= this[2] )
    {
      v1 = *(_BYTE *)(v5 + this[1]);
      this[3] = v5 + 1;
    }
    v6 = (v1 & 0x7F) << i;
    v2 |= v6;
    if ( v1 >= 0 )
      return v2;
  }
  return 0;
}

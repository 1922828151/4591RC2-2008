/*
 * func-name: sub_1006F170
 * func-address: 0x1006f170
 * callers: 0x10070a10, 0x10070a30
 * callees: 0x1006c530
 */

int __thiscall sub_1006F170(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  int result; // eax
  int v8; // edx
  int v9; // ebx
  _DWORD *v10; // ecx
  int v12; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = this[1];
  v12 = v3;
  if ( a2 < v3 )
  {
    v4 = 532 * a2;
    v5 = v3 - a2;
    do
    {
      v6 = v4 + *v2 + 512;
      if ( *(_DWORD *)v6 )
      {
        free(*(void **)v6);
        *(_DWORD *)v6 = 0;
      }
      v4 += 532;
      --v5;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v2 = this;
    }
    while ( v5 );
    v3 = v12;
  }
  result = sub_1006C530((int)v2, a2);
  if ( v3 < a2 )
  {
    v8 = 532 * v3;
    v9 = a2 - v3;
    do
    {
      v10 = (_DWORD *)(v8 + *v2);
      if ( v10 )
      {
        v10[128] = 0;
        v10[129] = 0;
        v10[130] = 0;
      }
      v8 += 532;
      --v9;
    }
    while ( v9 );
  }
  return result;
}

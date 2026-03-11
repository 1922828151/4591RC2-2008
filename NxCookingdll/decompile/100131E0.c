/*
 * func-name: sub_100131E0
 * func-address: 0x100131e0
 * callers: 0x1000dbc0, 0x10013650, 0x10013840
 * callees: none
 */

char __cdecl sub_100131E0(int a1, int a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  unsigned int v8; // esi
  int v10; // [esp+14h] [ebp+Ch]
  int v11; // [esp+14h] [ebp+Ch]

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a4 + 24))(a4, a1, 4 * a2);
  if ( a3 )
  {
    v4 = 0;
    if ( a2 >= 4 )
    {
      v5 = ((unsigned int)(a2 - 4) >> 2) + 1;
      v6 = (_BYTE *)(a1 + 6);
      v4 = 4 * v5;
      do
      {
        LOBYTE(v10) = *(v6 - 3);
        BYTE1(v10) = *(v6 - 4);
        BYTE2(v10) = *(v6 - 5);
        HIBYTE(v10) = *(v6 - 6);
        *(_DWORD *)(v6 - 6) = v10;
        LOBYTE(v10) = v6[1];
        BYTE1(v10) = *v6;
        BYTE2(v10) = *(v6 - 1);
        HIBYTE(v10) = *(v6 - 2);
        *(_DWORD *)(v6 - 2) = v10;
        LOBYTE(v10) = v6[5];
        BYTE1(v10) = v6[4];
        BYTE2(v10) = v6[3];
        HIBYTE(v10) = v6[2];
        *(_DWORD *)(v6 + 2) = v10;
        LOBYTE(v10) = v6[9];
        BYTE1(v10) = v6[8];
        BYTE2(v10) = v6[7];
        HIBYTE(v10) = v6[6];
        *(_DWORD *)(v6 + 6) = v10;
        v6 += 16;
        --v5;
      }
      while ( v5 );
    }
    if ( v4 < a2 )
    {
      v7 = (_BYTE *)(a1 + 4 * v4 + 2);
      v8 = a2 - v4;
      do
      {
        LOBYTE(v11) = v7[1];
        BYTE1(v11) = *v7;
        BYTE2(v11) = *(v7 - 1);
        HIBYTE(v11) = *(v7 - 2);
        *(_DWORD *)(v7 - 2) = v11;
        v7 += 4;
        --v8;
      }
      while ( v8 );
    }
  }
  return 1;
}

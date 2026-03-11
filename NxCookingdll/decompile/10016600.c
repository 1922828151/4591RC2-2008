/*
 * func-name: sub_10016600
 * func-address: 0x10016600
 * callers: 0x100179f0
 * callees: 0x10014c40, 0x10015160, 0x100151a0
 */

int *__cdecl sub_10016600(unsigned int a1, unsigned int a2, int a3, int *a4, char a5)
{
  int *result; // eax
  unsigned int v6; // esi
  __int16 v7; // dx
  int v8; // ecx
  __int16 v9; // [esp+14h] [ebp+4h]
  int v10; // [esp+14h] [ebp+4h]

  result = (int *)a1;
  v6 = 0;
  if ( a1 > 0xFF )
  {
    if ( a1 > 0xFFFF )
    {
      if ( a2 )
      {
        do
        {
          v8 = *(_DWORD *)(a3 + 4 * v6);
          v10 = v8;
          if ( a5 )
          {
            HIBYTE(v10) = v8;
            LOBYTE(v10) = HIBYTE(v8);
            BYTE1(v10) = BYTE2(v8);
            BYTE2(v10) = BYTE1(v8);
          }
          result = sub_10015160(a4, v10);
          ++v6;
        }
        while ( v6 < a2 );
      }
    }
    else if ( a2 )
    {
      do
      {
        v7 = *(_WORD *)(a3 + 4 * v6);
        v9 = v7;
        if ( a5 )
        {
          LOBYTE(v9) = HIBYTE(v7);
          HIBYTE(v9) = v7;
        }
        result = sub_100151A0(a4, v9);
        ++v6;
      }
      while ( v6 < a2 );
    }
  }
  else if ( a2 )
  {
    do
      result = sub_10014C40(a4, *(_BYTE *)(a3 + 4 * v6++));
    while ( v6 < a2 );
  }
  return result;
}

/*
 * func-name: sub_10008B70
 * func-address: 0x10008b70
 * callers: 0x10007720, 0x1000b100
 * callees: 0x10006520, 0x10019586
 */

void __cdecl sub_10008B70(int *a1, int a2, int *a3)
{
  int *v4; // esi
  int v5; // eax
  _DWORD v6[6]; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v6[5] = v6;
  v4 = a1;
  v6[4] = a1;
  v7 = 0;
  while ( a2 )
  {
    LOBYTE(v7) = 1;
    if ( v4 )
    {
      v5 = *a3;
      *v4 = *a3;
      if ( v5 )
        InterlockedIncrement((volatile LONG *)(v5 + 4));
    }
    LOBYTE(v7) = 0;
    --a2;
    ++v4;
  }
}

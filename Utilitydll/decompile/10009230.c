/*
 * func-name: sub_10009230
 * func-address: 0x10009230
 * callers: 0x10006610, 0x10008380, 0x1000b9b0
 * callees: 0x10006520, 0x10019586
 */

int *__cdecl sub_10009230(int *a1, int *a2, int *a3)
{
  int *v3; // esi
  int v5; // eax
  _DWORD v7[6]; // [esp+0h] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[5] = v7;
  v3 = a3;
  v7[4] = a3;
  v8 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v8) = 1;
    if ( v3 )
    {
      v5 = *a1;
      *v3 = *a1;
      if ( v5 )
        InterlockedIncrement((volatile LONG *)(v5 + 4));
    }
    LOBYTE(v8) = 0;
    ++v3;
    ++a1;
  }
  return v3;
}

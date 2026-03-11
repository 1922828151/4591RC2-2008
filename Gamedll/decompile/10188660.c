/*
 * func-name: sub_10188660
 * func-address: 0x10188660
 * callers: 0x100041f1
 * callees: 0x10003bed, 0x100186f1, 0x102c9d86
 */

int __cdecl sub_10188660(int a1, int a2, void *a3)
{
  int v3; // esi
  int result; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v6[6] = v6;
  v3 = a1;
  v6[5] = a1;
  v7 = 0;
  while ( a2 )
  {
    v6[4] = v3;
    LOBYTE(v7) = 1;
    if ( v3 )
      result = sub_100186F1(a3);
    --a2;
    v3 += 84;
    LOBYTE(v7) = 0;
  }
  return result;
}

/*
 * func-name: sub_1010AF90
 * func-address: 0x1010af90
 * callers: 0x10019137
 * callees: 0x10003bed, 0x100186f1, 0x102c9d86
 */

int __cdecl sub_1010AF90(char *a1, char *a2, int a3)
{
  int v3; // esi
  _DWORD v6[7]; // [esp+0h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v6[6] = v6;
  v3 = a3;
  v6[5] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    v6[4] = v3;
    LOBYTE(v7) = 1;
    if ( v3 )
      sub_100186F1(a1);
    v3 += 84;
    LOBYTE(v7) = 0;
    a1 += 84;
  }
  return v3;
}

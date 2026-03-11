/*
 * func-name: sub_100F1A90
 * func-address: 0x100f1a90
 * callers: 0x100f0c50, 0x100f1180
 * callees: 0x100f19e0, 0x101786e0, 0x101a251c
 */

void __thiscall sub_100F1A90(_DWORD *this, unsigned int a2)
{
  int v3[16]; // [esp+4h] [ebp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  sub_101786E0(1.0);
  sub_100F19E0(
    this,
    a2,
    v3[0],
    v3[1],
    v3[2],
    v3[3],
    v3[4],
    v3[5],
    v3[6],
    v3[7],
    v3[8],
    v3[9],
    v3[10],
    v3[11],
    v3[12],
    v3[13],
    v3[14],
    COERCE_INT(1.0));
}

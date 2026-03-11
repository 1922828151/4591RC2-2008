/*
 * func-name: sub_100F7F60
 * func-address: 0x100f7f60
 * callers: 0x100f30c0
 * callees: 0x100f76c0, 0x101786e0, 0x101a251c
 */

unsigned int __thiscall sub_100F7F60(void *this, unsigned int a2)
{
  int v4[19]; // [esp+4h] [ebp-4Ch] BYREF

  memset(v4, 0, 0x40u);
  sub_101786E0(1.0);
  return sub_100F76C0(
           (int)this,
           a2,
           v4[0],
           v4[1],
           v4[2],
           v4[3],
           v4[4],
           v4[5],
           v4[6],
           v4[7],
           v4[8],
           v4[9],
           v4[10],
           v4[11],
           v4[12],
           v4[13],
           v4[14],
           COERCE_INT(1.0),
           v4[16]);
}

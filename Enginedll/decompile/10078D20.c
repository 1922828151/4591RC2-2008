/*
 * func-name: sub_10078D20
 * func-address: 0x10078d20
 * callers: 0x10077c20
 * callees: 0x10078c70
 */

void __thiscall sub_10078D20(_DWORD *this, unsigned int a2)
{
  int v2[16]; // [esp-44h] [ebp-88h] BYREF
  float v3[16]; // [esp+4h] [ebp-40h] BYREF

  v3[4] = 0.0;
  v3[5] = 0.0;
  v3[6] = 0.0;
  v3[7] = 0.0;
  v3[8] = 0.0;
  v3[9] = 0.0;
  v3[10] = 0.0;
  v3[11] = 0.0;
  v3[12] = 0.0;
  v3[13] = 0.0;
  v3[14] = 0.0;
  v3[15] = 0.0;
  qmemcpy(v2, v3, sizeof(v2));
  sub_10078C70(
    this,
    a2,
    v2[0],
    v2[1],
    v2[2],
    v2[3],
    v2[4],
    v2[5],
    v2[6],
    v2[7],
    v2[8],
    v2[9],
    v2[10],
    v2[11],
    v2[12],
    v2[13],
    v2[14],
    v2[15]);
}

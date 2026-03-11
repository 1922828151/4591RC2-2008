/*
 * func-name: sub_100792C0
 * func-address: 0x100792c0
 * callers: 0x100793e0
 * callees: 0x1017b990
 */

bool __cdecl sub_100792C0(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  float v13; // [esp+0h] [ebp-34h]
  float v14[3]; // [esp+4h] [ebp-30h] BYREF
  float v15; // [esp+10h] [ebp-24h] BYREF
  float v16; // [esp+14h] [ebp-20h]
  float v17; // [esp+18h] [ebp-1Ch]
  float v18[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v19[3]; // [esp+28h] [ebp-Ch] BYREF
  float v20; // [esp+38h] [ebp+4h]

  v14[0] = a1 - a7;
  v14[1] = a2 - a8;
  v14[2] = a3 - a9;
  v20 = a10 - a7;
  v15 = v20;
  v13 = a11 - a8;
  v16 = v13;
  a10 = a12 - a9;
  v17 = a10;
  sub_1017B990(v18, &v15, v14);
  v15 = a4 - a7;
  v16 = a5 - a8;
  v17 = a6 - a9;
  a7 = v20;
  a8 = v13;
  a9 = a10;
  sub_1017B990(v19, &a7, &v15);
  a7 = v18[1] * v19[1] + v19[0] * v18[0] + v18[2] * v19[2];
  return a7 >= 0.0;
}

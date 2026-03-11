/*
 * func-name: sub_10133CE0
 * func-address: 0x10133ce0
 * callers: 0x10134090
 * callees: 0x10132c30, 0x10134ab0, 0x10134cb0, 0x101a2500
 */

int __cdecl sub_10133CE0(int a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-294h] BYREF
  void *v6; // [esp+10h] [ebp-290h]
  int v7; // [esp+14h] [ebp-28Ch]
  int v8; // [esp+18h] [ebp-288h]
  int v9; // [esp+1Ch] [ebp-284h]
  float v10[14]; // [esp+20h] [ebp-280h] BYREF
  _BYTE v11[56]; // [esp+58h] [ebp-248h] BYREF
  _BYTE v12[56]; // [esp+90h] [ebp-210h] BYREF
  float v13[70]; // [esp+C8h] [ebp-1D8h] BYREF
  _BYTE v14[180]; // [esp+1E0h] [ebp-C0h] BYREF
  int v15; // [esp+29Ch] [ebp-4h]

  v9 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v13[0] = 0.0;
  v15 = 0;
  v13[1] = 0.0;
  v13[2] = 0.0;
  v13[3] = 0.0;
  v13[4] = 0.0;
  v13[5] = 0.0;
  v13[6] = 0.0;
  v13[7] = 0.0;
  v13[8] = 0.0;
  v13[9] = 0.0;
  v13[10] = 0.0;
  v13[11] = 0.0;
  v13[12] = 0.0;
  v13[13] = 0.0;
  v13[14] = 0.0;
  v13[15] = 0.0;
  v13[16] = 0.0;
  v13[17] = 0.0;
  v13[18] = 0.0;
  v13[19] = 0.0;
  v13[20] = 0.0;
  v13[21] = 0.0;
  v13[22] = 0.0;
  v13[23] = 0.0;
  v13[24] = 0.0;
  v13[25] = 0.0;
  v13[26] = 0.0;
  v13[27] = 0.0;
  v13[28] = 0.0;
  v13[29] = 0.0;
  v13[30] = 0.0;
  v13[31] = 0.0;
  v13[32] = 0.0;
  v13[33] = 0.0;
  v13[34] = 0.0;
  v13[35] = 0.0;
  v13[36] = 0.0;
  v13[37] = 0.0;
  v13[38] = 0.0;
  v13[39] = 0.0;
  v13[40] = 0.0;
  v13[41] = 0.0;
  v13[42] = 0.0;
  v13[43] = 0.0;
  v13[44] = 0.0;
  v13[45] = 0.0;
  v13[46] = 0.0;
  v13[47] = 0.0;
  v13[48] = 0.0;
  v13[49] = 0.0;
  v13[50] = 0.0;
  v13[51] = 0.0;
  v13[52] = 0.0;
  v13[53] = 0.0;
  v13[54] = 0.0;
  v13[55] = 0.0;
  v13[56] = 0.0;
  v13[57] = 0.0;
  v13[58] = 0.0;
  v13[59] = 0.0;
  v13[60] = 0.0;
  v13[61] = 0.0;
  v13[62] = 0.0;
  v13[63] = 0.0;
  v13[64] = 0.0;
  v13[65] = 0.0;
  v13[66] = 0.0;
  v13[67] = 0.0;
  v13[68] = 0.0;
  v13[69] = 0.0;
  qmemcpy(v10, (const void *)(a3 + 8), sizeof(v10));
  qmemcpy(v11, (const void *)(a3 + 64), sizeof(v11));
  qmemcpy(v12, (const void *)(a3 + 120), sizeof(v12));
  v3 = sub_10132C30(v10, a2);
  if ( v3 )
  {
    qmemcpy(v14, (const void *)a3, 0xB0u);
    if ( v3 == 3 )
    {
      qmemcpy(&v14[8], v10, 0x38u);
      qmemcpy(&v14[64], v11, 0x38u);
      qmemcpy(&v14[120], v12, 0x38u);
      sub_10134CB0((int)&v5, v14);
    }
    else
    {
      qmemcpy(&v14[8], v11, 0x38u);
      qmemcpy(&v14[64], v12, 0x38u);
      qmemcpy(&v14[120], v10, 0x38u);
      sub_10134CB0((int)&v5, v14);
      qmemcpy(v14, (const void *)a3, 0xB0u);
      qmemcpy(&v14[8], v12, 0x38u);
      qmemcpy(&v14[64], v13, 0x38u);
      qmemcpy(&v14[120], v10, 0x38u);
      sub_10134CB0((int)&v5, v14);
    }
  }
  sub_10134AB0(&v5);
  if ( v6 )
    operator delete(v6);
  return a1;
}

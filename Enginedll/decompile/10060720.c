/*
 * func-name: sub_10060720
 * func-address: 0x10060720
 * callers: 0x10060720, 0x100608d0
 * callees: 0x10060720, 0x10062970
 */

unsigned int __thiscall sub_10060720(_DWORD *this, int *a2, int *a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // edx
  unsigned int result; // eax
  int v9; // ebx
  _DWORD *v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ebx
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // [esp+14h] [ebp-28h] BYREF
  int v27; // [esp+18h] [ebp-24h]
  int v28; // [esp+1Ch] [ebp-20h]
  _DWORD v29[3]; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v30[4]; // [esp+2Ch] [ebp-10h] BYREF
  int v31; // [esp+40h] [ebp+4h]
  unsigned int v32; // [esp+44h] [ebp+8h]

  v5 = a3[1] - a2[1];
  v6 = a3[2] - a2[2];
  v26 = *a3 - *a2;
  v27 = v5;
  v28 = v6;
  if ( v26 == 1 && v6 == 1 )
  {
    v7 = this[15];
    this[15] = v7 + 1;
    return -1 - v7;
  }
  else
  {
    v9 = v26 >= v6 ? 0 : 2;
    if ( (double)v27 > 4.0 && v5 >= *(&v26 + v9) )
      v9 = 1;
    v10 = this + 2;
    memset(v30, 0, sizeof(v30));
    sub_10062970((int)(this + 2), v30);
    v11 = v10[1];
    if ( v11 )
      v12 = (v10[2] - v11) >> 4;
    else
      v12 = 0;
    v13 = v10[1];
    v14 = v12 - 1;
    v32 = v12 - 1;
    if ( !v13 || v14 >= (v10[2] - v13) >> 4 )
    {
      invalid_parameter_noinfo();
      v14 = v32;
    }
    v15 = v10[1];
    v16 = 16 * v14;
    *(_BYTE *)(v15 + v16) = v9;
    v31 = v16;
    *(float *)(v16 + v15 + 4) = (double)(a3[v9] + a2[v9]) * 32.0;
    v17 = *a2;
    v18 = a3[1];
    v26 = *a3;
    v29[1] = a2[1];
    v19 = a3[v9] + a2[v9];
    v29[0] = v17;
    v20 = a3[2];
    v27 = v18;
    v21 = a2[2];
    v19 >>= 1;
    v28 = v20;
    v29[2] = v21;
    v29[v9] = v19;
    *(&v26 + v9) = v19;
    v22 = sub_10060720(a2, &v26);
    v23 = sub_10060720(v29, a3);
    v24 = v10[1];
    if ( !v24 || v32 >= (v10[2] - v24) >> 4 )
      invalid_parameter_noinfo();
    *(_DWORD *)(v31 + v10[1] + 8) = v22;
    v25 = v10[1];
    if ( !v25 || v32 >= (v10[2] - v25) >> 4 )
      invalid_parameter_noinfo();
    result = v32;
    *(_DWORD *)(v10[1] + v31 + 12) = v23;
  }
  return result;
}

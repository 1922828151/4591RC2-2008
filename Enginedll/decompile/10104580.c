/*
 * func-name: sub_10104580
 * func-address: 0x10104580
 * callers: none
 * callees: 0x10102270, 0x10103770, 0x10103ef0, 0x1017a0b0, 0x101a2500
 */

int __thiscall sub_10104580(int *this, float *a2)
{
  float *v3; // esi
  int v4; // edx
  int v5; // eax
  float v6; // edx
  float v7; // eax
  float v8; // edx
  float v9; // eax
  float v10; // edx
  float v11; // eax
  double v12; // st6
  int result; // eax
  _DWORD v14[4]; // [esp+8h] [ebp-34h] BYREF
  float v15; // [esp+18h] [ebp-24h]
  float v16; // [esp+1Ch] [ebp-20h]
  float v17; // [esp+20h] [ebp-1Ch]
  float v18; // [esp+24h] [ebp-18h]
  float v19; // [esp+28h] [ebp-14h]
  float v20; // [esp+2Ch] [ebp-10h]
  int v21; // [esp+38h] [ebp-4h]

  v3 = (float *)*this;
  if ( *this )
  {
    v4 = *((_DWORD *)a2 + 3);
    *(float *)&v14[1] = a2[2];
    v5 = *((_DWORD *)a2 + 4);
    v14[2] = v4;
    v6 = a2[5];
    v14[3] = v5;
    v7 = a2[6];
    v15 = v6;
    v8 = a2[7];
    v16 = v7;
    v9 = a2[8];
    v17 = v8;
    v10 = a2[9];
    v18 = v9;
    v11 = a2[10];
    v14[0] = &BBox::`vftable';
    v19 = v10;
    v20 = v11;
    v12 = v3[4];
    v21 = 0;
    if ( v12 > v15
      || v3[5] > (double)v16
      || v3[6] > (double)v17
      || v3[7] < (double)v18
      || v3[8] < (double)v19
      || v3[9] < (double)v20 )
    {
      sub_10102270((int)v3);
      operator delete(v3);
      *this = 0;
      sub_10103770(this);
    }
    else
    {
      sub_10103EF0(v3, (int)this, (int)a2);
    }
    v21 = -1;
    return sub_1017A0B0(v14);
  }
  return result;
}

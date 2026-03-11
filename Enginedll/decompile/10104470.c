/*
 * func-name: sub_10104470
 * func-address: 0x10104470
 * callers: 0x1004e860, 0x100509d0, 0x101046b0
 * callees: 0x100ee930, 0x10102270, 0x10103770, 0x10103d60, 0x1017a0b0, 0x101a2500
 */

int __thiscall sub_10104470(int *this, int a2)
{
  _DWORD *v3; // ecx
  float *v4; // esi
  double v5; // st6
  int result; // eax
  _DWORD v7[10]; // [esp+8h] [ebp-34h] BYREF
  int v8; // [esp+38h] [ebp-4h]

  v3 = *(_DWORD **)(a2 + 716);
  if ( v3 && *this && !byte_10282ED4 )
  {
    StaticModel::GetWorldBBox(v3, v7);
    v4 = (float *)*this;
    v5 = *(float *)(*this + 16);
    v8 = 0;
    if ( v5 > *(float *)&v7[4]
      || v4[5] > (double)*(float *)&v7[5]
      || v4[6] > (double)*(float *)&v7[6]
      || v4[7] < (double)*(float *)&v7[7]
      || v4[8] < (double)*(float *)&v7[8]
      || v4[9] < (double)*(float *)&v7[9] )
    {
      if ( v4 )
      {
        sub_10102270((int)v4);
        operator delete(v4);
        *this = 0;
      }
      sub_10103770(this);
    }
    else
    {
      sub_10103D60(v4, (int)this, a2);
    }
    v8 = -1;
    return sub_1017A0B0(v7);
  }
  return result;
}

/*
 * func-name: sub_1009AD30
 * func-address: 0x1009ad30
 * callers: 0x10096e60, 0x10156140
 * callees: 0x10099f30, 0x1009aa50
 */

void __thiscall sub_1009AD30(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  CREControl *v5; // edi
  CREControl *v6; // edi
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 28;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 28 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v7) = 0;
    sub_10099F30(v5, 1, a2);
    this[2] = (char *)v5 + 28;
  }
  else
  {
    v6 = (CREControl *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_1009AA50(this, &v7, this, v6, a2);
  }
}

/*
 * func-name: sub_10012F90
 * func-address: 0x10012f90
 * callers: 0x1002c060, 0x1002c850, 0x1002cc30, 0x1002d2a0, 0x1002e590
 * callees: 0x100149b0
 */

_DWORD *__thiscall sub_10012F90(_DWORD *this, float *a2)
{
  float v5; // [esp+Ch] [ebp+4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]

  v5 = *a2;
  if ( this[1] == *this )
    sub_100149B0(1);
  *(float *)(this[2] + 4 * this[1]++) = v5;
  v6 = a2[1];
  if ( this[1] == *this )
    sub_100149B0(1);
  *(float *)(this[2] + 4 * this[1]++) = v6;
  v7 = a2[2];
  if ( this[1] == *this )
    sub_100149B0(1);
  *(float *)(this[2] + 4 * this[1]++) = v7;
  return this;
}

/*
 * func-name: sub_100A9DE0
 * func-address: 0x100a9de0
 * callers: 0x100144b6
 * callees: none
 */

void __thiscall sub_100A9DE0(float *this, float *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]
  float v12; // [esp+4h] [ebp+4h]
  float v13; // [esp+4h] [ebp+4h]

  if ( a2[4] <= (double)this[4] )
    v3 = a2[4];
  else
    v3 = this[4];
  v8 = v3;
  this[4] = v8;
  if ( a2[5] <= (double)this[5] )
    v4 = a2[5];
  else
    v4 = this[5];
  v9 = v4;
  this[5] = v9;
  if ( a2[6] <= (double)this[6] )
    v5 = a2[6];
  else
    v5 = this[6];
  v10 = v5;
  this[6] = v10;
  if ( a2[7] >= (double)this[7] )
    v6 = a2[7];
  else
    v6 = this[7];
  v11 = v6;
  this[7] = v11;
  if ( a2[8] >= (double)this[8] )
    v7 = a2[8];
  else
    v7 = this[8];
  v12 = v7;
  this[8] = v12;
  if ( a2[9] >= (double)this[9] )
    v13 = a2[9];
  else
    v13 = this[9];
  this[9] = v13;
}

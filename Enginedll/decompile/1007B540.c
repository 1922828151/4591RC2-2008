/*
 * func-name: sub_1007B540
 * func-address: 0x1007b540
 * callers: 0x1007aa60, 0x1008fdf0
 * callees: none
 */

void __thiscall sub_1007B540(float *this, float *a2)
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

  if ( this[4] <= (double)*a2 )
    v3 = this[4];
  else
    v3 = *a2;
  v8 = v3;
  this[4] = v8;
  if ( this[5] <= (double)a2[1] )
    v4 = this[5];
  else
    v4 = a2[1];
  v9 = v4;
  this[5] = v9;
  if ( this[6] <= (double)a2[2] )
    v5 = this[6];
  else
    v5 = a2[2];
  v10 = v5;
  this[6] = v10;
  if ( this[7] >= (double)*a2 )
    v6 = this[7];
  else
    v6 = *a2;
  v11 = v6;
  this[7] = v11;
  if ( this[8] >= (double)a2[1] )
    v7 = this[8];
  else
    v7 = a2[1];
  v12 = v7;
  this[8] = v12;
  if ( this[9] >= (double)a2[2] )
    v13 = this[9];
  else
    v13 = a2[2];
  this[9] = v13;
}

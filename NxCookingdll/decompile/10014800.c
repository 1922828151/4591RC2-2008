/*
 * func-name: sub_10014800
 * func-address: 0x10014800
 * callers: 0x1001dbf0
 * callees: none
 */

float *__thiscall sub_10014800(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-24h]
  float v4; // [esp+4h] [ebp-20h]
  float v5; // [esp+4h] [ebp-20h]
  float v6; // [esp+8h] [ebp-1Ch]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+10h] [ebp-14h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]

  v8 = *this;
  v10 = this[2];
  v9 = this[1];
  v4 = a2[1];
  v6 = a2[2];
  if ( *a2 <= (double)*this )
    v8 = *a2;
  if ( v4 <= (double)v9 )
    v9 = v4;
  if ( v6 <= (double)v10 )
    v10 = v6;
  v11 = this[3];
  v12 = this[4];
  v13 = this[5];
  v3 = a2[3];
  v5 = a2[4];
  v7 = a2[5];
  if ( v3 >= (double)v11 )
    v11 = v3;
  if ( v5 >= (double)v12 )
    v12 = v5;
  if ( v7 >= (double)v13 )
    v13 = v7;
  *this = v8;
  this[1] = v9;
  this[2] = v10;
  this[3] = v11;
  this[4] = v12;
  this[5] = v13;
  return this;
}

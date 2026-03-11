/*
 * func-name: sub_102C2240
 * func-address: 0x102c2240
 * callers: none
 * callees: 0x102c16a0, 0x102c9dbc, 0x102ca08c, 0x102ca0cc, 0x102ca0d2
 */

void __thiscall sub_102C2240(const void *this, float *a2, float *a3, float *a4)
{
  float *v4; // esi
  float *v5; // ebx
  long double v6; // st7
  float v7; // [esp+Ch] [ebp-48h]
  float v8; // [esp+Ch] [ebp-48h]
  float v9; // [esp+10h] [ebp-44h]
  float v10; // [esp+10h] [ebp-44h]
  float v11; // [esp+10h] [ebp-44h]
  float v12[16]; // [esp+14h] [ebp-40h] BYREF
  float v13; // [esp+58h] [ebp+4h]
  float v14; // [esp+58h] [ebp+4h]
  float v15; // [esp+58h] [ebp+4h]
  float v16; // [esp+58h] [ebp+4h]
  float v17; // [esp+58h] [ebp+4h]
  float v18; // [esp+58h] [ebp+4h]
  float v19; // [esp+58h] [ebp+4h]
  float v20; // [esp+5Ch] [ebp+8h]

  qmemcpy(v12, this, sizeof(v12));
  sub_102C16A0(v12);
  v7 = v12[10] * v12[10] + v12[6] * v12[6];
  v8 = sqrt(v7);
  if ( v8 <= 0.05000000074505806 )
  {
    v4 = a2;
    *a2 = 0.0;
    v13 = -v12[2];
    v11 = atan2(v13, v8);
    v5 = a3;
    *a3 = v11;
    v6 = atan2(-v12[4], v12[5]);
  }
  else
  {
    v9 = atan2(v12[6], v12[10]);
    v4 = a2;
    *a2 = v9;
    v13 = -v12[2];
    v10 = atan2(v13, v8);
    v5 = a3;
    *a3 = v10;
    v6 = atan2(v12[1], v12[0]);
  }
  v20 = v6;
  *a4 = v20;
  v14 = asin(v13);
  *v5 = v14;
  v15 = cos(v14);
  v16 = fabs(v15);
  if ( v16 <= 0.05000000074505806 )
  {
    v19 = atan2(v12[4], v12[5]);
    *v4 = v19;
    *a4 = 0.0;
  }
  else
  {
    v17 = atan2(v12[6], v12[10]);
    *v4 = v17;
    v18 = atan2(v12[1], v12[0]);
    *a4 = v18;
  }
}

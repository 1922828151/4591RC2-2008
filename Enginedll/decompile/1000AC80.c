/*
 * func-name: ?TestLine@Gizmo@@QAE_NAAVVector@@0@Z
 * func-address: 0x1000ac80
 * callers: 0x10094190, 0x100946e0
 * callees: 0x101a2516
 */

bool __thiscall Gizmo::TestLine(Gizmo *this, struct Vector *a2, struct Vector *a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+Ch] [ebp-Ch]
  double v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]
  float v17; // [esp+20h] [ebp+8h]
  float v18; // [esp+20h] [ebp+8h]
  float v19; // [esp+20h] [ebp+8h]

  v4 = *((float *)a3 + 1) - *((float *)a2 + 1);
  v12 = *(float *)a3 - *(float *)a2;
  v15 = v4 * v4 + v12 * v12;
  v16 = sqrt(v15);
  v5 = v16;
  v17 = ((*((float *)a2 + 1) - *((float *)this + 80)) * v12
       - (*(float *)a2 - *((float *)this + 79)) * (*((float *)a3 + 1) - *((float *)a2 + 1)))
      / (v5
       * v5);
  v18 = fabs(v17);
  if ( *((float *)this + 88) <= v5 * v18 )
    return 0;
  v6 = *((float *)a2 + 1) <= (double)*((float *)a3 + 1) ? *((float *)a2 + 1) : *((float *)a3 + 1);
  v11 = v6;
  v7 = *(float *)a2 <= (double)*(float *)a3 ? *(float *)a2 : *(float *)a3;
  v19 = v7;
  v8 = *((float *)a2 + 1) >= (double)*((float *)a3 + 1) ? *((float *)a2 + 1) : *((float *)a3 + 1);
  v13 = v8;
  v9 = *(float *)a2 >= (double)*(float *)a3 ? *(float *)a2 : *(float *)a3;
  if ( v19 > *((float *)this + 79) + *((float *)this + 88) )
    return 0;
  v14 = v9;
  return v14 >= *((float *)this + 79) - *((float *)this + 88)
      && v11 <= *((float *)this + 80) + *((float *)this + 88)
      && v13 >= *((float *)this + 80) - *((float *)this + 88);
}

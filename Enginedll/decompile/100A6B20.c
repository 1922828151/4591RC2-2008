/*
 * func-name: ?Round@CRENumericEdit@@MAEMABMH@Z
 * func-address: 0x100a6b20
 * callers: none
 * callees: 0x101a28f2
 */

double __thiscall CRENumericEdit::Round(CRENumericEdit *this, const float *a2, int a3)
{
  double v4; // st7
  double v5; // st7
  double Y; // [esp+Ch] [ebp-8h] BYREF
  float v8; // [esp+18h] [ebp+4h]
  float v9; // [esp+18h] [ebp+4h]
  float v10; // [esp+18h] [ebp+4h]
  float v11; // [esp+18h] [ebp+4h]
  float v12; // [esp+1Ch] [ebp+8h]

  *(float *)&Y = pow(10.0, (double)(a3 + 1));
  v8 = *(float *)&Y * *a2;
  v4 = v8;
  if ( *a2 >= 0.0 )
    v5 = v4 + 5.0;
  else
    v5 = v4 - 5.0;
  v9 = v5;
  v10 = v9 / 10.0;
  modf(v10, &Y);
  v11 = Y;
  v12 = pow(10.0, (double)a3);
  return (float)(v11 / v12);
}

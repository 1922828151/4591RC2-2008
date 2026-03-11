/*
 * func-name: sub_10020460
 * func-address: 0x10020460
 * callers: 0x10022c20
 * callees: 0x10035a20, 0x10036530
 */

int __fastcall sub_10020460(_DWORD *a1, _DWORD *a2, float a3, float a4, float a5, _DWORD *a6, _DWORD *a7, char a8)
{
  long double v8; // st6
  long double v9; // st5
  long double v10; // st7
  long double v11; // st5
  long double v12; // rtt
  long double v13; // st5
  long double v14; // st6
  long double v15; // rt0
  long double v16; // st5
  long double v17; // st7
  long double v18; // rt1
  long double v19; // st5
  long double v20; // st6
  long double v21; // rt2
  long double v22; // st5
  double v23; // st7
  long double v24; // rtt
  long double v25; // rt0
  long double v26; // st5
  double v27; // st6
  long double v28; // rt1
  long double v29; // rt0
  double v30; // st5
  long double v31; // st7
  long double v32; // st5
  long double v33; // st7
  long double v34; // st7
  double v35; // st6
  int result; // eax
  float v37; // [esp+4h] [ebp+4h]
  float v38; // [esp+8h] [ebp+8h]
  float v39; // [esp+Ch] [ebp+Ch]

  *a2 = 0;
  v8 = a3;
  *a1 = 0;
  if ( a3 < 0.0 )
    *a1 = 1;
  if ( a4 < 0.0 )
    *a1 |= 2u;
  if ( a5 < 0.0 )
    *a1 |= 4u;
  v9 = fabs(a4);
  v37 = v9;
  v10 = v9;
  v11 = fabs(a5);
  v38 = v11;
  v12 = v11;
  v13 = fabs(v8);
  v14 = v12;
  if ( v13 > v10 )
    *a2 |= 1u;
  v15 = v13;
  v16 = v10;
  v17 = v15;
  if ( v16 > v14 )
    *a2 |= 2u;
  v18 = v16;
  v19 = v14;
  v20 = v18;
  if ( v19 > v17 )
    *a2 |= 4u;
  v21 = v19;
  v22 = v17;
  v23 = v21;
  if ( v22 > v20 )
  {
    v37 = v22;
    v24 = v22;
    v22 = v20;
    v20 = v24;
  }
  v25 = v22;
  v26 = v20;
  v27 = v25;
  if ( v26 > v23 )
  {
    v28 = v26;
    v26 = v23;
    v37 = v23;
    v38 = v28;
    v23 = v28;
  }
  v29 = v26;
  v30 = v23;
  v31 = v29;
  if ( v30 <= v27 )
    v27 = v30;
  else
    v38 = v27;
  v32 = 1.0;
  if ( v31 <= 1.0 )
  {
    if ( v31 >= -1.0 )
    {
      v39 = asin(v31);
      v31 = v37;
      v27 = v38;
      v32 = 1.0;
    }
    else
    {
      v39 = -1.5707964;
    }
  }
  else
  {
    v39 = 1.5707964;
  }
  v33 = v27 / sqrt(v32 - v31 * v31);
  if ( v33 <= v32 )
  {
    if ( v33 >= -1.0 )
      v34 = asin(v33);
    else
      v34 = -1.5707964;
  }
  else
  {
    v34 = 1.5707964;
  }
  v35 = (double)(4 * (1 << a8) - 4) * 0.31830987;
  *a6 = (int)(v39 * v35);
  result = (int)(v34 * v35);
  *a7 = result;
  return result;
}

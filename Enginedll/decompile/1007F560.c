/*
 * func-name: ?CheckDragBox@Editor@@IAE_NAAVBBox@@@Z
 * func-address: 0x1007f560
 * callers: 0x1008c3e0
 * callees: 0x10063830, 0x10091d50
 */

BOOL __thiscall Editor::CheckDragBox(Editor *this, struct BBox *a2)
{
  char *v3; // edi
  double v4; // st6
  double v5; // st7
  double v6; // st4
  double v7; // st5
  double v8; // rt0
  double v9; // st4
  double v10; // st7
  double v11; // rt1
  double v12; // st5
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  int v18; // eax
  double v19; // st6
  double v21; // st6
  float v22; // [esp+Ch] [ebp-48h]
  float v23; // [esp+10h] [ebp-44h]
  float v24; // [esp+18h] [ebp-3Ch]
  float v25; // [esp+1Ch] [ebp-38h]
  float v26; // [esp+24h] [ebp-30h]
  float v27; // [esp+28h] [ebp-2Ch]
  float v28; // [esp+30h] [ebp-24h]
  float v29; // [esp+34h] [ebp-20h]
  float v30; // [esp+3Ch] [ebp-18h] BYREF
  float v31; // [esp+40h] [ebp-14h]
  float v32; // [esp+48h] [ebp-Ch] BYREF
  float v33; // [esp+4Ch] [ebp-8h]

  v3 = (char *)this + 1104;
  Gizmo::To2D((char *)this + 1104, &v32, (char *)a2 + 16);
  Gizmo::To2D(v3, &v30, (char *)a2 + 28);
  if ( v32 <= (double)v30 )
  {
    v22 = v32;
    v4 = v30;
    v5 = v32;
  }
  else
  {
    v4 = v30;
    v5 = v32;
    v22 = v30;
  }
  if ( v33 <= (double)v31 )
  {
    v23 = v33;
    v6 = v31;
    v7 = v33;
  }
  else
  {
    v6 = v31;
    v7 = v33;
    v23 = v31;
  }
  v8 = v6;
  v9 = v5;
  v10 = v8;
  if ( v9 > v4 )
    v4 = v9;
  v11 = v7;
  v12 = v4;
  v13 = v11;
  v26 = v12;
  if ( v11 > v10 )
    v10 = v13;
  v27 = v10;
  if ( *((float *)this + 516) <= (double)*((float *)this + 534) )
    v14 = *((float *)this + 516);
  else
    v14 = *((float *)this + 534);
  v24 = v14;
  if ( *((float *)this + 517) <= (double)*((float *)this + 535) )
    v15 = *((float *)this + 517);
  else
    v15 = *((float *)this + 535);
  v25 = v15;
  if ( *((float *)this + 516) >= (double)*((float *)this + 534) )
    v16 = *((float *)this + 516);
  else
    v16 = *((float *)this + 534);
  v28 = v16;
  if ( *((float *)this + 517) >= (double)*((float *)this + 535) )
    v17 = *((float *)this + 517);
  else
    v17 = *((float *)this + 535);
  v29 = v17;
  v18 = Camera::BoxInFrustum((Editor *)((char *)this + 252), a2, 0.0, 0);
  if ( v24 <= (double)v22 )
  {
    v19 = v26;
  }
  else
  {
    v19 = v26;
    if ( v26 < (double)v24 )
      return 0;
  }
  if ( v28 < (double)v22 && v19 > v28 )
    return 0;
  if ( v25 <= (double)v23 )
  {
    v21 = v27;
  }
  else
  {
    v21 = v27;
    if ( v27 < (double)v25 )
      return 0;
  }
  return (v29 >= (double)v23 || v21 <= v29) && v18;
}

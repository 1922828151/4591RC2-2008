/*
 * func-name: ?BoxInFrustum@Camera@@AAEHABVBBox@@_NAAUFrustum@1@@Z
 * func-address: 0x100636d0
 * callers: 0x10063830
 * callees: none
 */

int __thiscall Camera::BoxInFrustum(Camera *this, const struct BBox *a2, float a3, struct Camera::Frustum *a4)
{
  char v4; // bl
  int v5; // ebp
  int v6; // edx
  double v7; // st7
  double v8; // st6
  float *v9; // ecx
  float *v10; // edi
  double v11; // rt0
  double v12; // rt1
  double v13; // st6
  double v14; // st7
  double v15; // st5
  double v16; // st5
  double v17; // st5
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  int result; // eax
  float v23; // [esp+10h] [ebp-18h]
  float v24; // [esp+14h] [ebp-14h]
  float v25; // [esp+18h] [ebp-10h]
  float v26; // [esp+1Ch] [ebp-Ch]
  float v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]
  float v29; // [esp+30h] [ebp+8h]
  float v30; // [esp+30h] [ebp+8h]

  v4 = 0;
  v5 = 6;
  if ( LOBYTE(a3) )
    v5 = 4;
  v6 = 0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = (float *)((char *)a4 + 8);
  v10 = (float *)((char *)a4 + 8);
  while ( 1 )
  {
    v12 = v8;
    v13 = v7;
    v14 = v12;
    if ( v13 > *(v10 - 2) )
    {
      v23 = *((float *)a2 + 7);
      v15 = *((float *)a2 + 4);
    }
    else
    {
      v23 = *((float *)a2 + 4);
      v15 = *((float *)a2 + 7);
    }
    v26 = v15;
    if ( v13 > *(v10 - 1) )
    {
      v24 = *((float *)a2 + 8);
      v16 = *((float *)a2 + 5);
    }
    else
    {
      v24 = *((float *)a2 + 5);
      v16 = *((float *)a2 + 8);
    }
    v27 = v16;
    if ( v13 > *v10 )
    {
      v25 = *((float *)a2 + 9);
      v17 = *((float *)a2 + 6);
    }
    else
    {
      v25 = *((float *)a2 + 6);
      v17 = *((float *)a2 + 9);
    }
    v28 = v17;
    v18 = *(v9 - 1);
    v19 = *(v9 - 2);
    v20 = *v9;
    v21 = v9[1];
    v29 = v23 * v19 + v24 * v18 + v25 * v20;
    if ( v29 + v21 > v14 )
      return 0;
    v30 = v18 * v27 + v19 * v26 + v20 * v28;
    if ( v21 + v30 >= v14 )
      v4 = 1;
    ++v6;
    v10 += 4;
    v9 += 4;
    if ( v6 >= v5 )
      break;
    v11 = v13;
    v8 = v14;
    v7 = v11;
  }
  result = 1;
  if ( !v4 )
    return 2;
  return result;
}

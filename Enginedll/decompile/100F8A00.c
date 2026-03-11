/*
 * func-name: sub_100F8A00
 * func-address: 0x100f8a00
 * callers: 0x100f8d10
 * callees: 0x101a2516
 */

float *__cdecl sub_100F8A00(float *a1, int a2, int a3, float **a4)
{
  int v4; // edi
  double v5; // st7
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  double v9; // st5
  double v10; // st4
  double v11; // st3
  int v12; // eax
  int v13; // ecx
  float *result; // eax
  double v15; // st7
  float v16; // [esp+14h] [ebp-14h]
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+14h] [ebp-14h]
  float v19; // [esp+18h] [ebp-10h]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+30h] [ebp+8h]
  float v24; // [esp+30h] [ebp+8h]
  float v25; // [esp+30h] [ebp+8h]
  float v26; // [esp+30h] [ebp+8h]
  float v27; // [esp+30h] [ebp+8h]
  float v28; // [esp+30h] [ebp+8h]
  float v29; // [esp+30h] [ebp+8h]
  float v30; // [esp+30h] [ebp+8h]
  float v31; // [esp+34h] [ebp+Ch]
  float v32; // [esp+34h] [ebp+Ch]
  float v33; // [esp+34h] [ebp+Ch]
  float v34; // [esp+34h] [ebp+Ch]
  float v35; // [esp+34h] [ebp+Ch]
  float v36; // [esp+34h] [ebp+Ch]
  float v37; // [esp+34h] [ebp+Ch]
  float v38; // [esp+34h] [ebp+Ch]
  float v39; // [esp+34h] [ebp+Ch]

  v4 = dword_11240DDC * ((dword_11240DD8 + a3 - 1) % dword_11240DD8);
  v5 = (double)*(unsigned __int8 *)(v4 + (dword_11240DDC + a2 - 1) % dword_11240DDC + dword_11240DE0) / 255.0;
  v6 = dword_11240DDC * (a3 % dword_11240DD8);
  v7 = dword_11240DDC * ((a3 + 1) % dword_11240DD8);
  v8 = (a2 + 1) % dword_11240DDC;
  v9 = (double)*(unsigned __int8 *)(v7 + (dword_11240DDC + a2 - 1) % dword_11240DDC + dword_11240DE0) / 255.0;
  v10 = (double)*(unsigned __int8 *)(v8 + v4 + dword_11240DE0) / 255.0;
  v11 = (double)*(unsigned __int8 *)(v8 + v7 + dword_11240DE0) / 255.0;
  v31 = v5 * -1.0;
  v32 = v31
      - (double)*(unsigned __int8 *)(v6 + (dword_11240DDC + a2 - 1) % dword_11240DDC + dword_11240DE0) / 255.0 * 2.0;
  v33 = v32 - v9;
  v34 = v33 + v10;
  v35 = v34 + (double)*(unsigned __int8 *)(v6 + v8 + dword_11240DE0) / 255.0 * 2.0;
  v36 = v35 + v11;
  v12 = *(unsigned __int8 *)(a2 % dword_11240DDC + v7 + dword_11240DE0);
  v13 = *(unsigned __int8 *)(v4 + a2 % dword_11240DDC + dword_11240DE0);
  v37 = -v36 * flt_1028291C;
  v23 = v9 * -1.0;
  v24 = v23 - (double)v12 / 255.0 * 2.0;
  v25 = v24 - v11;
  v26 = v5 + v25;
  v27 = v26 + 2.0 * ((double)v13 / 255.0);
  v28 = v10 + v27;
  v29 = -v28 * flt_1028291C;
  v16 = v29 * v29 + v37 * v37 + 1.0;
  v17 = sqrt(v16);
  result = *a4;
  v18 = 1.0 / v17;
  v38 = v18 * v37;
  v30 = v18 * v29;
  switch ( (unsigned int)*a4 )
  {
    case 0u:
      v19 = v38 * 0.5 + 0.5;
      v20 = v30 * 0.5 + 0.5;
      v21 = v18 * 0.5 + 0.5;
      v15 = 1.0;
      goto LABEL_7;
    case 1u:
      v19 = v38;
      v20 = v30;
      v21 = v18;
      v15 = 1.0;
      goto LABEL_7;
    case 2u:
      v19 = v38 * 0.5 + 0.5;
      v20 = v30 * 0.5 + 0.5;
      v21 = 0.0;
      v15 = 1.0;
      goto LABEL_7;
    case 3u:
      v19 = v38;
      v20 = v30;
      v21 = 0.0;
      v15 = 1.0;
      goto LABEL_7;
    case 5u:
      v39 = v38 * 0.5 + 0.5;
      v19 = v39;
      v15 = v39;
      v20 = v30 * 0.5 + 0.5;
      v21 = 1.0;
LABEL_7:
      result = a1;
      v22 = v15;
      *a1 = v19;
      a1[1] = v20;
      a1[2] = v21;
      a1[3] = v22;
      break;
    default:
      return result;
  }
  return result;
}

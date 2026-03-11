/*
 * func-name: ?GetAverageLighting@World@@QAE?AUFloatColor@@AAVVector@@_N1@Z
 * func-address: 0x10137ef0
 * callers: none
 * callees: 0x101a2516
 */

float *__thiscall World::GetAverageLighting(_DWORD *this, float *a2, float *a3, char a4, char a5)
{
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st7
  float *result; // eax
  float v14; // [esp+8h] [ebp-3Ch]
  float v15; // [esp+Ch] [ebp-38h]
  float v16; // [esp+10h] [ebp-34h]
  float v17; // [esp+14h] [ebp-30h]
  float v18; // [esp+18h] [ebp-2Ch]
  float v19; // [esp+1Ch] [ebp-28h]
  float v20; // [esp+20h] [ebp-24h]
  float v21; // [esp+24h] [ebp-20h]
  float v22; // [esp+28h] [ebp-1Ch]
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h]
  float v25; // [esp+34h] [ebp-10h]
  float v26; // [esp+34h] [ebp-10h]
  float v27; // [esp+38h] [ebp-Ch]
  float v28; // [esp+38h] [ebp-Ch]
  float v29; // [esp+3Ch] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-8h]
  float v31; // [esp+40h] [ebp-4h]
  float v32; // [esp+48h] [ebp+4h]
  float v33; // [esp+48h] [ebp+4h]
  float v34; // [esp+48h] [ebp+4h]
  float v35; // [esp+48h] [ebp+4h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[3] = 0.0;
  v7 = 0;
  while ( 1 )
  {
    v8 = this[810];
    if ( !v8 || v7 >= (this[811] - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(this[810] + 4 * v7);
    if ( !a4 && *(_DWORD *)(v9 + 1428) != 4
      || *(_BYTE *)(v9 + 1420)
      || -1.0 != *(float *)(v9 + 820)
      || *(_BYTE *)(v9 + 816)
      || !a5 && *(_BYTE *)(v9 + 1054)
      || *(_BYTE *)(v9 + 422) != a5 && *(_BYTE *)(v9 + 421) != a4 )
    {
      goto LABEL_20;
    }
    if ( *(_DWORD *)(v9 + 1428) == 4 )
    {
      v10 = (float)1.0;
      goto LABEL_16;
    }
    v14 = *(float *)(v9 + 856) - *a3;
    v15 = *(float *)(v9 + 860) - a3[1];
    v16 = *(float *)(v9 + 864) - a3[2];
    v32 = v15 * v15 + v14 * v14 + v16 * v16;
    v33 = sqrt(v32);
    v34 = 1.0 - v33 / *(float *)(v9 + 1136);
    v10 = v34;
    if ( v34 > 0.0 )
    {
LABEL_16:
      v35 = *(float *)(v9 + 1092);
      if ( v35 <= 1.0 )
        v11 = v35;
      else
        v11 = (float)1.0;
      ++v7;
      v17 = v11 * *(float *)(v9 + 1076);
      v18 = *(float *)(v9 + 1080) * v11;
      v19 = *(float *)(v9 + 1084) * v11;
      v20 = v11 * *(float *)(v9 + 1088);
      v21 = v17 * v10;
      v22 = v18 * v10;
      v23 = v19 * v10;
      v24 = v10 * v20;
      v25 = *a2 + v21;
      v27 = a2[1] + v22;
      v29 = a2[2] + v23;
      v12 = a2[3];
      *a2 = v25;
      a2[1] = v27;
      a2[2] = v29;
      v31 = v12 + v24;
      a2[3] = v31;
    }
    else
    {
LABEL_20:
      ++v7;
    }
  }
  v26 = *a2 * 1.450000047683716;
  v28 = a2[1] * 1.450000047683716;
  v30 = a2[2] * 1.450000047683716;
  *a2 = v26;
  a2[1] = v28;
  a2[2] = v30;
  result = a2;
  a2[3] = 1.0;
  return result;
}

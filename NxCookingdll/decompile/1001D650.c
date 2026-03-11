/*
 * func-name: sub_1001D650
 * func-address: 0x1001d650
 * callers: 0x100115c0
 * callees: 0x100149b0, 0x1001abc0, 0x1001c870, 0x1001c9c0, 0x1001cb40, 0x1001cd20, 0x1001cf60, 0x1001d0b0, 0x1001d230, 0x1001d400
 */

char __thiscall sub_1001D650(int this, float *a2, _DWORD *a3, float *a4, _DWORD *a5)
{
  int v6; // ebx
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  float *v13; // ecx
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st3
  double v23; // st2
  double v24; // st4
  double v25; // st2
  double v26; // st2
  double v27; // st1
  double v28; // st3
  double v29; // rt0
  double v30; // st2
  double v31; // st4
  double v32; // st1
  double v33; // st1
  double v34; // st1
  double v35; // st5
  double v36; // rt2
  double v37; // st1
  double v38; // st6
  double v39; // rtt
  double v40; // st2
  double v41; // st3
  double v42; // st4
  double v43; // st7
  double v44; // st3
  double v45; // st6
  double v46; // rt0
  double v47; // st2
  double v48; // st1
  double v49; // st3
  double v50; // st1
  double v51; // st4
  double v52; // st1
  double v53; // st5
  double v54; // rt1
  double v55; // st1
  double v56; // st6
  double v57; // st7
  double v58; // st3
  _DWORD *v59; // edi
  float *v60; // edi
  _DWORD *v61; // eax
  unsigned int v62; // eax
  bool v63; // zf
  _DWORD *v64; // eax
  int v65; // edi
  unsigned int v66; // eax
  _DWORD *v67; // eax
  int v68; // edi
  __int16 *v69; // [esp-8h] [ebp-48h]
  __int16 *v70; // [esp-8h] [ebp-48h]
  unsigned int v71; // [esp-8h] [ebp-48h]
  unsigned int v72; // [esp-4h] [ebp-44h]
  unsigned int v73; // [esp-4h] [ebp-44h]
  unsigned int v74; // [esp-4h] [ebp-44h]
  unsigned int v75; // [esp+Ch] [ebp-34h]
  float v76; // [esp+10h] [ebp-30h]
  float v77; // [esp+14h] [ebp-2Ch]
  float v78; // [esp+18h] [ebp-28h]
  float v79; // [esp+24h] [ebp-1Ch]
  float v80; // [esp+30h] [ebp-10h]
  float v81; // [esp+38h] [ebp-8h]
  float v82; // [esp+44h] [ebp+4h]
  int v83; // [esp+48h] [ebp+8h]
  float v84; // [esp+4Ch] [ebp+Ch]
  float v85; // [esp+50h] [ebp+10h]
  float v86; // [esp+50h] [ebp+10h]
  float v87; // [esp+50h] [ebp+10h]

  *(_DWORD *)(this + 4) |= 0x10u;
  v6 = 0;
  *(_DWORD *)(this + 8) = a3;
  if ( !a3 )
    return 0;
  v7 = a3[1];
  *(_DWORD *)(this + 12) = v7;
  if ( !v7 )
    return 0;
  if ( sub_1001ABC0(this, a2, a4, a5) )
    return 1;
  v9 = *(_DWORD *)(this + 8);
  if ( !v9 || (*(_BYTE *)(v9 + 8) & 4) == 0 )
  {
    v62 = a3[2];
    if ( (~(v62 >> 1) & 1) == 0 )
    {
      if ( (v62 & 1) != 0 )
      {
        v63 = *(_DWORD *)(this + 132) == 2139095039;
        v64 = (_DWORD *)a3[4];
        *(_DWORD *)(this + 108) = v64[3];
        *(_DWORD *)(this + 112) = v64[4];
        *(_DWORD *)(this + 116) = v64[5];
        *(_DWORD *)(this + 120) = v64[6];
        *(_DWORD *)(this + 124) = v64[7];
        *(_DWORD *)(this + 128) = v64[8];
        v72 = v64[2] + 20 * v64[1];
        v69 = (__int16 *)v64[2];
        if ( v63 )
          sub_1001CD20(this, v69, v72);
        else
          sub_1001CB40(this, v69, v72);
        return 1;
      }
      else
      {
        v65 = a3[4];
        v66 = *(_DWORD *)(v65 + 8);
        if ( *(_DWORD *)(this + 132) == 2139095039 )
          sub_1001C9C0(this, v66, v66 + 32 * *(_DWORD *)(v65 + 4));
        else
          sub_1001C870(this, v66, v66 + 32 * *(_DWORD *)(v65 + 4));
        return 1;
      }
    }
    if ( (v62 & 1) != 0 )
    {
      v63 = *(_DWORD *)(this + 132) == 2139095039;
      v67 = (_DWORD *)a3[4];
      *(_DWORD *)(this + 108) = v67[3];
      *(_DWORD *)(this + 112) = v67[4];
      *(_DWORD *)(this + 116) = v67[5];
      *(_DWORD *)(this + 120) = v67[6];
      *(_DWORD *)(this + 124) = v67[7];
      *(_DWORD *)(this + 128) = v67[8];
      v73 = v67[2] + 24 * v67[1];
      v70 = (__int16 *)v67[2];
      if ( v63 )
        sub_1001D400(this, v70, v73);
      else
        sub_1001D230(this, v70, v73);
      return 1;
    }
    v68 = a3[4];
    v74 = *(_DWORD *)(v68 + 8) + 36 * *(_DWORD *)(v68 + 4);
    v71 = *(_DWORD *)(v68 + 8);
    if ( *(_DWORD *)(this + 132) != 2139095039 )
    {
      sub_1001CF60(this, v71, v74);
      return 1;
    }
    sub_1001D0B0(this, v71, v74);
    return 1;
  }
  v75 = *(_DWORD *)(*(_DWORD *)(this + 12) + 8);
  v83 = 0;
  if ( v75 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(this + 12);
      v11 = *(_DWORD *)(v10 + 16);
      v12 = *(_DWORD *)(v10 + 20);
      v13 = (float *)(v12 + 12 * *(_DWORD *)(v11 + v6));
      v14 = (float *)(v12 + 12 * *(_DWORD *)(v11 + v6 + 4));
      v15 = (float *)(v12 + 12 * *(_DWORD *)(v6 + v11 + 8));
      ++*(_DWORD *)(this + 100);
      v16 = *v14 - *v13;
      v17 = v14[1] - v13[1];
      v18 = v14[2] - v13[2];
      v19 = *v15 - *v13;
      v76 = v19;
      v20 = v15[1] - v13[1];
      v77 = v20;
      v21 = v15[2] - v13[2];
      v78 = v21;
      v22 = v21 * *(float *)(this + 32) - v20 * *(float *)(this + 36);
      v23 = v19 * *(float *)(this + 36) - v21 * *(float *)(this + 28);
      v81 = v23;
      v24 = *(float *)(this + 28) * v77 - v19 * *(float *)(this + 32);
      v25 = v22 * v16 + v24 * v18 + v23 * v17;
      v85 = v25;
      if ( *(_BYTE *)(this + 141) )
      {
        if ( v25 >= 0.000001 )
        {
          v26 = *(float *)(this + 16) - *v13;
          v79 = *(float *)(this + 24) - v13[2];
          v27 = v22 * v26;
          v28 = *(float *)(this + 20) - v13[1];
          v29 = v26;
          v30 = v24 * v79 + v27 + v28 * v81;
          v31 = v29;
          *(float *)(this + 84) = v30;
          v32 = -*(float *)(this + 136);
          v84 = v32;
          if ( v32 <= v30 )
          {
            v33 = *(float *)(this + 136) + v85;
            v82 = v33;
            if ( v33 >= v30 )
            {
              v34 = v28 * v18 - v79 * v17;
              v35 = v79 * v16 - v18 * v31;
              v36 = v34;
              v37 = v17;
              v38 = v36;
              v39 = v30;
              v40 = v28;
              v41 = v31 * v37;
              v42 = v39;
              v43 = v41 - v16 * v40;
              v44 = *(float *)(this + 36) * v43 + *(float *)(this + 32) * v35 + *(float *)(this + 28) * v36;
              *(float *)(this + 88) = v44;
              if ( v84 <= v44 && v44 + v42 <= v82 )
              {
                v45 = v38 * v76 + v43 * v78 + v35 * v77;
                *(float *)(this + 80) = v45;
                if ( *(int *)(this + 80) >= 0 )
                {
                  v46 = 1.0 / v85;
                  *(float *)(this + 80) = v45 * v46;
                  *(float *)(this + 84) = v42 * v46;
                  *(float *)(this + 88) = v46 * *(float *)(this + 88);
LABEL_22:
                  v59 = *(_DWORD **)(this + 92);
                  ++*(_DWORD *)(this + 104);
                  *(_DWORD *)(this + 4) |= 4u;
                  *(_DWORD *)(this + 76) = v83;
                  if ( v59 )
                  {
                    if ( *(_BYTE *)(this + 140) && (v59[1] & 0xFFFFFFFC) != 0 )
                    {
                      v60 = (float *)v59[2];
                      if ( v60 && v60[1] > (double)*(float *)(this + 80) )
                      {
                        *(_DWORD *)v60 = v83;
                        v60[1] = *(float *)(this + 80);
                        v60[2] = *(float *)(this + 84);
                        v60[3] = *(float *)(this + 88);
                      }
                    }
                    else if ( this != -76 )
                    {
                      if ( (unsigned int)(v59[1] + 4) > *v59 )
                        sub_100149B0(v59, 4);
                      v61 = (_DWORD *)(v59[2] + 4 * v59[1]);
                      *v61 = *(_DWORD *)(this + 76);
                      v61[1] = *(_DWORD *)(this + 80);
                      v61[2] = *(_DWORD *)(this + 84);
                      v61[3] = *(_DWORD *)(this + 88);
                      v59[1] += 4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( v25 <= -0.000001 || v25 >= 0.000001 )
      {
        v86 = 1.0 / v25;
        v47 = *(float *)(this + 16) - *v13;
        v80 = *(float *)(this + 24) - v13[2];
        v48 = v22 * v47;
        v49 = *(float *)(this + 20) - v13[1];
        v50 = (v24 * v80 + v48 + v49 * v81) * v86;
        v51 = v86;
        v87 = v50;
        *(float *)(this + 84) = v50;
        if ( *(_DWORD *)(this + 84) <= 0x3F800000u )
        {
          v52 = v49 * v18 - v80 * v17;
          v53 = v80 * v16 - v18 * v47;
          v54 = v52;
          v55 = v17;
          v56 = v54;
          v57 = v47 * v55 - v16 * v49;
          v58 = (*(float *)(this + 36) * v57 + *(float *)(this + 32) * v53 + *(float *)(this + 28) * v54) * v51;
          *(float *)(this + 88) = v58;
          if ( (*(_DWORD *)(this + 88) & 0x80000000) == 0 && v58 + v87 <= 1.0 )
          {
            *(float *)(this + 80) = (v56 * v76 + v57 * v78 + v53 * v77) * v51;
            if ( (*(_DWORD *)(this + 80) & 0x80000000) == 0 )
              goto LABEL_22;
          }
        }
      }
      if ( (*(_BYTE *)(this + 4) & 5) != 5 )
      {
        v6 += 12;
        if ( ++v83 < v75 )
          continue;
      }
      return 1;
    }
  }
  return 1;
}

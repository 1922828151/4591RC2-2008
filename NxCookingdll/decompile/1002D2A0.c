/*
 * func-name: sub_1002D2A0
 * func-address: 0x1002d2a0
 * callers: 0x1002d920
 * callees: 0x10012f90, 0x10014950, 0x100149b0, 0x10014b50, 0x1002d130
 */

unsigned int __thiscall sub_1002D2A0(_DWORD *this, int a2, unsigned int a3, int a4, int a5)
{
  _DWORD *v7; // edi
  unsigned int v8; // ebp
  int v9; // eax
  float v10; // ebx
  int v11; // ebp
  float v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  bool v19; // zf
  long double v20; // st6
  double v21; // st5
  long double v22; // st7
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // edi
  int v29; // ebx
  int v30; // edx
  int v31; // edi
  double v32; // st7
  int v33; // edi
  double v34; // st7
  float *v35; // ecx
  double v36; // st6
  double v37; // st5
  float *v38; // edx
  double v39; // st4
  double v40; // st3
  double v41; // st2
  long double v42; // st7
  double v43; // st4
  long double v44; // rtt
  long double v45; // st5
  long double v46; // rt0
  long double v47; // st5
  long double v48; // rt1
  double v49; // st5
  long double v50; // st7
  long double v51; // st6
  double v52; // rt2
  long double v53; // st5
  long double v54; // rt0
  long double v55; // st4
  long double v56; // st3
  double v57; // rtt
  long double v58; // st5
  long double v59; // rt0
  long double v60; // st5
  long double v61; // rt1
  int v62; // eax
  unsigned int v63; // eax
  int v64; // ebp
  int v65; // edi
  int v66; // ebx
  int v67; // edx
  int v68; // ebx
  int v69; // edi
  int v70; // eax
  _DWORD *v71; // [esp+4h] [ebp-58h]
  float v72; // [esp+8h] [ebp-54h]
  float v73; // [esp+8h] [ebp-54h]
  int v74; // [esp+8h] [ebp-54h]
  int v75; // [esp+Ch] [ebp-50h]
  int v76; // [esp+10h] [ebp-4Ch]
  int v77; // [esp+14h] [ebp-48h]
  float v78; // [esp+18h] [ebp-44h]
  float v79; // [esp+1Ch] [ebp-40h] BYREF
  float v80; // [esp+20h] [ebp-3Ch]
  float v81; // [esp+24h] [ebp-38h]
  int v82; // [esp+28h] [ebp-34h]
  int v83; // [esp+2Ch] [ebp-30h]
  int v84; // [esp+30h] [ebp-2Ch]
  float v85; // [esp+34h] [ebp-28h]
  float v86; // [esp+48h] [ebp-14h]
  float v87[4]; // [esp+4Ch] [ebp-10h] BYREF
  float v88; // [esp+68h] [ebp+Ch]
  int v89; // [esp+68h] [ebp+Ch]
  int v90; // [esp+68h] [ebp+Ch]
  unsigned int v91; // [esp+68h] [ebp+Ch]
  int v92; // [esp+6Ch] [ebp+10h]
  unsigned int v93; // [esp+6Ch] [ebp+10h]

  if ( !this[62] )
    return 0;
  v7 = this + 44;
  v71 = this + 44;
  if ( this[45] == this[44] )
    sub_100149B0(this + 44, 1);
  *(_DWORD *)(this[46] + 4 * this[45]++) = a4;
  if ( this[45] == *v7 )
    sub_100149B0(this + 44, 1);
  *(_DWORD *)(this[46] + 4 * this[45]++) = a5;
  sub_10014950(v87);
  v8 = a3;
  v9 = sub_1002D130((int)this, a2, a3, (int)v87);
  v10 = v87[2];
  if ( v9 )
  {
    v75 = v9;
    while ( 1 )
    {
      v11 = *(_DWORD *)LODWORD(v10);
      v12 = *(float *)(LODWORD(v10) + 4);
      v13 = LODWORD(v10) + 4;
      v14 = *(_DWORD *)(v13 + 4);
      v13 += 4;
      v15 = *(_DWORD *)(v13 + 4);
      v92 = v14;
      v16 = this[60];
      LODWORD(v10) = v13 + 8;
      v88 = v12;
      v76 = v15;
      v78 = v10;
      if ( v16 )
        break;
LABEL_23:
      v18 = this[61];
      if ( v18 )
      {
        if ( *((_BYTE *)this + 287) )
        {
          if ( this[17] == this[16] )
            sub_100149B0(this + 16, 1);
          *(_DWORD *)(this[18] + 4 * this[17]++) = v92;
          v7 = v71;
        }
        else
        {
          sub_10012F90(this + 28, (float *)(v18 + 12 * v92));
        }
      }
      if ( *((_BYTE *)this + 282) )
      {
        v19 = *((_BYTE *)this + 284) == 0;
        v20 = 0.0;
        v79 = 0.0;
        v90 = 0;
        v21 = 0.0;
        v74 = 0;
        v80 = 0.0;
        v22 = 0.0;
        v81 = 0.0;
        if ( !v19 )
        {
          v74 = this[41];
          if ( v74 == this[40] )
          {
            sub_100149B0(this + 40, 1);
            v20 = v79;
            v21 = v81;
            v22 = v80;
          }
          *(_DWORD *)(this[42] + 4 * this[41]++) = 0;
          v7 = v71;
        }
        v23 = 0;
        v93 = 0;
        if ( *(_DWORD *)(this[66] + 4 * v11) )
        {
          while ( 1 )
          {
            v24 = *(_DWORD *)(this[68] + 4 * (v23 + *(_DWORD *)(this[67] + 4 * v11)));
            v25 = this[62] + 48 * v24;
            v77 = v24;
            if ( (v76 & *(_DWORD *)(v25 + 28)) != 0 )
              break;
LABEL_50:
            v23 = ++v93;
            if ( v93 >= *(_DWORD *)(this[66] + 4 * v11) )
            {
              v10 = v78;
              v7 = v71;
              goto LABEL_52;
            }
          }
          if ( *((_BYTE *)this + 290) )
          {
            v26 = this[63];
            v82 = *(_DWORD *)(v26 + 12 * *(_DWORD *)(v25 + 12));
            v83 = *(_DWORD *)(v26 + 12 * *(_DWORD *)(v25 + 16));
            v27 = *(_DWORD *)(v26 + 12 * *(_DWORD *)(v25 + 20));
            v28 = 0;
            v29 = 0;
            v84 = v27;
            if ( v11 == v82 )
            {
              v28 = 2;
              goto LABEL_43;
            }
            if ( v11 == v83 )
            {
              v28 = 2;
              v29 = 0;
            }
            else if ( v11 == v27 )
            {
              v28 = 0;
LABEL_43:
              v29 = 1;
            }
            v30 = this[59];
            v31 = 3 * *(&v82 + v28);
            v32 = *(float *)(v30 + 4 * v31);
            v33 = v30 + 4 * v31;
            v34 = v32 - *(float *)(v30 + 12 * v11);
            v35 = (float *)(v30 + 12 * v11);
            v36 = *(float *)(v33 + 4) - v35[1];
            v37 = *(float *)(v33 + 8) - v35[2];
            v38 = (float *)(v30 + 12 * *(&v82 + v29));
            v24 = v77;
            v39 = *v38 - *v35;
            v40 = v38[1] - v35[1];
            v41 = v38[2] - v35[2];
            v86 = v41;
            v85 = v41 * v36 - v40 * v37;
            v42 = atan2(
                    sqrt(
                      (v37 * v39 - v41 * v34) * (v37 * v39 - v41 * v34)
                    + (v40 * v34 - v36 * v39) * (v40 * v34 - v36 * v39)
                    + v85 * v85),
                    v34 * v39 + v36 * v40 + v37 * v86);
            v43 = *(float *)(v25 + 40);
            v44 = *(float *)(v25 + 36) * v42;
            v45 = *(float *)(v25 + 32) * v42 + v79;
            v79 = v45;
            v46 = v45;
            v47 = v44 + v80;
            v80 = v47;
            v48 = v47;
            v49 = v42 * v43 + v81;
            v81 = v49;
            v50 = v46;
            v51 = v48;
          }
          else
          {
            v57 = v21;
            v58 = v20 + *(float *)(v25 + 32);
            v79 = v58;
            v59 = v58;
            v60 = v22 + *(float *)(v25 + 36);
            v50 = v59;
            v80 = v60;
            v61 = v60;
            v49 = v57 + *(float *)(v25 + 40);
            v51 = v61;
            v81 = v49;
          }
          ++v90;
          if ( *((_BYTE *)this + 284) )
          {
            if ( this[41] == this[40] )
            {
              sub_100149B0(this + 40, 1);
              v51 = v80;
              v49 = v81;
              v50 = v79;
            }
            *(_DWORD *)(this[42] + 4 * this[41]++) = v24;
          }
          v52 = v49;
          v53 = v50;
          v22 = v51;
          v54 = v53;
          v21 = v52;
          v20 = v54;
          goto LABEL_50;
        }
LABEL_52:
        if ( *((_BYTE *)this + 284) )
        {
          *(_DWORD *)(this[42] + 4 * v74) = v90;
          ++this[69];
        }
        v55 = v21 * v21 + v22 * v22 + v20 * v20;
        if ( 0.0 != v55 )
        {
          v56 = 1.0 / sqrt(v55);
          v79 = v20 * v56;
          v80 = v22 * v56;
          v81 = v21 * v56;
        }
        sub_10012F90(this + 32, &v79);
      }
      v62 = this[59];
      if ( v62 )
      {
        if ( *((_BYTE *)this + 285) )
        {
          if ( this[9] == this[8] )
            sub_100149B0(this + 8, 1);
          *(_DWORD *)(this[10] + 4 * this[9]++) = v11;
          v7 = v71;
        }
        else
        {
          sub_10012F90(this + 20, (float *)(v62 + 12 * v11));
        }
      }
      if ( !--v75 )
      {
        v8 = a3;
        goto LABEL_66;
      }
    }
    if ( *((_BYTE *)this + 286) )
    {
      v17 = this + 12;
      if ( this[13] != this[12] )
      {
LABEL_21:
        *(float *)(v17[2] + 4 * v17[1]++) = v12;
LABEL_22:
        v7 = v71;
        goto LABEL_23;
      }
    }
    else
    {
      v17 = this + 24;
      v89 = 12 * LODWORD(v12);
      v72 = *(float *)(12 * LODWORD(v12) + v16);
      if ( this[25] == this[24] )
        sub_100149B0(this + 24, 1);
      *(float *)(this[26] + 4 * this[25]++) = v72;
      v73 = *(float *)(v89 + this[60] + 4);
      if ( this[25] == *v17 )
        sub_100149B0(this + 24, 1);
      *(float *)(this[26] + 4 * this[25]++) = v73;
      if ( !*((_BYTE *)this + 281) )
        goto LABEL_22;
      v88 = *(float *)(v89 + this[60] + 8);
      if ( this[25] != *v17 )
        goto LABEL_20;
    }
    sub_100149B0(v17, 1);
LABEL_20:
    v12 = v88;
    goto LABEL_21;
  }
LABEL_66:
  if ( this[5] == this[4] )
    sub_100149B0(this + 4, 1);
  *(_DWORD *)(this[6] + 4 * this[5]++) = v8;
  v63 = 0;
  v91 = 0;
  if ( v8 )
  {
    do
    {
      v64 = *(_DWORD *)(a2 + 4 * v63);
      v65 = 48 * v64;
      v66 = *(_DWORD *)(48 * v64 + this[62]);
      if ( this[1] == *this )
        sub_100149B0(this, 1);
      *(_DWORD *)(this[2] + 4 * this[1]) = v66;
      v67 = this[62];
      ++this[1];
      v68 = *(_DWORD *)(v65 + v67 + 4);
      if ( this[1] == *this )
        sub_100149B0(this, 1);
      *(_DWORD *)(this[2] + 4 * this[1]++) = v68;
      v69 = *(_DWORD *)(v65 + this[62] + 8);
      if ( this[1] == *this )
        sub_100149B0(this, 1);
      *(_DWORD *)(this[2] + 4 * this[1]) = v69;
      v70 = this[64];
      ++this[1];
      if ( v70 )
        *(_DWORD *)(v70 + 4 * this[65]++) = v64;
      v63 = ++v91;
    }
    while ( v91 < a3 );
    v7 = v71;
    v8 = a3;
  }
  if ( v7[1] == *v7 )
    sub_100149B0(v7, 1);
  *(_DWORD *)(v7[2] + 4 * v7[1]++) = 0;
  sub_10014B50(v87);
  return v8;
}

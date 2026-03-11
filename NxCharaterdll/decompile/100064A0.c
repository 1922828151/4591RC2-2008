/*
 * func-name: sub_100064A0
 * func-address: 0x100064a0
 * callers: 0x10006a80, 0x10006b80
 * callees: 0x10005d90, 0x10009200, 0x1000a846
 */

void __thiscall sub_100064A0(float *this, int a2, int a3, int a4, float a5, int *a6, float a7, int a8, char a9)
{
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  bool v13; // zf
  int v14; // esi
  double v15; // st4
  double v16; // st2
  int v17; // esi
  double *v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  double v26; // st7
  double v27; // st5
  double v28; // st7
  double v29; // st7
  int *v30; // [esp+28h] [ebp-80h]
  int v31; // [esp+2Ch] [ebp-7Ch]
  float v32; // [esp+2Ch] [ebp-7Ch]
  float v33; // [esp+2Ch] [ebp-7Ch]
  float v34; // [esp+30h] [ebp-78h]
  double v35; // [esp+30h] [ebp-78h]
  float v36; // [esp+34h] [ebp-74h]
  float v37; // [esp+38h] [ebp-70h]
  double v38; // [esp+38h] [ebp-70h]
  double v39; // [esp+40h] [ebp-68h]
  double v40; // [esp+48h] [ebp-60h] BYREF
  double v41; // [esp+50h] [ebp-58h]
  double v42; // [esp+58h] [ebp-50h]
  double v43; // [esp+60h] [ebp-48h]
  double v44; // [esp+68h] [ebp-40h]
  double v45; // [esp+70h] [ebp-38h]
  double v46; // [esp+78h] [ebp-30h] BYREF
  double v47; // [esp+80h] [ebp-28h]
  double v48; // [esp+88h] [ebp-20h]
  double v49; // [esp+90h] [ebp-18h]
  double v50; // [esp+98h] [ebp-10h]
  double v51; // [esp+A0h] [ebp-8h]

  if ( !dword_10022760 )
  {
    dword_10022760 = NxGetUtilLib();
    if ( !dword_10022760 )
      _wassert(L"gUtilLib", L"..\\src\\CharacterController.cpp", 0x4BBu);
  }
  this[10] = *(float *)(*((_DWORD *)this + 89) + 4);
  this[58] = this[6];
  this[59] = this[7];
  this[62] = this[4];
  *((_BYTE *)this + 258) = *((_BYTE *)this + 360);
  v10 = dword_1002F7B8;
  this[57] = this[5];
  *((_BYTE *)this + 262) = 1;
  if ( (v10 & 1) == 0 )
  {
    v10 |= 1u;
    dword_1002F7B8 = v10;
  }
  v11 = 0;
  dword_1002F7B4 = 0;
  if ( (v10 & 2) == 0 )
    dword_1002F7B8 = v10 | 2;
  v12 = 0;
  v13 = *((_DWORD *)this + 3) == 1;
  dword_1002F7B0 = 0;
  if ( !v13 )
  {
    v14 = (***((int (__thiscall ****)(_DWORD))this + 89))(*((_DWORD *)this + 89));
    v31 = v14;
    v30 = (int *)sub_10009200(*((_DWORD *)this + 89));
    (*(void (__thiscall **)(float *, double *))(*(_DWORD *)this + 4))(this, &v46);
    *(float *)&v40 = v49 - v46;
    *((float *)&v40 + 1) = v50 - v47;
    *(float *)&v41 = v51 - v48;
    v34 = *(float *)&v40 * 0.5;
    v36 = *((float *)&v40 + 1) * 0.5;
    v37 = 0.5 * *(float *)&v41;
    v15 = (v49 + v46) * 0.5;
    v16 = (v51 + v48) * 0.5;
    v40 = v15 - v34;
    v41 = (v50 + v47) * 0.5 - v36;
    v42 = v16 - v37;
    v43 = v15 + v34;
    v44 = (v50 + v47) * 0.5 + v36;
    v45 = v16 + v37;
    if ( v46 < v40 )
      v40 = v46;
    if ( v47 < v41 )
      v41 = v47;
    if ( v16 - v37 > v48 )
      v42 = v48;
    if ( v49 > v15 + v34 )
      v43 = v49;
    if ( v50 > (v50 + v47) * 0.5 + v36 )
      v44 = v50;
    if ( v51 > v16 + v37 )
      v45 = v51;
    v11 = dword_1002F7B4;
    if ( v14 )
    {
      do
      {
        v17 = *v30;
        --v31;
        ++v30;
        if ( (float *)v17 != this )
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v17 + 4))(v17, &byte_100237B0[48 * v11]);
          v11 = dword_1002F7B4;
          v18 = (double *)&byte_100237B0[48 * dword_1002F7B4];
          if ( v18[3] >= v40 && v43 >= *v18 && v18[4] >= v41 && v44 >= v18[1] && v18[5] >= v42 && v45 >= v18[2] )
          {
            dword_100227B0[dword_1002F7B4] = v17;
            dword_1002F7B4 = ++v11;
          }
        }
      }
      while ( v31 );
    }
    v12 = dword_1002F7B0;
  }
  *((_BYTE *)this + 257) = 0;
  v35 = *(double *)(a2 + 8);
  v38 = *(double *)(a2 + 16);
  v39 = *(double *)(a2 + 24);
  sub_10005D90(
    (int)(this + 10),
    *((_DWORD *)this + 88),
    (int)this,
    (float *)a2,
    a3,
    v11,
    v11 != 0 ? (unsigned int)byte_100237B0 : 0,
    v11 != 0 ? (unsigned int)dword_100227B0 : 0,
    v12,
    v12 != 0 ? (unsigned int)&unk_10022770 : 0,
    v12 != 0 ? (unsigned int)&unk_100227A8 : 0,
    a4,
    a5,
    a6,
    a8,
    a9);
  if ( *((_BYTE *)this + 256) )
  {
    v19 = dword_1002F7B0;
    *((_BYTE *)this + 257) = 1;
    *(double *)(a2 + 8) = v35;
    *(double *)(a2 + 16) = v38;
    *(double *)(a2 + 24) = v39;
    sub_10005D90(
      (int)(this + 10),
      *((_DWORD *)this + 88),
      (int)this,
      (float *)a2,
      a3,
      dword_1002F7B4,
      dword_1002F7B4 != 0 ? (unsigned int)byte_100237B0 : 0,
      dword_1002F7B4 != 0 ? (unsigned int)dword_100227B0 : 0,
      v19,
      v19 != 0 ? (unsigned int)&unk_10022770 : 0,
      v19 != 0 ? (unsigned int)&unk_100227A8 : 0,
      a4,
      a5,
      a6,
      a8,
      a9);
    *((_BYTE *)this + 257) = 0;
  }
  if ( a7 < 0.0 )
  {
    *(double *)(a2 + 8) = v35;
    *(double *)(a2 + 16) = v38;
    *(double *)(a2 + 24) = v39;
  }
  this[68] = *(float *)(a2 + 8);
  this[69] = *(float *)(a2 + 12);
  this[70] = *(float *)(a2 + 16);
  this[71] = *(float *)(a2 + 20);
  this[72] = *(float *)(a2 + 24);
  this[73] = *(float *)(a2 + 28);
  *(float *)&v40 = v35 - *(double *)(a2 + 8);
  *((float *)&v40 + 1) = v38 - *(double *)(a2 + 16);
  *(float *)&v41 = v39 - *(double *)(a2 + 24);
  v32 = *((float *)&v40 + 1) * *((float *)&v40 + 1) + *(float *)&v40 * *(float *)&v40 + *(float *)&v41 * *(float *)&v41;
  if ( v32 != 0.0 )
  {
    v20 = *((_DWORD *)this + 66);
    if ( v20 )
    {
      *(float *)&v40 = *((double *)this + 34);
      *((float *)&v40 + 1) = *((double *)this + 35);
      *(float *)&v41 = *((double *)this + 36);
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v20 + 56))(v20, &v40);
    }
  }
  v21 = *((_DWORD *)this + 69);
  v22 = *((_DWORD *)this + 70);
  v33 = fabs(a7);
  this[74] = this[68];
  v23 = *((_DWORD *)this + 71);
  *((_DWORD *)this + 75) = v21;
  v24 = *((_DWORD *)this + 72);
  *((_DWORD *)this + 76) = v22;
  v25 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 77) = v23;
  *((_DWORD *)this + 78) = v24;
  *((_DWORD *)this + 79) = v25;
  v26 = v33;
  if ( v33 < 1.0 )
  {
    v27 = 0.0;
    if ( v26 >= 0.0 )
    {
      v27 = 1.0;
      if ( v26 <= 1.0 )
        v27 = v33;
      v28 = 1.0;
    }
    else
    {
      v28 = 1.0;
    }
    v29 = v27 * *(double *)&this[2 * *((_DWORD *)this + 4) + 68] + (v28 - v27) * *((double *)this + 43);
    *((double *)this + 43) = v29;
    *(double *)&this[2 * *((_DWORD *)this + 4) + 74] = v29;
  }
}

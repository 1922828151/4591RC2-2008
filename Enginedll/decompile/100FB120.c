/*
 * func-name: sub_100FB120
 * func-address: 0x100fb120
 * callers: 0x100fd750
 * callees: 0x1000e890, 0x10076ef0, 0x100ec7b0, 0x100ecea0, 0x100f9920, 0x100fe1f0, 0x100ffec0, 0x10100940
 */

unsigned int __thiscall sub_100FB120(float *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // esi
  float *v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int *v10; // eax
  char *v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  unsigned int result; // eax
  int v20; // esi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // ecx
  float v25; // edx
  int v26; // eax
  float v27; // ecx
  float v28; // edx
  int v29; // ebx
  float *v30; // esi
  int v31; // ecx
  double v32; // st7
  double v33; // st6
  int *v34; // eax
  int v35; // esi
  _DWORD *v36; // edi
  _DWORD *v37; // ebx
  unsigned int v38; // ecx
  _DWORD *v39; // esi
  unsigned int v40; // edx
  int *v41; // eax
  char *v42; // edi
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // esi
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int *v48; // eax
  char *v49; // edi
  int i; // [esp+10h] [ebp-98h] BYREF
  float *v51; // [esp+14h] [ebp-94h]
  unsigned int v52; // [esp+18h] [ebp-90h]
  float v53; // [esp+1Ch] [ebp-8Ch] BYREF
  float v54; // [esp+20h] [ebp-88h]
  float v55; // [esp+24h] [ebp-84h]
  int v56[2]; // [esp+28h] [ebp-80h] BYREF
  int v57; // [esp+30h] [ebp-78h]
  char v58[4]; // [esp+34h] [ebp-74h] BYREF
  int v59; // [esp+38h] [ebp-70h]
  int v60; // [esp+3Ch] [ebp-6Ch]
  int v61; // [esp+40h] [ebp-68h]
  _DWORD v62[2]; // [esp+44h] [ebp-64h] BYREF
  int v63; // [esp+4Ch] [ebp-5Ch] BYREF
  int v64; // [esp+54h] [ebp-54h] BYREF
  _DWORD v65[14]; // [esp+5Ch] [ebp-4Ch] BYREF
  int v66; // [esp+94h] [ebp-14h]
  int v67; // [esp+A4h] [ebp-4h]

  v5 = a2;
  v6 = this;
  v7 = 0;
  v51 = this;
  i = 0;
  if ( sub_100EC7B0(a2) )
  {
    do
    {
      v8 = a4[1];
      if ( v8 )
        v9 = (int)(a4[2] - v8) >> 2;
      else
        v9 = 0;
      if ( v8 && v9 < (int)(a4[3] - v8) >> 2 )
      {
        v10 = (unsigned int *)a4[2];
        *v10 = v7;
        a4[2] = v10 + 1;
      }
      else
      {
        v11 = (char *)a4[2];
        if ( v8 > (unsigned int)v11 )
          invalid_parameter_noinfo();
        sub_100ECEA0(a4, v56, a4, v11, &i);
        v7 = i;
      }
      i = ++v7;
    }
    while ( v7 < sub_100EC7B0(a2) );
    v5 = a2;
  }
  v12 = v5[1];
  if ( v12 )
    v12 = (v5[2] - v12) / 56;
  *((_DWORD *)v6 + 12) = v12;
  v13 = 0;
  if ( std::vector<Model *>::size(a3) )
  {
    i = 8;
    do
    {
      v14 = a3[1];
      if ( !v14 || v13 >= (a3[2] - v14) >> 2 )
        invalid_parameter_noinfo();
      v15 = a3[1];
      v65[0] = *(_DWORD *)(v15 + i - 8);
      if ( !v15 || v13 + 1 >= (a3[2] - v15) >> 2 )
        invalid_parameter_noinfo();
      v16 = a3[1];
      v65[1] = *(_DWORD *)(v16 + i - 4);
      if ( !v16 || v13 + 2 >= (a3[2] - v16) >> 2 )
        invalid_parameter_noinfo();
      v65[2] = *(_DWORD *)(i + a3[1]);
      sub_100F9920(v6, (int)v65, (int)a2, a5);
      v17 = *((_DWORD *)v6 + 6);
      if ( v17 )
        v66 = (*((_DWORD *)v6 + 7) - v17) / 60;
      else
        v66 = 0;
      sub_100FFEC0((int)(v6 + 5), v65);
      i += 12;
      v13 += 3;
    }
    while ( v13 < std::vector<Model *>::size(a3) );
  }
  v18 = 0;
  for ( i = 0; ; v18 = i )
  {
    result = *((_DWORD *)v6 + 6);
    if ( !result )
      break;
    result = (int)(*((_DWORD *)v6 + 7) - result) / 60;
    if ( v18 >= result )
      break;
    v20 = 60 * v18;
    v57 = 60 * v18;
    v52 = 0;
    while ( 1 )
    {
      v21 = *((_DWORD *)v6 + 6);
      if ( !v21 || v18 >= (*((_DWORD *)v6 + 7) - v21) / 60 )
        invalid_parameter_noinfo();
      v22 = *(_DWORD *)(v52 + v20 + *((_DWORD *)v6 + 6));
      v23 = a2[1];
      if ( !v23 || v22 >= (a2[2] - v23) / 56 )
        invalid_parameter_noinfo();
      v24 = a2[1];
      v25 = *(float *)(v24 + 56 * v22);
      v26 = v24 + 56 * v22;
      v27 = *(float *)(v26 + 4);
      v53 = v25;
      v28 = *(float *)(v26 + 8);
      v54 = v27;
      v29 = (int)(v6 + 9);
      v55 = v28;
      v30 = (float *)sub_100FE1F0(&v53);
      v62[1] = v30;
      if ( !v29 )
        invalid_parameter_noinfo();
      v31 = *(_DWORD *)(v29 + 4);
      v62[0] = v29;
      if ( v30 != (float *)v31
        && ((v32 = v53, v33 = v30[3], v33 == v53)
         && (v32 = v54, v33 = v30[4], v33 == v54)
         && (v32 = v55, v33 = v30[5], v33 == v55)
         || v33 <= v32) )
      {
        v34 = v62;
      }
      else
      {
        v56[1] = v31;
        v56[0] = v29;
        v34 = v56;
      }
      v35 = *v34;
      v36 = (_DWORD *)v34[1];
      v37 = (_DWORD *)v31;
      if ( !*v34 || (float *)v35 != v51 + 9 )
        invalid_parameter_noinfo();
      if ( v36 == v37 )
      {
        v59 = 0;
        v60 = 0;
        v61 = 0;
        v67 = 0;
        v43 = sub_10100940(&v53);
        sub_1000E890(v43, (int)v58);
        v44 = (_DWORD *)sub_10100940(&v53);
        v45 = v44;
        v46 = v44[1];
        v47 = v46 ? (int)(v44[2] - v46) >> 2 : 0;
        if ( v46 && v47 < (int)(v44[3] - v46) >> 2 )
        {
          v48 = (int *)v44[2];
          *v48 = i;
          v45[2] = v48 + 1;
        }
        else
        {
          v49 = (char *)v44[2];
          if ( v46 > (unsigned int)v49 )
            invalid_parameter_noinfo();
          sub_100ECEA0(v45, &v63, v45, v49, &i);
        }
        v67 = -1;
        v59 = 0;
        v60 = 0;
        v61 = 0;
      }
      else
      {
        if ( !v35 )
          invalid_parameter_noinfo();
        if ( v36 == *(_DWORD **)(v35 + 4) )
          invalid_parameter_noinfo();
        v38 = v36[7];
        v39 = v36 + 6;
        v40 = v38 ? (int)(v36[8] - v38) >> 2 : 0;
        if ( v38 && v40 < (int)(v36[9] - v38) >> 2 )
        {
          v41 = (int *)v36[8];
          *v41 = i;
          v36[8] = v41 + 1;
        }
        else
        {
          v42 = (char *)v36[8];
          if ( v38 > (unsigned int)v42 )
            invalid_parameter_noinfo();
          sub_100ECEA0(v39, &v64, v39, v42, &i);
        }
      }
      v6 = v51;
      v52 += 4;
      if ( v52 >= 0xC )
        break;
      v20 = v57;
      v18 = i;
    }
    ++i;
  }
  return result;
}

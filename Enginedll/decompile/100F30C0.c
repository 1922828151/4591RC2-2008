/*
 * func-name: sub_100F30C0
 * func-address: 0x100f30c0
 * callers: 0x100f35c0
 * callees: 0x100956d0, 0x100f7ee0, 0x100f7f20, 0x100f7f60
 */

int __stdcall sub_100F30C0(_DWORD *a1, _DWORD *i)
{
  int v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // eax
  unsigned int v16; // edi
  int v17; // ebp
  int v18; // ebx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // eax
  unsigned int v26; // edi
  int v27; // ebp
  int v28; // ebx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // ebx
  _DWORD *v35; // esi
  int v36; // eax
  unsigned int v37; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // edi
  int v41; // [esp+10h] [ebp-Ch]
  int v42; // [esp+14h] [ebp-8h] BYREF

  (*(void (__stdcall **)(_DWORD *, int *, _DWORD **))(*a1 + 24))(a1, &v42, &a1);
  switch ( *a1 )
  {
    case 0:
      v2 = i[8];
      v3 = i + 7;
      if ( v2 )
        v2 = (i[9] - v2) / 20;
      sub_100F7EE0(v2 + a1[1]);
      v4 = 0;
      if ( !a1[1] )
        goto LABEL_76;
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = v3[1];
        if ( !v7 || v4 >= (v3[2] - v7) / 20 )
          invalid_parameter_noinfo();
        *(float *)(v3[1] + v5) = (float)(unsigned int)a1[v6 + 2];
        v8 = v3[1];
        if ( !v8 || v4 >= (v3[2] - v8) / 20 )
          invalid_parameter_noinfo();
        *(float *)(v3[1] + v5 + 4) = *(float *)&a1[v6 + 5];
        v9 = v3[1];
        if ( !v9 || v4 >= (v3[2] - v9) / 20 )
          invalid_parameter_noinfo();
        *(float *)(v3[1] + v5 + 8) = *(float *)&a1[v6 + 6];
        v10 = v3[1];
        if ( !v10 || v4 >= (v3[2] - v10) / 20 )
          invalid_parameter_noinfo();
        *(float *)(v3[1] + v5 + 12) = *(float *)&a1[v6 + 7];
        v11 = v3[1];
        if ( !v11 || v4 >= (v3[2] - v11) / 20 )
          invalid_parameter_noinfo();
        *(float *)(v3[1] + v5 + 16) = *(float *)&a1[v6 + 4];
        ++v4;
        v6 += 6;
        v5 += 20;
      }
      while ( v4 < a1[1] );
      result = 0;
      break;
    case 1:
      v13 = i[12];
      v14 = i + 11;
      if ( v13 )
        v15 = (i[13] - v13) >> 4;
      else
        v15 = 0;
      sub_100F7F20(v15 + a1[1]);
      v16 = 0;
      if ( !a1[1] )
        goto LABEL_76;
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = v14[1];
        if ( !v19 || v16 >= (v14[2] - v19) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v14[1] + v17) = (float)(unsigned int)a1[v18 + 2];
        v20 = v14[1];
        if ( !v20 || v16 >= (v14[2] - v20) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v14[1] + v17 + 4) = *(float *)&a1[v18 + 4];
        v21 = v14[1];
        if ( !v21 || v16 >= (v14[2] - v21) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v14[1] + v17 + 8) = *(float *)&a1[v18 + 5];
        v22 = v14[1];
        if ( !v22 || v16 >= (v14[2] - v22) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v14[1] + v17 + 12) = *(float *)&a1[v18 + 6];
        ++v16;
        v18 += 5;
        v17 += 16;
      }
      while ( v16 < a1[1] );
      result = 0;
      break;
    case 2:
      v23 = i[16];
      v24 = i + 15;
      if ( v23 )
        v25 = (i[17] - v23) >> 4;
      else
        v25 = 0;
      sub_100F7F20(v25 + a1[1]);
      v26 = 0;
      if ( !a1[1] )
        goto LABEL_76;
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = v24[1];
        if ( !v29 || v26 >= (v24[2] - v29) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v24[1] + v27) = (float)(unsigned int)a1[v28 + 2];
        v30 = v24[1];
        if ( !v30 || v26 >= (v24[2] - v30) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v24[1] + v27 + 4) = *(float *)&a1[v28 + 4];
        v31 = v24[1];
        if ( !v31 || v26 >= (v24[2] - v31) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v24[1] + v27 + 8) = *(float *)&a1[v28 + 5];
        v32 = v24[1];
        if ( !v32 || v26 >= (v24[2] - v32) >> 4 )
          invalid_parameter_noinfo();
        *(float *)(v24[1] + v27 + 12) = *(float *)&a1[v28 + 6];
        ++v26;
        v28 += 5;
        v27 += 16;
      }
      while ( v26 < a1[1] );
      result = 0;
      break;
    case 4:
      v33 = i[20];
      v34 = i + 19;
      v35 = 0;
      if ( v33 )
        v36 = (i[21] - v33) / 68;
      else
        v36 = 0;
      sub_100F7F60((int)(i + 19), v36 + a1[1]);
      v37 = 0;
      if ( !a1[1] )
        goto LABEL_76;
      v41 = 0;
      for ( i = 0; ; v35 = i )
      {
        v38 = v34[1];
        if ( !v38 || v37 >= (v34[2] - v38) / 68 )
          invalid_parameter_noinfo();
        *(float *)(v34[1] + v41 + 64) = (float)*(unsigned int *)((char *)a1 + (_DWORD)v35 + 8);
        v39 = v34[1];
        if ( !v39 || v37 >= (v34[2] - v39) / 68 )
          invalid_parameter_noinfo();
        v40 = v34[1];
        i += 18;
        qmemcpy((void *)(v41 + v40), (char *)a1 + (_DWORD)v35 + 16, 0x40u);
        ++v37;
        v41 += 68;
        if ( v37 >= a1[1] )
          break;
      }
      result = 0;
      break;
    default:
      Error("Invalid key type found. Corrupt animation file possible.");
LABEL_76:
      result = 0;
      break;
  }
  return result;
}

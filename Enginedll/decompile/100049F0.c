/*
 * func-name: sub_100049F0
 * func-address: 0x100049f0
 * callers: 0x10005230
 * callees: 0x10001c10, 0x10001cf0, 0x100042c0
 */

int __thiscall sub_100049F0(ISave *this, FILE *Stream, _DWORD *a3)
{
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  const void *v6; // esi
  void (__cdecl *v7)(const void *, size_t, size_t, FILE *); // edi
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int *v16; // edi
  int v17; // esi
  char *v18; // ecx
  unsigned int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edi
  int v30; // esi
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // esi
  unsigned int v36; // esi
  int v37; // edx
  unsigned int v38; // edx
  _DWORD *v39; // esi
  int v40; // eax
  int v41; // eax
  int v42; // esi
  int v43; // ecx
  unsigned int v44; // edx
  _DWORD *v45; // esi
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  ISave *v51; // esi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  char v56; // [esp-20h] [ebp-C0h] BYREF
  int v57; // [esp-1Ch] [ebp-BCh]
  int v58; // [esp-18h] [ebp-B8h]
  FILE *v59; // [esp-14h] [ebp-B4h]
  bool *v60; // [esp-10h] [ebp-B0h]
  int v61; // [esp-Ch] [ebp-ACh]
  int v62; // [esp-8h] [ebp-A8h]
  FILE *v63; // [esp-4h] [ebp-A4h]
  bool v64; // [esp+13h] [ebp-8Dh] BYREF
  unsigned int i; // [esp+14h] [ebp-8Ch]
  float v66; // [esp+18h] [ebp-88h]
  _BYTE v67[8]; // [esp+1Fh] [ebp-81h] BYREF
  char v68; // [esp+27h] [ebp-79h] BYREF
  int v69; // [esp+28h] [ebp-78h] BYREF
  int v70; // [esp+2Ch] [ebp-74h] BYREF
  BOOL Buffer; // [esp+30h] [ebp-70h] BYREF
  ISave *v72; // [esp+34h] [ebp-6Ch]
  char v73[64]; // [esp+38h] [ebp-68h] BYREF
  _BYTE v74[28]; // [esp+78h] [ebp-28h] BYREF
  int v75; // [esp+9Ch] [ebp-4h]

  result = *a3;
  v4 = *(_BYTE *)(*a3 + 440) == 0;
  v72 = this;
  if ( !v4 )
  {
    v63 = Stream;
    v66 = COERCE_FLOAT(&v56);
    std::string::string(&v56, result + 444);
    sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
    Buffer = (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 40))(*a3) != 0;
    fwrite(&Buffer, 4u, 1u, Stream);
    v5 = (_DWORD *)*a3;
    v6 = (const void *)(*a3 + 868);
    v59 = Stream;
    v58 = 1;
    v57 = 64;
    qmemcpy(v73, v6, sizeof(v73));
    v7 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
    *(_DWORD *)&v73[48] = v5[214];
    *(_DWORD *)&v73[52] = v5[215];
    *(_DWORD *)&v73[56] = v5[216];
    fwrite(v73, 0x40u, 1u, Stream);
    fwrite((const void *)(*a3 + 256), 0x10u, 1u, Stream);
    v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 100))(*a3);
    std::string::string(v74, v8);
    v63 = Stream;
    v66 = COERCE_FLOAT(&v56);
    v75 = 0;
    std::string::string(&v56, v74);
    sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
    v9 = *(_DWORD *)(*a3 + 428);
    if ( v9 )
      v70 = (*(_DWORD *)(*a3 + 432) - v9) / 96;
    else
      v70 = 0;
    fwrite(&v70, 4u, 1u, Stream);
    *(_DWORD *)&v67[1] = 0;
    i = 0;
    while ( 1 )
    {
      v10 = (_DWORD *)*a3;
      v11 = *(_DWORD *)(*a3 + 428);
      if ( !v11 || *(_DWORD *)&v67[1] >= (unsigned int)((v10[108] - v11) / 96) )
        break;
      v12 = v10[107];
      if ( !v12 || *(_DWORD *)&v67[1] >= (unsigned int)((v10[108] - v12) / 96) )
        invalid_parameter_noinfo();
      LODWORD(v66) = i + v10[107];
      v13 = *(_DWORD *)(*a3 + 428);
      v14 = *a3 + 424;
      if ( !v13 || *(_DWORD *)&v67[1] >= (unsigned int)((*(_DWORD *)(*a3 + 432) - v13) / 96) )
        invalid_parameter_noinfo();
      v15 = *(_DWORD *)(*a3 + 428);
      v16 = (int *)(i + *(_DWORD *)(v14 + 4));
      v17 = *a3 + 424;
      if ( !v15 || *(_DWORD *)&v67[1] >= (unsigned int)((*(_DWORD *)(*a3 + 432) - v15) / 96) )
        invalid_parameter_noinfo();
      v18 = *(char **)(LODWORD(v66) + 88);
      v19 = i + *(_DWORD *)(v17 + 4);
      v20 = *v16;
      v63 = Stream;
      v62 = (int)v18;
      v61 = v20;
      v21 = std::string::c_str(v19 + 4);
      sub_10001CF0(v72, v21, v61, (char *)v62, v63);
      ++*(_DWORD *)&v67[1];
      i += 96;
      v7 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
    }
    v7(v10 + 158, 0x40u, 1u, Stream);
    v22 = *a3 + 472;
    v67[0] = 0;
    v23 = std::string::length(v22);
    v63 = Stream;
    v62 = 1;
    v61 = 1;
    if ( v23 )
    {
      v67[0] = 1;
      v7(v67, v61, v62, v63);
      v24 = *a3;
      v63 = Stream;
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v24 + 472);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
      v25 = *a3;
      v63 = Stream;
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v25 + 500);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
      v26 = *a3;
      v63 = Stream;
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v26 + 528);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
      v7((const void *)(*a3 + 616), 1u, 1u, Stream);
      v27 = *(_DWORD *)(*a3 + 588);
      if ( v27 )
      {
        v28 = (int)((unsigned __int64)(2454267027LL * (*(_DWORD *)(*a3 + 592) - v27)) >> 32) >> 4;
        v70 = v28 + (v28 >> 31);
      }
      else
      {
        v70 = 0;
      }
      v7(&v70, 4u, 1u, Stream);
      v29 = 0;
      for ( i = 0; ; i += 28 )
      {
        v30 = *a3;
        v31 = *(_DWORD *)(*a3 + 588);
        if ( !v31 || v29 >= (*(_DWORD *)(v30 + 592) - v31) / 28 )
          break;
        v32 = *(_DWORD *)(v30 + 588);
        v63 = Stream;
        if ( !v32 || v29 >= (*(_DWORD *)(v30 + 592) - v32) / 28 )
          invalid_parameter_noinfo();
        v33 = i + *(_DWORD *)(v30 + 588);
        v66 = COERCE_FLOAT(&v56);
        std::string::string(&v56, v33);
        sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
        v34 = *(_DWORD *)(*a3 + 604);
        v35 = *a3 + 600;
        v63 = Stream;
        if ( !v34 || v29 >= (*(_DWORD *)(v35 + 8) - v34) / 28 )
          invalid_parameter_noinfo();
        v36 = i + *(_DWORD *)(v35 + 4);
        v66 = COERCE_FLOAT(&v56);
        std::string::string(&v56, v36);
        sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
        ++v29;
      }
      v7 = (void (__cdecl *)(const void *, size_t, size_t, FILE *))fwrite;
    }
    else
    {
      v7(v67, v61, v62, v63);
    }
    v37 = *(_DWORD *)(*a3 + 340);
    if ( v37 )
    {
      v38 = (int)((unsigned __int64)(2454267027LL * (*(_DWORD *)(*a3 + 344) - v37)) >> 32) >> 4;
      v69 = v38 + (v38 >> 31);
    }
    else
    {
      v69 = 0;
    }
    v7(&v69, 4u, 1u, Stream);
    v68 = *(_BYTE *)(*a3 + 332) == 0;
    v7(&v68, 1u, 1u, Stream);
    i = 0;
    for ( *(_DWORD *)&v67[1] = 0; ; *(_DWORD *)&v67[1] += 28 )
    {
      v39 = (_DWORD *)*a3;
      v40 = *(_DWORD *)(*a3 + 340);
      if ( !v40 || i >= (v39[86] - v40) / 28 )
        break;
      v41 = v39[85];
      v63 = Stream;
      if ( !v41 || i >= (v39[86] - v41) / 28 )
        invalid_parameter_noinfo();
      v42 = *(_DWORD *)&v67[1] + v39[85];
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v42);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
      ++i;
    }
    v43 = v39[97];
    if ( v43 )
      v69 = (v39[98] - v43) >> 2;
    else
      v69 = 0;
    v7(&v69, 4u, 1u, Stream);
    v44 = 0;
    for ( i = 0; ; v44 = i )
    {
      v45 = (_DWORD *)*a3;
      v46 = *(_DWORD *)(*a3 + 388);
      if ( !v46 || v44 >= (v45[98] - v46) >> 2 )
        break;
      v63 = Stream;
      if ( v44 >= (v45[98] - v46) >> 2 )
      {
        invalid_parameter_noinfo();
        v44 = i;
      }
      v47 = *(_DWORD *)(v45[97] + 4 * v44) + 444;
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v47);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
      ++i;
    }
    if ( !Buffer )
    {
      v64 = 0;
      v48 = v45[179];
      if ( v48 && *(_DWORD *)(v48 + 308) )
        v64 = *(_BYTE *)(v48 + 312) != 0;
      v7(&v64, 1u, 1u, Stream);
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 40))(*a3) )
    {
      v7((const void *)(*a3 + 1428), 4u, 1u, Stream);
      v7((const void *)(*a3 + 1076), 0x48u, 1u, Stream);
      v7((const void *)(*a3 + 1420), 1u, 1u, Stream);
      v49 = *a3;
      v63 = Stream;
      v66 = COERCE_FLOAT(&v56);
      std::string::string(&v56, v49 + 1364);
      sub_10001C10(v56, v57, v58, (int)v59, (int)v60, v61, v62, v63);
    }
    else
    {
      v50 = *(_DWORD *)(*a3 + 716);
      if ( v50 && *(_DWORD *)(v50 + 308) && *(_BYTE *)(v50 + 312) )
      {
        v51 = v72;
        v52 = *(_DWORD *)(v50 + 308);
        v66 = *(float *)(v50 + 52);
        *(float *)(v52 + 368) = v66;
        sub_100042C0(v51, Stream, (ModelFrame **)(*(_DWORD *)(*a3 + 716) + 308));
        v53 = *a3;
        v63 = Stream;
        v64 = 0;
        v4 = *(_DWORD *)(*(_DWORD *)(v53 + 716) + 144) == 0;
        v62 = 1;
        v61 = 1;
        v60 = &v64;
        if ( v4 )
        {
          v7(v60, v61, v62, v63);
        }
        else
        {
          v64 = 1;
          v7(v60, v61, v62, v63);
          v7((const void *)(*(_DWORD *)(*a3 + 716) + 148), 0x40u, 1u, Stream);
          v54 = *(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144);
          v55 = *(_DWORD *)(v54 + 308);
          v66 = *(float *)(v54 + 52);
          *(float *)(v55 + 368) = v66;
          sub_100042C0(v51, Stream, (ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) + 308));
        }
      }
    }
    v75 = -1;
    return std::string::~string(v74);
  }
  return result;
}

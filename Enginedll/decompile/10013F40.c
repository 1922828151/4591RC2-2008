/*
 * func-name: ?WriteMeshPart@ISave@@QAEXPAVMesh@@PAU_iobuf@@H@Z
 * func-address: 0x10013f40
 * callers: 0x10014730
 * callees: 0x100119b0, 0x101a2500
 */

void __thiscall ISave::WriteMeshPart(ISave *this, struct Mesh *a2, int Stream, unsigned int a4)
{
  struct Mesh *v4; // esi
  void (__thiscall *v5)(struct Mesh *, int *); // edx
  char *v6; // edi
  size_t v7; // eax
  FILE *v8; // ebp
  char *v9; // edi
  const void *v10; // eax
  char *v11; // edi
  char *v12; // edi
  int v13; // eax
  unsigned int i; // edi
  char *v15; // ebx
  int v16; // ecx
  char *v17; // edi
  int v18; // eax
  unsigned int j; // edi
  char *v20; // ebx
  int v21; // ecx
  FILE *v22; // ebx
  int v23; // eax
  int v24; // eax
  size_t v25; // edi
  int (__thiscall *v26)(struct Mesh *); // edx
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  size_t k; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int m; // edi
  int v44; // ecx
  size_t v45; // [esp+Ch] [ebp-88h]
  unsigned int v46; // [esp+28h] [ebp-6Ch]
  int v47; // [esp+2Ch] [ebp-68h]
  size_t v48; // [esp+30h] [ebp-64h] BYREF
  int v49; // [esp+34h] [ebp-60h] BYREF
  int v50; // [esp+38h] [ebp-5Ch] BYREF
  int Buffer; // [esp+3Ch] [ebp-58h] BYREF
  int v52; // [esp+40h] [ebp-54h] BYREF
  int v53; // [esp+44h] [ebp-50h] BYREF
  size_t ElementSize; // [esp+48h] [ebp-4Ch] BYREF
  size_t ElementCount; // [esp+4Ch] [ebp-48h] BYREF
  size_t v56; // [esp+50h] [ebp-44h] BYREF
  int v57; // [esp+54h] [ebp-40h] BYREF
  ISave *v58; // [esp+58h] [ebp-3Ch]
  int v59; // [esp+5Ch] [ebp-38h] BYREF
  void *v60; // [esp+60h] [ebp-34h] BYREF
  int v61; // [esp+64h] [ebp-30h] BYREF
  void *v62; // [esp+68h] [ebp-2Ch]
  int v63; // [esp+6Ch] [ebp-28h]
  int v64; // [esp+70h] [ebp-24h]
  _DWORD v65[5]; // [esp+74h] [ebp-20h] BYREF
  int v66; // [esp+90h] [ebp-4h]

  v58 = this;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v4 = a2;
  v5 = *(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 36);
  v66 = 0;
  v5(a2, &v61);
  if ( v62 )
    Buffer = (v63 - (int)v62) / 124;
  else
    Buffer = 0;
  fwrite(&Buffer, 4u, 1u, (FILE *)Stream);
  v46 = 0;
  if ( Buffer > 0 )
  {
    v47 = 0;
    do
    {
      v6 = (char *)v62;
      if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
      {
        invalid_parameter_noinfo();
        v6 = (char *)v62;
      }
      v7 = std::string::length(&v6[v47]);
      v8 = (FILE *)Stream;
      ElementSize = v7;
      fwrite(&ElementSize, 4u, 1u, (FILE *)Stream);
      v9 = (char *)v62;
      if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
      {
        invalid_parameter_noinfo();
        v9 = (char *)v62;
      }
      v45 = ElementSize;
      v10 = (const void *)std::string::c_str(&v9[v47]);
      fwrite(v10, v45, 1u, v8);
      v11 = (char *)v62;
      if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
      {
        invalid_parameter_noinfo();
        v11 = (char *)v62;
      }
      fwrite(&v11[v47 + 60], 0x40u, 1u, v8);
      v12 = (char *)v62;
      if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
      {
        invalid_parameter_noinfo();
        v12 = (char *)v62;
      }
      v13 = *(_DWORD *)&v12[v47 + 32];
      if ( v13 )
        v49 = (*(_DWORD *)&v12[v47 + 36] - v13) >> 2;
      else
        v49 = 0;
      fwrite(&v49, 4u, 1u, v8);
      for ( i = 0; (int)i < v49; ++i )
      {
        v15 = (char *)v62;
        if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
        {
          invalid_parameter_noinfo();
          v15 = (char *)v62;
        }
        v16 = *(_DWORD *)&v15[v47 + 32];
        if ( !v16 || i >= (*(_DWORD *)&v15[v47 + 36] - v16) >> 2 )
          invalid_parameter_noinfo();
        fwrite((const void *)(*(_DWORD *)&v15[v47 + 32] + 4 * i), 4u, 1u, (FILE *)Stream);
      }
      v17 = (char *)v62;
      if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
      {
        invalid_parameter_noinfo();
        v17 = (char *)v62;
      }
      v18 = *(_DWORD *)&v17[v47 + 48];
      if ( v18 )
        v50 = (*(_DWORD *)&v17[v47 + 52] - v18) >> 2;
      else
        v50 = 0;
      fwrite(&v50, 4u, 1u, (FILE *)Stream);
      for ( j = 0; (int)j < v50; ++j )
      {
        v20 = (char *)v62;
        if ( !v62 || v46 >= (v63 - (int)v62) / 124 )
        {
          invalid_parameter_noinfo();
          v20 = (char *)v62;
        }
        v21 = *(_DWORD *)&v20[v47 + 48];
        if ( !v21 || j >= (*(_DWORD *)&v20[v47 + 52] - v21) >> 2 )
          invalid_parameter_noinfo();
        fwrite((const void *)(*(_DWORD *)&v20[v47 + 48] + 4 * j), 4u, 1u, (FILE *)Stream);
      }
      v47 += 124;
      ++v46;
    }
    while ( (int)v46 < Buffer );
  }
  v22 = (FILE *)Stream;
  LOBYTE(a2) = 1;
  fwrite(&a2, 1u, 1u, (FILE *)Stream);
  v23 = *((_DWORD *)v4 + 620);
  if ( v23 )
    v52 = (*((_DWORD *)v4 + 621) - v23) / 20;
  else
    v52 = 0;
  fwrite(&v52, 4u, 1u, v22);
  v24 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  v25 = (*(int (__stdcall **)(int))(*(_DWORD *)v24 + 32))(v24);
  v26 = *(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 124);
  ElementSize = v25;
  v48 = v26(v4);
  v27 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  v53 = (*(int (__stdcall **)(int))(*(_DWORD *)v27 + 20))(v27);
  if ( !v48 )
  {
    v48 = 56;
    if ( v25 != 72 )
      v48 = v25;
  }
  fwrite(&v48, 4u, 1u, v22);
  fwrite(&v53, 4u, 1u, v22);
  v28 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)v28 + 60))(v28, 16, &v59);
  v29 = 0;
  if ( v53 > 0 )
  {
    Stream = 0;
    do
    {
      fwrite((const void *)(v59 + Stream), v48, 1u, v22);
      Stream += ElementSize;
      ++v29;
    }
    while ( v29 < v53 );
  }
  v30 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  (*(void (__stdcall **)(int))(*(_DWORD *)v30 + 64))(v30);
  v31 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  v56 = ((*(int (__stdcall **)(int))(*(_DWORD *)v31 + 36))(v31) & 1) != 0 ? 4 : 2;
  v32 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  ElementCount = 3 * (*(int (__stdcall **)(int))(*(_DWORD *)v32 + 16))(v32);
  fwrite(&v56, 4u, 1u, v22);
  fwrite(&ElementCount, 4u, 1u, v22);
  v33 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  (*(void (__stdcall **)(int, int, void **))(*(_DWORD *)v33 + 68))(v33, 16, &v60);
  fwrite(v60, v56, ElementCount, v22);
  v34 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v4 + 4))(v4);
  (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 72))(v34);
  v35 = *((_DWORD *)v4 + 616);
  if ( v35 )
    v57 = (*((_DWORD *)v4 + 617) - v35) >> 2;
  else
    v57 = 0;
  fwrite(&v57, 4u, 1u, v22);
  for ( Stream = 0; ; ++Stream )
  {
    v36 = *((_DWORD *)v4 + 616);
    if ( !v36 || Stream >= (unsigned int)((*((_DWORD *)v4 + 617) - v36) >> 2) )
      break;
    ElementSize = 9999;
    for ( k = 0; ; ++k )
    {
      v38 = *((_DWORD *)v58 + 18);
      if ( !v38 || k >= (*((_DWORD *)v58 + 19) - v38) >> 2 )
        break;
      v50 = *((_DWORD *)v58 + 18) + 4 * k;
      v39 = *((_DWORD *)v4 + 616);
      if ( !v39 || Stream >= (unsigned int)((*((_DWORD *)v4 + 617) - v39) >> 2) )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(
                              *(_DWORD *)(*((_DWORD *)v4 + 616) + 4 * Stream) + 184,
                              *(_DWORD *)v50 + 184) )
      {
        ElementSize = k;
        break;
      }
    }
    v49 = ElementSize - a4;
    fwrite(&v49, 4u, 1u, v22);
  }
  a4 = 0;
  if ( v52 > 0 )
  {
    v50 = 0;
    do
    {
      v40 = *((_DWORD *)v4 + 620);
      if ( !v40 || a4 >= (*((_DWORD *)v4 + 621) - v40) / 20 )
        invalid_parameter_noinfo();
      v41 = (_DWORD *)(v50 + *((_DWORD *)v4 + 620));
      v65[0] = *v41;
      v65[1] = v41[1];
      v65[2] = v41[2];
      v65[3] = v41[3];
      v65[4] = v41[4];
      fwrite(v65, 0x14u, 1u, v22);
      v42 = *((_DWORD *)v4 + 10);
      if ( v42 )
        Stream = (*((_DWORD *)v4 + 11) - v42) >> 2;
      else
        Stream = 0;
      fwrite(&Stream, 4u, 1u, v22);
      for ( m = 0; m < Stream; ++m )
      {
        v44 = *((_DWORD *)v4 + 10);
        if ( !v44 || m >= (unsigned int)((*((_DWORD *)v4 + 11) - v44) >> 2) )
          invalid_parameter_noinfo();
        fwrite((const void *)(*((_DWORD *)v4 + 10) + 4 * m), 4u, 1u, v22);
      }
      v50 += 20;
      ++a4;
    }
    while ( (int)a4 < v52 );
  }
  v66 = -1;
  if ( v62 )
  {
    sub_100119B0((int)v62, v63);
    operator delete(v62);
  }
}

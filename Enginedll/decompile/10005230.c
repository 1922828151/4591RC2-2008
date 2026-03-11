/*
 * func-name: sub_10005230
 * func-address: 0x10005230
 * callers: none
 * callees: 0x10002270, 0x100028f0, 0x100049f0, 0x10010390, 0x1009ef10, 0x100a1d10, 0x1017a670
 */

char __thiscall sub_10005230(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // esi
  int v11; // eax
  bool v12; // bl
  const char *v13; // eax
  int v14; // ebx
  void *v15; // edi
  void *v16; // ebp
  unsigned int i; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int j; // edi
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  ISave *v28; // ebp
  int v29; // edx
  unsigned int k; // edi
  int v31; // ecx
  int v33; // [esp+10h] [ebp-40h] BYREF
  FILE *Stream; // [esp+14h] [ebp-3Ch]
  int Buffer; // [esp+18h] [ebp-38h] BYREF
  ISave *v36; // [esp+1Ch] [ebp-34h]
  int v37; // [esp+20h] [ebp-30h] BYREF
  _BYTE v38[28]; // [esp+28h] [ebp-28h] BYREF
  int v39; // [esp+4Ch] [ebp-4h]

  v36 = (ISave *)this;
  v39 = 0;
  std::string::operator=(this + 4, &a2);
  v10 = a9;
  *(_DWORD *)(this + 88) = a9;
  *(_DWORD *)(this + 84) = GetTickCount();
  *(_BYTE *)(this + 96) = 0;
  v11 = sub_1017A670(v38, &a2);
  LOBYTE(v39) = 1;
  Stream = (FILE *)1;
  v12 = std::string::find(v11, "\\models\\", 0) == -1
     && MessageBoxA(0, "Change Models Extensions to .Reb", "Editor", 4u) == 6;
  v39 = 0;
  std::string::~string(v38);
  if ( v12 )
    *(_BYTE *)(this + 96) = 1;
  v13 = (const char *)std::string::c_str(&a2);
  Stream = fopen(v13, "wb");
  fwrite(&unk_1028017C, 4u, 1u, Stream);
  fwrite(&unk_1028017C, 4u, 1u, Stream);
  v14 = this + 68;
  v15 = *(void **)(this + 76);
  if ( *(_DWORD *)(v14 + 4) > (unsigned int)v15 )
    invalid_parameter_noinfo();
  v16 = *(void **)(v14 + 4);
  if ( (unsigned int)v16 > *(_DWORD *)(v14 + 8) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((int)&v37, v14, v16, v14, v15);
  for ( i = 0; ; ++i )
  {
    v18 = *(_DWORD *)(v10 + 3224);
    if ( !v18 || i >= (*(_DWORD *)(v10 + 3228) - v18) >> 2 )
      break;
    v19 = *(_DWORD *)(v10 + 3224);
    if ( *(_DWORD *)(*(_DWORD *)(v19 + 4 * i) + 716) )
    {
      if ( !v19 || i >= (*(_DWORD *)(v10 + 3228) - v19) >> 2 )
        invalid_parameter_noinfo();
      v20 = *(_DWORD *)(v10 + 3224);
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v20 + 4 * i) + 716) + 308) )
      {
        if ( !v20 || i >= (*(_DWORD *)(v10 + 3228) - v20) >> 2 )
          invalid_parameter_noinfo();
        v21 = *(_DWORD *)(v10 + 3224);
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v21 + 4 * i) + 716) + 312) )
        {
          if ( !v21 || i >= (*(_DWORD *)(v10 + 3228) - v21) >> 2 )
            invalid_parameter_noinfo();
          ModelFrame::FindMaterials(v14);
          v22 = *(_DWORD *)(v10 + 3224);
          if ( !v22 || i >= (*(_DWORD *)(v10 + 3228) - v22) >> 2 )
            invalid_parameter_noinfo();
          v23 = *(_DWORD *)(v10 + 3224);
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 4 * i) + 716) + 144) )
          {
            if ( !v23 || i >= (*(_DWORD *)(v10 + 3228) - v23) >> 2 )
              invalid_parameter_noinfo();
            ModelFrame::FindMaterials(v14);
          }
        }
      }
    }
  }
  v33 = 0;
  for ( j = 0; ; ++j )
  {
    v25 = *(_DWORD *)(v10 + 3224);
    if ( !v25 || j >= (*(_DWORD *)(v10 + 3228) - v25) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v10 + 3224) + 4 * j) + 440) )
      ++v33;
  }
  v26 = *(_DWORD *)(v14 + 4);
  if ( v26 )
    v27 = (*(_DWORD *)(v14 + 8) - v26) >> 2;
  else
    v27 = 0;
  Buffer = v33 + v27;
  fwrite(&Buffer, 4u, 1u, Stream);
  v28 = v36;
  sub_10002270((int)v36, v29, Stream, (World **)&a9);
  sub_100028F0(v28, Stream, v14);
  fwrite(&v33, 4u, 1u, Stream);
  for ( k = 0; ; ++k )
  {
    v31 = *(_DWORD *)(v10 + 3224);
    if ( !v31 || k >= (*(_DWORD *)(v10 + 3228) - v31) >> 2 )
      break;
    sub_100049F0(v28, Stream, (_DWORD *)(*(_DWORD *)(v10 + 3224) + 4 * k));
  }
  fclose(Stream);
  if ( !ISave::IsConverting )
    ISave::ClearUnusedFiles(v28);
  v39 = -1;
  std::string::~string(&a2);
  return 1;
}

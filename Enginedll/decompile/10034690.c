/*
 * func-name: ?Save@OBJSave@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@3@@Z
 * func-address: 0x10034690
 * callers: none
 * callees: 0x10033d30, 0x10036280, 0x10076ef0, 0x1009dd90, 0x1009ee50, 0x1017a280, 0x101a2500
 */

char __thiscall OBJSave::Save(void *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // ebp
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // esi
  int v18; // ecx
  unsigned int j; // esi
  int v20; // ecx
  int v21; // edx
  _DWORD *v22; // eax
  struct Mesh *Mesh; // eax
  char v25; // [esp-24h] [ebp-F4h] BYREF
  int v26; // [esp-20h] [ebp-F0h]
  int v27; // [esp-1Ch] [ebp-ECh]
  int v28; // [esp-18h] [ebp-E8h]
  char v29; // [esp-14h] [ebp-E4h]
  int v30; // [esp-10h] [ebp-E0h]
  int v31; // [esp-Ch] [ebp-DCh]
  int v32; // [esp-8h] [ebp-D8h]
  _DWORD *v33; // [esp-4h] [ebp-D4h]
  int v34; // [esp+0h] [ebp-D0h]
  int v35; // [esp+4h] [ebp-CCh]
  _DWORD *v36; // [esp+8h] [ebp-C8h]
  char v37[4]; // [esp+10h] [ebp-C0h] BYREF
  _DWORD *v38; // [esp+14h] [ebp-BCh]
  int v39; // [esp+18h] [ebp-B8h]
  int v40; // [esp+1Ch] [ebp-B4h]
  unsigned int i; // [esp+2Ch] [ebp-A4h]
  void *v42; // [esp+30h] [ebp-A0h]
  _DWORD v43[2]; // [esp+34h] [ebp-9Ch] BYREF
  _BYTE v44[136]; // [esp+3Ch] [ebp-94h] BYREF
  int v45; // [esp+CCh] [ebp-4h]

  v42 = this;
  v45 = 0;
  v9 = std::string::c_str(&a2);
  std::wofstream::wofstream(v44, v9, 2, 64, 1);
  LOBYTE(v45) = 1;
  v10 = sub_1017A280(v37, &a2);
  v33 = (_DWORD *)std::endl;
  v32 = v10;
  LOBYTE(v45) = 2;
  v11 = sub_10036280(v44, L"# Welkin4591 .OBJ Export -- ");
  v12 = std::operator<<<wchar_t>(v11, v32);
  std::wostream::operator<<(v12);
  LOBYTE(v45) = 1;
  std::wstring::~wstring(v37);
  v13 = a9;
  v14 = 0;
  v43[0] = 0;
  for ( i = 0; v14 < std::vector<Model *>::size(v13); i = v14 )
  {
    v15 = 0;
    v16 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v17 = *(_DWORD *)(v13 + 4);
    LOBYTE(v45) = 3;
    if ( !v17 || v14 >= (*(_DWORD *)(v13 + 8) - v17) >> 2 )
    {
      invalid_parameter_noinfo();
      v16 = v39;
      v15 = v38;
    }
    v18 = *(_DWORD *)(v13 + 4);
    if ( *(_DWORD *)(*(_DWORD *)(v18 + 4 * v14) + 716) )
    {
      if ( !v18 || v14 >= (*(_DWORD *)(v13 + 8) - v18) >> 2 )
        invalid_parameter_noinfo();
      ModelFrame::EnumerateMeshes(v37);
      v16 = v39;
      v15 = v38;
    }
    for ( j = 0; v15 && j < (v16 - (int)v15) >> 2; ++j )
    {
      v20 = v15[j];
      v33 = v43;
      v32 = v20 + 164;
      if ( j >= (v16 - (int)v15) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = v38;
      }
      v21 = v15[j] + 44;
      v43[1] = &v25;
      std::string::string(&v25, v21);
      v22 = v38;
      LOBYTE(v45) = 4;
      if ( !v38 || j >= (v39 - (int)v38) >> 2 )
      {
        invalid_parameter_noinfo();
        v22 = v38;
      }
      Mesh = ModelFrame::GetMesh((ModelFrame *)v22[j], 0);
      LOBYTE(v45) = 3;
      OBJSave::SaveMesh(
        0,
        (int)invalid_parameter_noinfo,
        v13,
        j,
        (int)v44,
        (int)Mesh,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        (int)v33,
        v34,
        v35,
        v36);
      v16 = v39;
      v15 = v38;
      v14 = i;
    }
    LOBYTE(v45) = 1;
    if ( v15 )
      operator delete(v15);
    ++v14;
    v38 = 0;
    v39 = 0;
    v40 = 0;
  }
  std::wofstream::close(v44);
  LOBYTE(v45) = 0;
  std::wofstream::`vbase destructor'(v44);
  v45 = -1;
  std::string::~string(&a2);
  return 1;
}

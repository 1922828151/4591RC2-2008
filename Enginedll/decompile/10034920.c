/*
 * func-name: ?SaveModel@OBJSave@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVStaticModel@@@Z
 * func-address: 0x10034920
 * callers: none
 * callees: 0x10033d30, 0x10036280, 0x1009dd90, 0x1009ee50, 0x1017a280, 0x101a2500
 */

char __thiscall OBJSave::SaveModel(void *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int i; // esi
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  ModelFrame **v17; // eax
  struct Mesh *Mesh; // eax
  char v20; // [esp-24h] [ebp-FCh] BYREF
  int v21; // [esp-20h] [ebp-F8h]
  int v22; // [esp-1Ch] [ebp-F4h]
  int v23; // [esp-18h] [ebp-F0h]
  char v24; // [esp-14h] [ebp-ECh]
  int v25; // [esp-10h] [ebp-E8h]
  int v26; // [esp-Ch] [ebp-E4h]
  int v27; // [esp-8h] [ebp-E0h]
  _DWORD *v28; // [esp-4h] [ebp-DCh]
  int v29; // [esp+0h] [ebp-D8h]
  int v30; // [esp+4h] [ebp-D4h]
  _DWORD *v31; // [esp+8h] [ebp-D0h]
  _BYTE v32[4]; // [esp+10h] [ebp-C8h] BYREF
  void *v33; // [esp+14h] [ebp-C4h]
  int v34; // [esp+18h] [ebp-C0h]
  int v35; // [esp+1Ch] [ebp-BCh]
  _DWORD v36[2]; // [esp+20h] [ebp-B8h] BYREF
  _BYTE v37[28]; // [esp+28h] [ebp-B0h] BYREF
  _BYTE v38[136]; // [esp+44h] [ebp-94h] BYREF
  int v39; // [esp+D4h] [ebp-4h]

  v39 = 0;
  v10 = std::string::c_str(&a2);
  std::wofstream::wofstream(v38, v10, 2, 64, 1);
  LOBYTE(v39) = 1;
  v27 = sub_1017A280(v37, &a2);
  LOBYTE(v39) = 2;
  v11 = sub_10036280(v38, L"# Welkin4591 .OBJ Export -- ");
  v12 = std::operator<<<wchar_t>(v11, v27);
  std::wostream::operator<<(v12);
  LOBYTE(v39) = 1;
  std::wstring::~wstring(v37);
  v36[0] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  LOBYTE(v39) = 3;
  ModelFrame::EnumerateMeshes(v32);
  for ( i = 0; ; ++i )
  {
    v14 = v33;
    if ( !v33 || i >= (v34 - (int)v33) >> 2 )
      break;
    v15 = *((_DWORD *)v33 + i);
    v28 = v36;
    v27 = v15 + 164;
    if ( i >= (v34 - (int)v33) >> 2 )
    {
      invalid_parameter_noinfo();
      v14 = v33;
    }
    v16 = v14[i] + 44;
    v36[1] = &v20;
    std::string::string(&v20, v16);
    v17 = (ModelFrame **)v33;
    LOBYTE(v39) = 4;
    if ( !v33 || i >= (v34 - (int)v33) >> 2 )
    {
      invalid_parameter_noinfo();
      v17 = (ModelFrame **)v33;
    }
    Mesh = ModelFrame::GetMesh(v17[i], 0);
    LOBYTE(v39) = 3;
    OBJSave::SaveMesh(
      0,
      (int)invalid_parameter_noinfo,
      (int)this,
      i,
      (int)v38,
      (int)Mesh,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      (int)v28,
      v29,
      v30,
      v31);
  }
  std::wofstream::close(v38);
  if ( v33 )
    operator delete(v33);
  v33 = 0;
  v34 = 0;
  v35 = 0;
  LOBYTE(v39) = 0;
  std::wofstream::`vbase destructor'(v38);
  v39 = -1;
  std::string::~string(&a2);
  return 1;
}

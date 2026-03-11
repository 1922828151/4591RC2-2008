/*
 * func-name: ?Load@AnimationSet@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@1@Z
 * func-address: 0x100f4ca0
 * callers: 0x10173030
 * callees: 0x10097220, 0x100f2aa0, 0x100f4bf0, 0x100f4c40, 0x100f64f0, 0x10171860
 */

char __thiscall AnimationSet::Load(int this, int a2, int a3, unsigned __int8 a4, int a5, unsigned __int8 a6)
{
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+8h] [ebp-88h] BYREF
  int v13; // [esp+Ch] [ebp-84h] BYREF
  _BYTE v14[28]; // [esp+14h] [ebp-7Ch] BYREF
  int v15[8]; // [esp+30h] [ebp-60h] BYREF
  int v16; // [esp+50h] [ebp-40h]
  int v17; // [esp+54h] [ebp-3Ch]
  int v18; // [esp+5Ch] [ebp-34h]
  int v19; // [esp+60h] [ebp-30h]
  float v20; // [esp+64h] [ebp-2Ch]
  int v21; // [esp+8Ch] [ebp-4h]

  std::string::string(v14, a3);
  v21 = 0;
  if ( !FindMedia((int)v14, (int)"Models", 0, 0) )
  {
    v21 = -1;
    std::string::~string(v14);
    return 0;
  }
  std::string::operator=(this + 4, a2);
  sub_100F64F0(v15);
  v20 = 0.0254;
  v18 = a4;
  v19 = a6;
  v15[6] = a5;
  LOBYTE(v21) = 1;
  if ( (unsigned __int8)AsyncLoader::GetMemCache(a2, &v13, &v12) )
  {
    if ( sub_100F4C40((int **)v15, v13, v12) )
    {
LABEL_5:
      LOBYTE(v21) = 0;
      sub_100F2AA0((int)v15);
      v21 = -1;
      std::string::~string(v14);
      return 0;
    }
  }
  else
  {
    v8 = std::string::c_str(v14);
    if ( sub_100F4BF0((int **)v15, v8) )
      goto LABEL_5;
  }
  *(_BYTE *)(this + 32) = v18 != 0;
  v9 = v16;
  if ( !v16 || (v10 = v17, !((v17 - v16) >> 3)) )
  {
    invalid_parameter_noinfo();
    v10 = v17;
    v9 = v16;
  }
  *(float *)(this + 36) = *(float *)v9;
  if ( !((v10 - v9) >> 3) )
  {
    invalid_parameter_noinfo();
    v9 = v16;
  }
  v11 = *(_DWORD *)(v9 + 4);
  *(_DWORD *)(this + 40) = v11;
  (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 4))(v11);
  LOBYTE(v21) = 0;
  sub_100F2AA0((int)v15);
  v21 = -1;
  std::string::~string(v14);
  return 1;
}

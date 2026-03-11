/*
 * func-name: ?GetMaterial@MaterialLibrary@@QAEPAVMaterial@@U_GUID@@@Z
 * func-address: 0x100e7ab0
 * callers: none
 * callees: 0x10076ef0, 0x100e2700, 0x100e68a0, 0x10136530
 */

struct Material *__thiscall MaterialLibrary::GetMaterial(MaterialLibrary *this, struct _GUID a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  Material *v5; // esi
  unsigned int i; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  const char *v11; // eax
  char v12; // [esp-20h] [ebp-48h] BYREF
  int v13; // [esp-1Ch] [ebp-44h]
  int v14; // [esp-18h] [ebp-40h]
  int v15; // [esp-14h] [ebp-3Ch]
  int v16; // [esp-10h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-34h]
  int v18; // [esp-8h] [ebp-30h]
  int v19; // [esp-4h] [ebp-2Ch]
  float v20; // [esp+0h] [ebp-28h]
  float v21; // [esp+4h] [ebp-24h]
  float v22; // [esp+8h] [ebp-20h]
  float v23; // [esp+Ch] [ebp-1Ch]
  float v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]

  v3 = 0;
  if ( !std::vector<Model *>::size(this) )
    return 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 1);
    if ( !v4 || v3 >= (*((_DWORD *)this + 2) - v4) >> 2 )
      invalid_parameter_noinfo();
    v5 = *(Material **)(*((_DWORD *)this + 1) + 4 * v3);
    if ( sub_100E2700(&a2, (_DWORD *)v5 + 10) )
      break;
    if ( ++v3 >= std::vector<Model *>::size(this) )
      return 0;
  }
  if ( !*((_DWORD *)v5 + 38) )
  {
    for ( i = 0; ; ++i )
    {
      v8 = *((_DWORD *)v5 + 70);
      if ( !v8 || i >= (*((_DWORD *)v5 + 71) - v8) >> 2 )
        break;
      v9 = *((_DWORD *)v5 + 70);
      if ( **(_DWORD **)(v9 + 4 * i) == 9 )
      {
        if ( !v9 || i >= (*((_DWORD *)v5 + 71) - v9) >> 2 )
          invalid_parameter_noinfo();
        v10 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v5 + 70) + 4 * i) + 60);
        v25 = 0;
        v24 = 0.0;
        v23 = 1.0;
        v22 = 1.0;
        v21 = 0.0;
        v20 = 0.0;
        v19 = 0;
        a2.Data1 = (unsigned int)&v12;
        std::string::string(&v12, v10 + 100);
        Texture::Load(v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
      }
    }
    v25 = 0;
    v24 = COERCE_FLOAT(std::string::c_str((char *)v5 + 56));
    v11 = (const char *)std::string::c_str((char *)v5 + 156);
    Material::Initialize(v5, v11, (const char *)LODWORD(v24), v25);
  }
  return v5;
}

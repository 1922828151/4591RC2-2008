/*
 * func-name: ?GetMaterial@MaterialLibrary@@QAEPAVMaterial@@H@Z
 * func-address: 0x100e79a0
 * callers: 0x100405a0
 * callees: 0x100e68a0, 0x10136530
 */

struct Material *__thiscall MaterialLibrary::GetMaterial(MaterialLibrary *this, unsigned int a2)
{
  int v3; // ecx
  Material *v4; // esi
  unsigned int i; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ebx
  const char *v9; // eax
  char v11; // [esp-20h] [ebp-48h] BYREF
  int v12; // [esp-1Ch] [ebp-44h]
  int v13; // [esp-18h] [ebp-40h]
  int v14; // [esp-14h] [ebp-3Ch]
  int v15; // [esp-10h] [ebp-38h]
  int v16; // [esp-Ch] [ebp-34h]
  int v17; // [esp-8h] [ebp-30h]
  int v18; // [esp-4h] [ebp-2Ch]
  float v19; // [esp+0h] [ebp-28h]
  float v20; // [esp+4h] [ebp-24h]
  float v21; // [esp+8h] [ebp-20h]
  float v22; // [esp+Ch] [ebp-1Ch]
  float v23; // [esp+10h] [ebp-18h]
  int v24; // [esp+14h] [ebp-14h]

  v3 = *((_DWORD *)this + 1);
  if ( !v3 || a2 >= (*((_DWORD *)this + 2) - v3) >> 2 )
    invalid_parameter_noinfo();
  v4 = *(Material **)(*((_DWORD *)this + 1) + 4 * a2);
  if ( !*((_DWORD *)v4 + 38) )
  {
    for ( i = 0; ; ++i )
    {
      v6 = *((_DWORD *)v4 + 70);
      if ( !v6 || i >= (*((_DWORD *)v4 + 71) - v6) >> 2 )
        break;
      v7 = *((_DWORD *)v4 + 70);
      if ( **(_DWORD **)(v7 + 4 * i) == 9 )
      {
        if ( !v7 || i >= (*((_DWORD *)v4 + 71) - v7) >> 2 )
          invalid_parameter_noinfo();
        v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v4 + 70) + 4 * i) + 60);
        v24 = 0;
        v23 = 0.0;
        v22 = 1.0;
        v21 = 1.0;
        v20 = 0.0;
        v19 = 0.0;
        v18 = 0;
        std::string::string(&v11, v8 + 100);
        Texture::Load(v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
      }
    }
    v24 = 0;
    v23 = COERCE_FLOAT(std::string::c_str((char *)v4 + 56));
    v9 = (const char *)std::string::c_str((char *)v4 + 156);
    Material::Initialize(v4, v9, (const char *)LODWORD(v23), v24);
  }
  return v4;
}

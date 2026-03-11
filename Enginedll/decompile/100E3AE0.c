/*
 * func-name: ?PreLoadTexture@Material@@QAEXHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e3ae0
 * callers: 0x100e3c10
 * callees: 0x100e35c0, 0x10136530
 */

void __thiscall Material::PreLoadTexture(Material *this, int a2, int a3)
{
  int v4; // ecx
  unsigned int v5; // edi
  int i; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // [esp-18h] [ebp-48h] BYREF
  int v12; // [esp-14h] [ebp-44h]
  int v13; // [esp-10h] [ebp-40h]
  int v14; // [esp-Ch] [ebp-3Ch]
  int v15; // [esp-8h] [ebp-38h]
  int v16; // [esp-4h] [ebp-34h]
  int v17; // [esp+0h] [ebp-30h]
  int v18; // [esp+4h] [ebp-2Ch]
  float v19; // [esp+8h] [ebp-28h]
  float v20; // [esp+Ch] [ebp-24h]
  float v21; // [esp+10h] [ebp-20h]
  float v22; // [esp+14h] [ebp-1Ch]
  float v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h]

  v4 = *((_DWORD *)this + 68);
  if ( v4 )
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 38) + 16) + 304))(
      *(_DWORD *)(*((_DWORD *)this + 38) + 16),
      v4);
  v5 = 0;
  for ( i = 0; ; i += 32 )
  {
    v7 = *((_DWORD *)this + 6);
    if ( !v7 || v5 >= (*((_DWORD *)this + 7) - v7) >> 5 )
      break;
    if ( *(_DWORD *)(*((_DWORD *)this + 6) + i + 28) == a2 )
    {
      v8 = *((_DWORD *)this + 70);
      if ( !v8 || v5 >= (*((_DWORD *)this + 71) - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = *((_DWORD *)this + 6);
      v24 = 0;
      v23 = 0.0;
      v22 = 1.0;
      v21 = 1.0;
      v20 = 0.0;
      v19 = 0.0;
      v18 = 0;
      if ( !v9 || v5 >= (*((_DWORD *)this + 7) - v9) >> 5 )
        invalid_parameter_noinfo();
      std::string::string(&v11, 32 * v5 + *((_DWORD *)this + 6));
      Texture::Load(v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
      v10 = *((_DWORD *)this + 6);
      if ( !v10 || v5 >= (*((_DWORD *)this + 7) - v10) >> 5 )
        invalid_parameter_noinfo();
      *(_DWORD *)(32 * v5 + *((_DWORD *)this + 6) + 28) = -1;
      break;
    }
    ++v5;
  }
  Material::UpdateStates(this);
}

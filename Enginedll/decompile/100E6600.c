/*
 * func-name: ?PreDestroy@Material@@QAEXXZ
 * func-address: 0x100e6600
 * callers: 0x10138880
 * callees: 0x10027390, 0x100e35c0, 0x100e8b00, 0x10120f40, 0x10136530
 */

void __thiscall Material::PreDestroy(Material *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v3; // edi
  int i; // ebp
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int j; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char v13; // [esp-18h] [ebp-7Ch] BYREF
  int v14; // [esp-14h] [ebp-78h]
  int v15; // [esp-10h] [ebp-74h]
  int v16; // [esp-Ch] [ebp-70h]
  int v17; // [esp-8h] [ebp-6Ch]
  int v18; // [esp-4h] [ebp-68h]
  int v19; // [esp+0h] [ebp-64h]
  int v20; // [esp+4h] [ebp-60h]
  float v21; // [esp+8h] [ebp-5Ch]
  float v22; // [esp+Ch] [ebp-58h]
  float v23; // [esp+10h] [ebp-54h]
  float v24; // [esp+14h] [ebp-50h]
  float v25; // [esp+18h] [ebp-4Ch]
  int v26; // [esp+1Ch] [ebp-48h]
  char *v27; // [esp+30h] [ebp-34h] BYREF
  _BYTE v28[28]; // [esp+38h] [ebp-2Ch] BYREF
  int v29; // [esp+54h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v30; // [esp+58h] [ebp-Ch]
  void *v31; // [esp+5Ch] [ebp-8h]
  int v32; // [esp+60h] [ebp-4h]

  v32 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v31 = &loc_101AF3E3;
  v30 = ExceptionList;
  if ( *((_BYTE *)this + 324) )
  {
    v3 = 0;
    for ( i = 0; ; i += 32 )
    {
      v5 = *((_DWORD *)this + 6);
      if ( !v5 || v3 >= (int)(*((_DWORD *)this + 7) - v5) >> 5 )
        break;
      if ( *(_DWORD *)(*((_DWORD *)this + 6) + i + 28) != -1 )
        return;
      ++v3;
    }
    v6 = *((_DWORD *)this + 7);
    if ( v5 > v6 )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 6);
    if ( v7 > *((_DWORD *)this + 7) )
      invalid_parameter_noinfo();
    sub_10027390((int *)this + 5, &v27, (int)this + 20, v7, (int)this + 20, v6);
    if ( *((_DWORD *)this + 68) )
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 38) + 16) + 304))(
        *(_DWORD *)(*((_DWORD *)this + 38) + 16),
        *((_DWORD *)this + 68));
    for ( j = 0; ; ++j )
    {
      v9 = *((_DWORD *)this + 70);
      if ( !v9 || j >= (*((_DWORD *)this + 71) - v9) >> 2 )
        break;
      std::string::string(v28);
      v29 = -1;
      v10 = *((_DWORD *)this + 70);
      v32 = 0;
      if ( !v10 || j >= (*((_DWORD *)this + 71) - v10) >> 2 )
        invalid_parameter_noinfo();
      v11 = *((_DWORD *)this + 70);
      if ( **(_DWORD **)(v11 + 4 * j) == 9 )
      {
        if ( !v11 || j >= (*((_DWORD *)this + 71) - v11) >> 2 )
          invalid_parameter_noinfo();
        std::string::operator=(v28, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 70) + 4 * j) + 60) + 100);
        sub_100E8B00((int)this + 20, v28);
        v26 = 0;
        v25 = 0.0;
        v24 = 1.0;
        v23 = 1.0;
        v22 = 0.0;
        v21 = 0.0;
        v20 = 0;
        v27 = &v13;
        std::string::string(&v13, "DefaultTexture.dds");
        Texture::Load(v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        v12 = *((_DWORD *)this + 70);
        if ( !v12 || j >= (*((_DWORD *)this + 71) - v12) >> 2 )
          invalid_parameter_noinfo();
        Shader::SetVar(*((Shader **)this + 38), *(struct ShaderVar **)(*((_DWORD *)this + 70) + 4 * j));
      }
      else
      {
        sub_100E8B00((int)this + 20, v28);
      }
      v32 = -1;
      std::string::~string(v28);
    }
    Material::UpdateStates(this);
    *((_BYTE *)this + 324) = 0;
  }
}

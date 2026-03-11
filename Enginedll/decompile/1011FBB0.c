/*
 * func-name: ?Reload@Shader@@QAE_NXZ
 * func-address: 0x1011fbb0
 * callers: 0x10121d10
 * callees: 0x100956d0, 0x100971c0, 0x100977a0, 0x101189f0, 0x101279c0, 0x101781b8, 0x1017c0d0
 */

char __thiscall Shader::Reload(Shader *this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  struct RenderDevice *v4; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  char v9; // [esp-1Ch] [ebp-98h] BYREF
  int v10; // [esp-18h] [ebp-94h]
  int v11; // [esp-14h] [ebp-90h]
  int v12; // [esp-10h] [ebp-8Ch]
  int v13; // [esp-Ch] [ebp-88h]
  int v14; // [esp-8h] [ebp-84h]
  void *v15; // [esp-4h] [ebp-80h]
  int v16; // [esp+0h] [ebp-7Ch] BYREF
  int v17; // [esp+4h] [ebp-78h]
  int v18; // [esp+8h] [ebp-74h]
  int v19; // [esp+Ch] [ebp-70h]
  int v20; // [esp+10h] [ebp-6Ch]
  char *v21; // [esp+14h] [ebp-68h]
  _DWORD *v22; // [esp+18h] [ebp-64h]
  _DWORD v23[3]; // [esp+2Ch] [ebp-50h] BYREF
  _BYTE v24[28]; // [esp+38h] [ebp-44h] BYREF
  _BYTE v25[28]; // [esp+54h] [ebp-28h] BYREF
  int v26; // [esp+78h] [ebp-4h]

  v23[1] = &v16;
  v2 = (_DWORD *)((char *)this + 16);
  v15 = &unk_101C9D56;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 32;
  std::string::string(&v16, v15);
  v23[2] = &v9;
  v26 = 0;
  std::string::string(&v9, "ShaderPrecomputing");
  LOBYTE(v26) = 1;
  Engine::Instance();
  v26 = -1;
  if ( !(unsigned __int8)sub_1017C0D0(v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22) )
    *((_DWORD *)this + 2) &= 0x100u;
  v3 = *((_DWORD *)this + 2);
  v22 = v23;
  v21 = (char *)this + 16;
  v20 = 0;
  v19 = v3;
  v18 = 0;
  v17 = 0;
  v16 = std::string::c_str((char *)this + 216);
  v4 = RenderDevice::Instance();
  if ( D3DXCreateEffectFromFileA(*((_DWORD *)v4 + 427), v16, v17, v18, v19, v20, v21, v22) >= 0 )
  {
    if ( !*v2 )
      SeriousWarning("Effect is NULL");
    *((_DWORD *)this + 5) = 0;
    *((_BYTE *)this + 180) = 0;
    *((_DWORD *)this + 46) = -1;
    Shader::ProcessGlobals(this);
    return 1;
  }
  else
  {
    std::string::string(v24);
    v26 = 2;
    std::string::operator+=(v24, "Error loading compiled effect, ");
    v5 = std::operator+<char>(v25, (char *)this + 216, "\n");
    LOBYTE(v26) = 3;
    std::string::operator+=(v24, v5);
    LOBYTE(v26) = 2;
    std::string::~string(v25);
    if ( v23[0] && (unsigned int)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)v23[0] + 16))(v23[0]) > 1 )
    {
      v6 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v23[0] + 12))(v23[0]);
      std::string::operator+=(v24, v6);
      if ( v23[0] )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v23[0] + 8))(v23[0]);
        v23[0] = 0;
      }
    }
    v7 = (char *)std::string::c_str(v24);
    Error(v7);
    v26 = -1;
    std::string::~string(v24);
    return 0;
  }
}

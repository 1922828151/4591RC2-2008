/*
 * func-name: ?ProcessGlobals@Shader@@IAEXXZ
 * func-address: 0x101279c0
 * callers: 0x1011fbb0, 0x10125a30
 * callees: 0x101208a0
 */

void __thiscall Shader::ProcessGlobals(Shader *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v5[28]; // [esp+18h] [ebp-28h] BYREF
  int v6; // [esp+3Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = 0;
  v3 = (*(int (__stdcall **)(int, _DWORD, const char *))(*(_DWORD *)v2 + 40))(v2, 0, "StandardsGlobal");
  if ( v3 )
  {
    v4 = (*(int (__stdcall **)(_DWORD, int, const char *))(**((_DWORD **)this + 4) + 76))(
           *((_DWORD *)this + 4),
           v3,
           "Script");
    if ( v4 )
    {
      Shader::GetString((_DWORD **)this, (int)v5, v4);
      v6 = 0;
      if ( std::string::find(v5, "ReadsColorBuffer", 0) != -1 )
        *(_DWORD *)this |= 1u;
      if ( std::string::find(v5, "ReadsGlobalColorBuffer", 0) != -1 )
        *(_DWORD *)this |= 2u;
      if ( std::string::find(v5, "ForceLDR", 0) != -1 )
        *(_DWORD *)this |= 4u;
      if ( std::string::find(v5, "UsesLightArray", 0) != -1 )
        *(_DWORD *)this |= 8u;
      v6 = -1;
      std::string::~string(v5);
    }
  }
}

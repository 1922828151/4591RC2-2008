/*
 * func-name: ?Initialize@Material@@QAE_NPBD0_N@Z
 * func-address: 0x100e68a0
 * callers: 0x10003a50, 0x1003a4c0, 0x1003d0f0, 0x10040990, 0x10055500, 0x100e6ae0, 0x100e6db0, 0x100e7390, 0x100e79a0, 0x100e7ab0, 0x10106ce0, 0x1012ffd0
 * callees: 0x1000f820, 0x100e2a60, 0x100e3980, 0x100e3c30, 0x100e4800, 0x100e4db0, 0x100e5360, 0x10120cb0, 0x10122da0, 0x10122e00, 0x10123eb0, 0x10124ed0, 0x10125a30, 0x101a2500, 0x101a2534
 */

char __thiscall Material::Initialize(Material *this, const char *a2, const char *a3, bool a4)
{
  Shader *v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  Shader *v8; // eax
  Shader *v9; // eax
  const char *v10; // eax
  void *v11; // edi
  char v13; // [esp-1Ch] [ebp-5Ch] BYREF
  int v14; // [esp-18h] [ebp-58h]
  int v15; // [esp-14h] [ebp-54h]
  int v16; // [esp-10h] [ebp-50h]
  int v17; // [esp-Ch] [ebp-4Ch]
  int v18; // [esp-8h] [ebp-48h]
  const char *v19; // [esp-4h] [ebp-44h]
  int v20; // [esp+10h] [ebp-30h] BYREF
  _BYTE v21[28]; // [esp+18h] [ebp-28h] BYREF
  int v22; // [esp+3Ch] [ebp-4h]

  v19 = a3;
  *((_BYTE *)this + 324) = 1;
  std::string::string(v21, v19);
  v22 = 0;
  std::string::operator=((char *)this + 156, a2);
  v5 = (Shader *)*((_DWORD *)this + 38);
  if ( v5 )
  {
    Shader::Release(v5);
    *((_DWORD *)this + 38) = 0;
  }
  v6 = *((_DWORD *)this + 23);
  if ( *((_DWORD *)this + 22) > v6 )
    invalid_parameter_noinfo();
  v7 = *((_DWORD *)this + 22);
  if ( v7 > *((_DWORD *)this + 23) )
    invalid_parameter_noinfo();
  std::vector<EditorVar>::erase((int *)this + 21, &v20, (int)this + 84, v7, (int)this + 84, v6);
  if ( !a4 )
  {
    ShaderManager::Instance();
    *((_DWORD *)this + 38) = ShaderManager::GetShader((char *)this + 156);
  }
  if ( *((_DWORD *)this + 38)
    || ((v8 = (Shader *)operator new(0x38C0u), LOBYTE(v22) = 1, !v8) ? (v9 = 0) : (v9 = Shader::Shader(v8)),
        LOBYTE(v22) = 0,
        *((_DWORD *)this + 38) = v9,
        v10 = (const char *)std::string::c_str((char *)this + 156),
        Shader::Load(*((Shader **)this + 38), v10)) )
  {
    Material::ExtractParameters(this);
    Material::SetEditorVars(this);
    Material::RemoveUnusedParams(this);
    Material::GatherTechniqueNames(this);
    std::string::string(&v13, v21);
    Material::SetTechnique(this, v13, v14, v15, v16, v17, v18, (int)v19);
    std::string::string(&v13, "MatEmissive");
    *((_DWORD *)this + 62) = Material::FindVar(this, v13, v14, v15, v16, v17, v18, (int)v19);
    std::string::string(&v13, "Opacity");
    *((_DWORD *)this + 63) = Material::FindVar(this, v13, v14, v15, v16, v17, v18, (int)v19);
    std::string::string(&v13, "AlphaBlend");
    *((_DWORD *)this + 64) = Material::FindVar(this, v13, v14, v15, v16, v17, v18, (int)v19);
    std::string::string(&v13, "AlphaTest");
    *((_DWORD *)this + 65) = Material::FindVar(this, v13, v14, v15, v16, v17, v18, (int)v19);
    v22 = -1;
    std::string::~string(v21);
    return 1;
  }
  else
  {
    v11 = (void *)*((_DWORD *)this + 38);
    if ( v11 )
    {
      Shader::~Shader(*((Shader **)this + 38));
      operator delete(v11);
      *((_DWORD *)this + 38) = 0;
    }
    v22 = -1;
    std::string::~string(v21);
    return 0;
  }
}

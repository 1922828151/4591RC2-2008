/*
 * func-name: ?SetUnlit@Shader@@QAEXXZ
 * func-address: 0x10121c90
 * callers: none
 * callees: 0x10120f40
 */

void __thiscall Shader::SetUnlit(Shader *this)
{
  char *v2; // edi
  float v3; // [esp+4h] [ebp-10h] BYREF
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  v3 = 100000.0;
  v2 = (char *)this + 4728;
  v4 = 0.0;
  v5 = 0.0;
  *((_DWORD *)this + 1197) = &v3;
  Shader::SetVar(this, (Shader *)((char *)this + 4728));
  v3 = 0.0;
  *((_DWORD *)v2 + 69) = 0;
  v4 = 0.0;
  v5 = 0.0;
  *((_DWORD *)this + 1337) = &v3;
  v6 = 1.0;
  Shader::SetVar(this, (Shader *)((char *)this + 5288));
  *((_DWORD *)this + 1391) = 0;
}

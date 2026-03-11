/*
 * func-name: ?SetTechnique@Shader@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10018780
 * callers: none
 * callees: 0x101203c0, 0x101206e0
 */

int __thiscall Shader::SetTechnique(Shader *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const char *Technique; // eax
  char v11; // [esp-1Ch] [ebp-30h] BYREF
  int v12; // [esp-18h] [ebp-2Ch]
  int v13; // [esp-14h] [ebp-28h]
  int v14; // [esp-10h] [ebp-24h]
  int v15; // [esp-Ch] [ebp-20h]
  int v16; // [esp-8h] [ebp-1Ch]
  int v17; // [esp-4h] [ebp-18h]
  char *v18; // [esp+4h] [ebp-10h]
  int v19; // [esp+10h] [ebp-4h]

  v18 = &v11;
  v19 = 0;
  std::string::string(&v11, &a2);
  Technique = (const char *)Shader::GetTechnique(v11, v12, v13, v14, v15, v16, v17);
  Shader::SetTechnique(this, Technique);
  v19 = -1;
  return std::string::~string(&a2);
}

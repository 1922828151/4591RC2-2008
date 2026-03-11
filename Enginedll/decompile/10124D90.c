/*
 * func-name: ?SetWorld@Shader@@QAEXABVMatrix@@@Z
 * func-address: 0x10124d90
 * callers: 0x1005bd90, 0x1005cb50, 0x100678c0, 0x100a0810, 0x100f0c50, 0x100f1010, 0x100f1180, 0x101280a0, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: 0x1001cb70, 0x101189f0, 0x10120f40, 0x101213d0, 0x10122da0
 */

void __thiscall Shader::SetWorld(Shader *this, const struct Matrix *a2)
{
  char *v3; // esi
  struct RenderDevice *v4; // eax
  char v5; // [esp+13h] [ebp-81h] BYREF
  int v6[16]; // [esp+14h] [ebp-80h] BYREF
  float v7[16]; // [esp+54h] [ebp-40h] BYREF

  v3 = (char *)this + 14248;
  v5 = 0;
  *((_DWORD *)this + 3577) = &v5;
  Shader::SetVar(this, (Shader *)((char *)this + 14248));
  *((_DWORD *)v3 + 69) = 0;
  qmemcpy(v6, (char *)ShaderManager::Instance() + 132, sizeof(v6));
  qmemcpy((char *)this + 52, sub_1001CB70(a2, v7, (int)v6), 0x40u);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v4 + 456))(v4, (char *)this + 52);
  Shader::SetCommonShaderConstants(this);
}

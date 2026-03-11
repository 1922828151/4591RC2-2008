/*
 * func-name: ?SetColorBuffer@Shader@@QAEXPAX@Z
 * func-address: 0x10121a70
 * callers: 0x1005bd90, 0x1005cb50, 0x100678c0, 0x100a0810, 0x101077c0, 0x1012c590, 0x1012cad0, 0x1012d660
 * callees: 0x101189f0, 0x10120f40
 */

void __thiscall Shader::SetColorBuffer(Shader *this, void *a2)
{
  char *v3; // edi
  struct RenderDevice *v4; // edi
  struct RenderDevice *v5; // ebx
  struct RenderDevice *v6; // ebp
  struct RenderDevice *v7; // eax
  int v8; // eax
  float v9; // [esp+10h] [ebp-1Ch]
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+18h] [ebp-14h]
  float v12[4]; // [esp+1Ch] [ebp-10h] BYREF
  float v13; // [esp+30h] [ebp+4h]

  v3 = (char *)this + 12288;
  *((_DWORD *)this + 3087) = a2;
  Shader::SetVar(this, (Shader *)((char *)this + 12288));
  *((_DWORD *)v3 + 69) = 0;
  v4 = RenderDevice::Instance();
  v5 = RenderDevice::Instance();
  v6 = RenderDevice::Instance();
  v7 = RenderDevice::Instance();
  v9 = 0.5 / (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 296))(v7) + 0.5;
  v10 = 0.5 / (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 300))(v6) + 0.5;
  v11 = (float)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 296))(v5);
  v8 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 300))(v4);
  *((_DWORD *)this + 3157) = v12;
  v13 = (float)v8;
  v12[0] = v9;
  v12[1] = v10;
  v12[2] = v11;
  v12[3] = v13;
  Shader::SetVar(this, (Shader *)((char *)this + 12568));
  *((_DWORD *)this + 3211) = 0;
}

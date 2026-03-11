/*
 * func-name: ?SetCommonShaderConstants@Shader@@QAEXXZ
 * func-address: 0x101213d0
 * callers: 0x10124d90
 * callees: 0x1001cb70, 0x101189f0, 0x10120f40, 0x101786e0, 0x10178c20, 0x101a251c
 */

void __thiscall Shader::SetCommonShaderConstants(Shader *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  float v4[16]; // [esp+1Ch] [ebp-200h] BYREF
  float v5[16]; // [esp+5Ch] [ebp-1C0h] BYREF
  float v6[16]; // [esp+9Ch] [ebp-180h] BYREF
  float v7[16]; // [esp+DCh] [ebp-140h] BYREF
  float v8[32]; // [esp+11Ch] [ebp-100h] BYREF
  int v9[16]; // [esp+19Ch] [ebp-80h] BYREF
  int v10[16]; // [esp+1DCh] [ebp-40h] BYREF

  qmemcpy(v8, (char *)this + 52, 0x40u);
  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v2 + 468))(v2, v9);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v3 + 480))(v3, v10);
  memset(v5, 0, sizeof(v5));
  sub_101786E0(1.0);
  v5[15] = 1.0;
  memset(v7, 0, sizeof(v7));
  sub_101786E0(1.0);
  v7[15] = 1.0;
  memset(v6, 0, sizeof(v6));
  sub_101786E0(1.0);
  v6[15] = 1.0;
  memset(&v8[16], 0, 0x40u);
  sub_101786E0(1.0);
  v8[31] = 1.0;
  qmemcpy(v5, sub_1001CB70(v8, v4, (int)v9), sizeof(v5));
  qmemcpy(v7, sub_1001CB70(v5, v4, (int)v10), sizeof(v7));
  qmemcpy(v4, v8, sizeof(v4));
  sub_10178C20(v4);
  qmemcpy(v6, v4, sizeof(v6));
  qmemcpy((char *)this + 116, v4, 0x40u);
  *((_DWORD *)this + 357) = v7;
  Shader::SetVar(this, (Shader *)((char *)this + 1368));
  *((_DWORD *)this + 411) = 0;
  *((_DWORD *)this + 77) = v6;
  Shader::SetVar(this, (Shader *)((char *)this + 248));
  *((_DWORD *)this + 131) = 0;
  *((_DWORD *)this + 427) = v8;
  Shader::SetVar(this, (Shader *)((char *)this + 1648));
  *((_DWORD *)this + 481) = 0;
  *((_DWORD *)this + 217) = v5;
  Shader::SetVar(this, (Shader *)((char *)this + 808));
  *((_DWORD *)this + 271) = 0;
}

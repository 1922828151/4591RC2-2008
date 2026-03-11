/*
 * func-name: ?SetHDR@Shader@@QAEX_N00@Z
 * func-address: 0x10121930
 * callers: none
 * callees: 0x101189f0, 0x10120f40
 */

void __thiscall Shader::SetHDR(Shader *this, bool a2, bool a3, bool a4)
{
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // esi
  struct RenderDevice *v8; // ebp
  struct RenderDevice *v9; // ebx
  struct RenderDevice *v10; // eax
  int v11; // eax
  float v12; // [esp+4h] [ebp-1Ch]
  float v13; // [esp+8h] [ebp-18h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15[4]; // [esp+10h] [ebp-10h] BYREF
  float v16; // [esp+24h] [ebp+4h]

  v5 = RenderDevice::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 132))(v5) )
  {
    v6 = RenderDevice::Instance();
    *((_DWORD *)this + 3087) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 192))(v6);
    Shader::SetVar(this, (Shader *)((char *)this + 12288));
    *((_DWORD *)this + 3141) = 0;
    if ( a2 )
    {
      v7 = RenderDevice::Instance();
      v8 = RenderDevice::Instance();
      v9 = RenderDevice::Instance();
      v10 = RenderDevice::Instance();
      v12 = 0.5 / (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v10 + 296))(v10) + 0.5;
      v13 = 0.5 / (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v9 + 300))(v9) + 0.5;
      v14 = (float)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v8 + 296))(v8);
      v11 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 300))(v7);
      *((_DWORD *)this + 3157) = v15;
      v16 = (float)v11;
      v15[0] = v12;
      v15[1] = v13;
      v15[2] = v14;
      v15[3] = v16;
      Shader::SetVar(this, (Shader *)((char *)this + 12568));
      *((_DWORD *)this + 3211) = 0;
    }
  }
}

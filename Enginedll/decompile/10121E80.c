/*
 * func-name: ?Begin@Shader@@QAEI_N@Z
 * func-address: 0x10121e80
 * callers: 0x100569f0, 0x10059880, 0x100678c0, 0x100a0810, 0x100e5360, 0x100f1010, 0x101282d0, 0x10128c50, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: 0x1001cb70, 0x101189f0, 0x10120f40, 0x101786e0, 0x10178c20, 0x1017eaef, 0x101a251c
 */

int __thiscall Shader::Begin(Shader *this, bool a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v10; // [esp+1Ch] [ebp-144h] BYREF
  float v11[16]; // [esp+20h] [ebp-140h] BYREF
  int v12[16]; // [esp+60h] [ebp-100h] BYREF
  float v13[16]; // [esp+A0h] [ebp-C0h] BYREF
  _BYTE v14[64]; // [esp+E0h] [ebp-80h] BYREF
  _BYTE v15[64]; // [esp+120h] [ebp-40h] BYREF

  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v3 + 480))(v3, v12);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v4 + 468))(v4, v14);
  qmemcpy(v15, v12, sizeof(v15));
  memset(v11, 0, sizeof(v11));
  sub_101786E0(1.0);
  v11[15] = 1.0;
  qmemcpy(v15, sub_1001CB70(v14, v13, (int)v12), sizeof(v15));
  qmemcpy(v13, v14, sizeof(v13));
  sub_10178C20(v13);
  qmemcpy(v11, v13, sizeof(v11));
  *((_DWORD *)this + 637) = &flt_112417B8;
  Shader::SetVar(this, (Shader *)((char *)this + 2488));
  *((_DWORD *)this + 691) = 0;
  *((_DWORD *)this + 287) = v11;
  Shader::SetVar(this, (Shader *)((char *)this + 1088));
  *((_DWORD *)this + 341) = 0;
  *((_DWORD *)this + 497) = v15;
  Shader::SetVar(this, (Shader *)((char *)this + 1928));
  *((_DWORD *)this + 551) = 0;
  *((_DWORD *)this + 567) = v12;
  Shader::SetVar(this, (Shader *)((char *)this + 2208));
  *((_DWORD *)this + 621) = 0;
  *((_DWORD *)this + 707) = &GDeltaTime;
  Shader::SetVar(this, (Shader *)((char *)this + 2768));
  *((_DWORD *)this + 761) = 0;
  v5 = *((_DWORD *)this + 4);
  *((_BYTE *)this + 180) = 1;
  v6 = (*(int (__stdcall **)(int, int *, bool))(*(_DWORD *)v5 + 252))(v5, &v10, !a2);
  if ( v6 < 0 )
  {
    v7 = *(_DWORD *)dword_11249F38;
    v8 = sub_1017EAEF(v6);
    (*(void (**)(void *, const char *, ...))(v7 + 4))(
      dword_11249F38,
      " Error: %s, in: effect->Begin(&passes,saveState?0:D3DXFX_DONOTSAVESTATE )",
      v8);
  }
  if ( byte_112417B4 )
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 256))(*((_DWORD *)this + 4), 0);
  return v10;
}

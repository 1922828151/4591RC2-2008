/*
 * func-name: ?DrawFullScreenQuad@PostProcess@@QAEXMMMM@Z
 * func-address: 0x10106790
 * callers: 0x101077c0, 0x10108cb0
 * callees: 0x101189f0
 */

void __thiscall PostProcess::DrawFullScreenQuad(PostProcess *this, float a2, float a3, float a4, float a5)
{
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  float v10; // [esp+28h] [ebp-8Ch]
  int v11; // [esp+2Ch] [ebp-88h] BYREF
  float v12; // [esp+30h] [ebp-84h]
  float v13[24]; // [esp+34h] [ebp-80h] BYREF
  _DWORD v14[8]; // [esp+94h] [ebp-20h] BYREF

  v5 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**((_DWORD **)v5 + 427) + 152))(*((_DWORD *)v5 + 427), 0, &v11);
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v11 + 48))(v11, v14);
  (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
  v12 = (double)v14[6] - 0.5;
  v10 = (double)v14[7] - 0.5;
  v13[1] = -0.5;
  v13[2] = 0.5;
  v13[0] = -0.5;
  v13[3] = 1.0;
  v13[4] = a2;
  v13[5] = a3;
  v13[6] = v12;
  v13[7] = -0.5;
  v13[8] = 0.5;
  v13[9] = 1.0;
  v13[10] = a4;
  v13[11] = a3;
  v13[12] = -0.5;
  v13[13] = v10;
  v13[14] = 0.5;
  v13[15] = 1.0;
  v13[16] = a2;
  v13[17] = a5;
  v13[18] = v12;
  v13[19] = v10;
  v13[20] = 0.5;
  v13[21] = 1.0;
  v13[22] = a4;
  v13[23] = a5;
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v6 + 432))(v6, 7, 0);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v7 + 416))(v7, 260);
  v8 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int, int, float *, int))(**((_DWORD **)v8 + 427) + 332))(
    *((_DWORD *)v8 + 427),
    5,
    2,
    v13,
    24);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 7, 1);
}

/*
 * func-name: sub_100B52E0
 * func-address: 0x100b52e0
 * callers: 0x100b5410
 * callees: 0x100b5280, 0x101189f0
 */

int __cdecl sub_100B52E0(int a1, int a2, int a3, int a4, float a5)
{
  double v5; // st7
  double v6; // st6
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  float v11; // [esp+8h] [ebp-74h]
  float v12; // [esp+8h] [ebp-74h]
  float v13; // [esp+8h] [ebp-74h]
  float v14; // [esp+8h] [ebp-74h]
  float v15[28]; // [esp+Ch] [ebp-70h] BYREF

  v15[4] = a5;
  v15[11] = a5;
  v11 = (float)a1;
  v15[18] = a5;
  v5 = v11;
  v15[25] = a5;
  v15[0] = v11;
  v12 = (float)a2;
  v6 = v12;
  v15[1] = v12;
  v15[2] = 0.5;
  v15[3] = 1.0;
  v15[5] = 0.0;
  v15[6] = 0.5;
  v13 = (double)a3 + v5;
  v15[7] = v13;
  v15[8] = v6;
  v15[9] = 0.5;
  v15[10] = 1.0;
  v15[12] = 1.0;
  v15[13] = 0.5;
  v15[14] = v13;
  v14 = v6 + (double)a4;
  v15[15] = v14;
  v15[16] = 0.5;
  v15[17] = 1.0;
  v15[19] = 1.0;
  v15[20] = 1.0;
  v15[24] = 1.0;
  v15[21] = v5;
  v15[22] = v14;
  v15[23] = 0.5;
  v15[26] = 0.0;
  v15[27] = 1.0;
  REGetGlobalDialogResourceManager();
  v7 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v7 + 427) + 428))(*((_DWORD *)v7 + 427), 0);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v8 + 416))(v8, dword_10281554);
  v9 = RenderDevice::Instance();
  return (*(int (__stdcall **)(_DWORD, int, int, float *, int))(**((_DWORD **)v9 + 427) + 332))(
           *((_DWORD *)v9 + 427),
           6,
           2,
           v15,
           28);
}

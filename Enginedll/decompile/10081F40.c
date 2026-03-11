/*
 * func-name: ?DrawScript@Editor@@IAEXPAVActor@@@Z
 * func-address: 0x10081f40
 * callers: 0x10088cd0
 * callees: 0x101189f0, 0x101786e0, 0x101a251c
 */

void __userpurge Editor::DrawScript(struct Actor *a1, int a2, int a3, int a4)
{
  struct RenderDevice *v5; // esi
  struct RenderDevice *v6; // eax
  int *v7; // esi
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  int v16; // edx
  _BYTE v17[120]; // [esp+90h] [ebp-78h] BYREF

  v5 = RenderDevice::Instance();
  memset(&v17[56], 0, 0x40u);
  sub_101786E0(1.0);
  *(float *)&v17[116] = 1.0;
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v5 + 456))(v5, &v17[56]);
  v6 = RenderDevice::Instance();
  v7 = (int *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 392))(v6);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 27, 1);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 137, 1);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v10 + 440))(v10, 0, 1, 2);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v11 + 440))(v11, 0, 2, 2);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v12 + 440))(v12, 0, 3, 0);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v13 + 440))(v13, 0, 4, 2);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v14 + 440))(v14, 0, 5, 2);
  memset(v17, 0, 0x44u);
  *(float *)v17 = 1.0;
  *(float *)&v17[4] = 0.0;
  *(float *)&v17[8] = 0.0;
  *(float *)&v17[12] = 1.0;
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v15 + 488))(v15, v17);
  v16 = *v7;
  if ( *(_BYTE *)(a4 + 441) )
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(v16 + 124))(a4 + 856, 0.25, 0.25, -16711936);
  else
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(v16 + 124))(a4 + 856, 0.25, 0.25, -1);
}

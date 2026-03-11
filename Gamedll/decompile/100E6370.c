/*
 * func-name: ?PostRender@SamplePlayer@@UAEXPAVCamera@@@Z_0
 * func-address: 0x100e6370
 * callers: 0x10010d66
 * callees: none
 */

void __thiscall SamplePlayer::PostRender(SamplePlayer *this, struct Camera *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v3 = RenderDevice::Instance();
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 392))(v3);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v4 + 44))(
    v4,
    0,
    -16711936,
    20.0,
    285.0,
    &unk_10310738);
  v5 = RenderDevice::Instance();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 392))(v5);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v6 + 44))(
    v6,
    0,
    -16711936,
    20.0,
    305.0,
    &unk_10310740);
  v7 = RenderDevice::Instance();
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 392))(v7);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v8 + 44))(
    v8,
    0,
    -16711936,
    20.0,
    325.0,
    &unk_10310748);
  v9 = RenderDevice::Instance();
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 392))(v9);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v10 + 44))(
    v10,
    0,
    -16711936,
    20.0,
    325.0,
    &unk_10310750);
  v11 = RenderDevice::Instance();
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 392))(v11);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v12 + 44))(
    v12,
    0,
    -16711936,
    20.0,
    345.0,
    &unk_10310758);
  v13 = RenderDevice::Instance();
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 392))(v13);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v14 + 44))(
    v14,
    0,
    -16711936,
    20.0,
    365.0,
    &unk_10310764);
  v15 = RenderDevice::Instance();
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 392))(v15);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v16 + 44))(
    v16,
    0,
    -16711936,
    20.0,
    385.0,
    &unk_10310770);
  v17 = RenderDevice::Instance();
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 392))(v17);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v18 + 44))(
    v18,
    0,
    -16711936,
    20.0,
    405.0,
    &unk_1031077C);
  v19 = RenderDevice::Instance();
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 392))(v19);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v20 + 44))(
    v20,
    0,
    -16711936,
    20.0,
    425.0,
    &unk_10310788);
  v21 = RenderDevice::Instance();
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 392))(v21);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v22 + 44))(
    v22,
    0,
    -16711936,
    20.0,
    445.0,
    &unk_10310794);
  v23 = RenderDevice::Instance();
  v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 392))(v23);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v24 + 44))(
    v24,
    0,
    -16711936,
    20.0,
    465.0,
    &unk_103107A0);
  v25 = RenderDevice::Instance();
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 392))(v25);
  (*(void (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v26 + 44))(
    v26,
    0,
    -16711936,
    20.0,
    485.0,
    &unk_103107B0);
  Actor::PostRender(this, a2);
}

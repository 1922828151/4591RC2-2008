/*
 * func-name: ?OnResolutionChange@CHallMapUI@@UAEXXZ_0
 * func-address: 0x10275070
 * callers: 0x100080e4
 * callees: 0x10019d03, 0x102c9ea8, 0x102c9fe0
 */

void __thiscall CHallMapUI::OnResolutionChange(CHallMapUI *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  struct CREControl *Control; // eax
  struct CREControl *v8; // ebx
  struct CREControl *v9; // eax
  struct CREControl *v10; // eax
  struct CREControl *v11; // eax
  struct CREControl *v12; // eax
  struct CREControl *v13; // eax
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  struct CREControl *v17; // eax
  int v18; // [esp+40h] [ebp-28h]
  int v19; // [esp+64h] [ebp-4h]

  v2 = RenderDevice::Instance(this);
  v4 = RenderDevice::Instance(v3);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 300))(v2);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 296))(v4);
  *((_DWORD *)this + 176) = v5;
  *((_DWORD *)this + 175) = v6;
  Control = CREDialog::GetControl(this, 11);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, _DWORD))(*(_DWORD *)Control + 160))(
    Control,
    *((_DWORD *)this + 175),
    *((_DWORD *)Control + 27));
  v8 = CREDialog::GetControl(this, 12);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, _DWORD))(*(_DWORD *)v8 + 160))(
    v8,
    *((_DWORD *)this + 175),
    *((_DWORD *)v8 + 27));
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v8 + 156))(
    v8,
    0,
    *((_DWORD *)this + 176) - *((_DWORD *)v8 + 27));
  v9 = CREDialog::GetControl(this, 5);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v9 + 156))(
    v9,
    *((_DWORD *)this + 175) - 115,
    *((_DWORD *)v9 + 25));
  v10 = CREDialog::GetControl(this, 6);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v10 + 156))(
    v10,
    *((_DWORD *)this + 175) - 127,
    *((_DWORD *)v10 + 25));
  v11 = CREDialog::GetControl(this, 7);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v11 + 156))(
    v11,
    *((_DWORD *)this + 175) - 52,
    *((_DWORD *)v11 + 25));
  v12 = CREDialog::GetControl(this, 9);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v12 + 156))(
    v12,
    *((_DWORD *)this + 175) - 195,
    *((_DWORD *)v12 + 25));
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 968) + 160))(
    *((_DWORD *)this + 968),
    *((_DWORD *)this + 175),
    *((_DWORD *)this + 176));
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 968) + 156))(*((_DWORD *)this + 968), 0, 0);
  *((_DWORD *)this + 971) = 2;
  CHallMapUI::ZoomOut(this);
  v13 = CREDialog::GetControl(this, 8);
  v14 = _RTDynamicCast(v13, v18, 0, &CREControl `RTTI Type Descriptor');
  v16 = RenderDevice::Instance(v15);
  v19 = (int)((double)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 300))(v16) * 0.3600000143051147);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 160))(v14, (int)((double)v19 * 1.319444417953491), v19);
  v17 = CREDialog::GetControl(this, 12);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 156))(
    v14,
    50,
    *((_DWORD *)v17 + 25) - *(_DWORD *)(v14 + 108));
  *(float *)(v14 + 528) = 0.30000001;
}

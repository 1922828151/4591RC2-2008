/*
 * func-name: ?Tick@CLoginUI@@UAEXM@Z_0
 * func-address: 0x10276850
 * callers: 0x100133a9
 * callees: none
 */

void __thiscall CLoginUI::Tick(struct CREControl **this, float a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // edi
  struct CREControl *Control; // eax
  struct CREControl *v8; // edi
  struct CREControl *v9; // edi
  struct CREControl *v10; // eax
  struct CREControl *v11; // eax
  struct CREControl *v12; // edi
  int v13; // ebp
  struct CREControl *v14; // eax
  struct CREControl *v15; // eax
  struct CREControl *v16; // eax
  struct CREControl *v17; // eax
  int v18; // eax
  int v19; // edi
  Input *v20; // eax
  struct CREControl *v21; // eax

  v3 = RenderDevice::Instance(this);
  v5 = RenderDevice::Instance(v4);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 300))(v3);
  this[175] = (struct CREControl *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 296))(v5);
  this[176] = (struct CREControl *)v6;
  Control = CREDialog::GetControl((CREDialog *)this, 5);
  (*(void (__thiscall **)(struct CREControl *, struct CREControl *, _DWORD))(*(_DWORD *)Control + 160))(
    Control,
    this[175],
    *((_DWORD *)Control + 27));
  v8 = CREDialog::GetControl((CREDialog *)this, 6);
  (*(void (__thiscall **)(struct CREControl *, struct CREControl *, _DWORD))(*(_DWORD *)v8 + 160))(
    v8,
    this[175],
    *((_DWORD *)v8 + 27));
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v8 + 156))(
    v8,
    *((_DWORD *)v8 + 24),
    (int)this[176] - 71);
  v9 = CREDialog::GetControl((CREDialog *)this, 7);
  (*(void (__thiscall **)(struct CREControl *, struct CREControl *, _DWORD))(*(_DWORD *)v9 + 160))(
    v9,
    this[175],
    *((_DWORD *)v9 + 27));
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v9 + 156))(v9, 0, (int)this[176] - 181);
  v10 = CREDialog::GetControl((CREDialog *)this, 8);
  (*(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v10 + 156))(
    v10,
    *((_DWORD *)v10 + 24),
    (int)this[176] - 49);
  v11 = CREDialog::GetControl((CREDialog *)this, 9);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v11 + 156))(
    v11,
    (int)this[175] - 397,
    (int)this[176] - 51);
  v12 = CREDialog::GetControl((CREDialog *)this, 10);
  v13 = *(_DWORD *)v12;
  v14 = CREDialog::GetControl((CREDialog *)this, 7);
  (*(void (__thiscall **)(struct CREControl *, int, int))(v13 + 156))(
    v12,
    (int)this[175] - 532,
    *((_DWORD *)v14 + 25) + 22);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[968] + 156))(
    this[968],
    *((_DWORD *)v12 + 24) + 44,
    *((_DWORD *)v12 + 25) + 1);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[969] + 156))(
    this[969],
    *((_DWORD *)v12 + 24) + 209,
    *((_DWORD *)v12 + 25) + 1);
  v15 = CREDialog::GetControl((CREDialog *)this, 4);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v15 + 156))(
    v15,
    *((_DWORD *)v12 + 24) + 397,
    *((_DWORD *)v12 + 25) + 5);
  v16 = CREDialog::GetControl((CREDialog *)this, 3);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v16 + 156))(
    v16,
    *((_DWORD *)v12 + 24) + 436,
    *((_DWORD *)v12 + 25) - 4);
  v17 = CREDialog::GetControl((CREDialog *)this, 11);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v17 + 156))(
    v17,
    (int)this[175] - 86,
    (int)this[176] - 51);
  v18 = *(_DWORD *)(dword_103B67B4 + 8);
  v19 = dword_103B67B4 + 8;
  if ( !v18 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v18) >> 2) <= 0x31 )
    _invalid_parameter_noinfo();
  v20 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v19 + 196));
  if ( Input::ControlJustReleased(v20) )
  {
    v21 = this[968];
    if ( CREDialog::s_pControlFocus == v21 )
    {
      v21 = this[969];
    }
    else if ( CREDialog::s_pControlFocus != this[969] )
    {
      goto LABEL_10;
    }
    if ( v21 )
      CREDialog::RequestFocus((CREDialog *)this, v21);
  }
LABEL_10:
  CTYDialog::Tick((CTYDialog *)this, a2);
}

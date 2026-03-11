/*
 * func-name: ?InitComponent@CBattleFieldDetailUI@@QAEXXZ_0
 * func-address: 0x10253b80
 * callers: 0x10003184
 * callees: 0x102c9d98
 */

void __thiscall CBattleFieldDetailUI::InitComponent(struct CREControl **this)
{
  CHotZonePic *v2; // eax
  CHotZonePic *v3; // edi
  struct CREControl *v4; // ecx
  CSeperateLine *v5; // eax
  CSeperateLine *v6; // edi
  CSeperateLine *v7; // eax
  CSeperateLine *v8; // edi
  CSeperateLine *v9; // eax
  CSeperateLine *v10; // edi
  CSeperateLine *v11; // eax
  CSeperateLine *v12; // edi

  v2 = (CHotZonePic *)operator new(0x27Cu);
  v3 = v2;
  if ( v2 )
  {
    CHotZonePic::CHotZonePic(v2, (struct CTYDialog *)this);
    *(_DWORD *)v3 = &CHotZonePic::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  this[969] = v4;
  (*(void (__thiscall **)(struct CREControl *, _DWORD, _DWORD))(*(_DWORD *)v4 + 156))(v4, 0, 0);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[969] + 160))(this[969], 200, 200);
  *((_DWORD *)this[969] + 34) = 1;
  CREDialog::AddControl((CREDialog *)this, this[969]);
  v5 = (CSeperateLine *)operator new(0x220u);
  v6 = v5;
  if ( v5 )
  {
    CSeperateLine::CSeperateLine(v5, (struct CREDialog *)this);
    *(_DWORD *)v6 = &CSeperateLine::`vftable';
  }
  else
  {
    v6 = 0;
  }
  (*(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v6 + 156))(v6, 0, 0);
  (*(void (__thiscall **)(CSeperateLine *, int, struct CREControl *))(*(_DWORD *)v6 + 160))(v6, 1, this[176]);
  *((_BYTE *)v6 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v6, 0xFF77C5D1);
  *((_DWORD *)v6 + 34) = 4096;
  *((_DWORD *)v6 + 131) = 2;
  CREDialog::AddControl((CREDialog *)this, v6);
  v7 = (CSeperateLine *)operator new(0x220u);
  v8 = v7;
  if ( v7 )
  {
    CSeperateLine::CSeperateLine(v7, (struct CREDialog *)this);
    *(_DWORD *)v8 = &CSeperateLine::`vftable';
  }
  else
  {
    v8 = 0;
  }
  (*(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v8 + 156))(v8, 0, 0);
  (*(void (__thiscall **)(CSeperateLine *, struct CREControl *, int))(*(_DWORD *)v8 + 160))(v8, this[175], 1);
  *((_BYTE *)v8 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v8, 0xFF77C5D1);
  *((_DWORD *)v8 + 34) = 4097;
  *((_DWORD *)v8 + 131) = 2;
  CREDialog::AddControl((CREDialog *)this, v8);
  v9 = (CSeperateLine *)operator new(0x220u);
  v10 = v9;
  if ( v9 )
  {
    CSeperateLine::CSeperateLine(v9, (struct CREDialog *)this);
    *(_DWORD *)v10 = &CSeperateLine::`vftable';
  }
  else
  {
    v10 = 0;
  }
  (*(void (__thiscall **)(CSeperateLine *, int, _DWORD))(*(_DWORD *)v10 + 156))(v10, (int)this[175] - 1, 0);
  (*(void (__thiscall **)(CSeperateLine *, int, struct CREControl *))(*(_DWORD *)v10 + 160))(v10, 1, this[176]);
  *((_BYTE *)v10 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v10, 0xFF77C5D1);
  *((_DWORD *)v10 + 34) = 4098;
  *((_DWORD *)v10 + 131) = 2;
  CREDialog::AddControl((CREDialog *)this, v10);
  v11 = (CSeperateLine *)operator new(0x220u);
  v12 = v11;
  if ( v11 )
  {
    CSeperateLine::CSeperateLine(v11, (struct CREDialog *)this);
    *(_DWORD *)v12 = &CSeperateLine::`vftable';
  }
  else
  {
    v12 = 0;
  }
  (*(void (__thiscall **)(CSeperateLine *, _DWORD, int))(*(_DWORD *)v12 + 156))(v12, 0, (int)this[176] - 1);
  (*(void (__thiscall **)(CSeperateLine *, struct CREControl *, int))(*(_DWORD *)v12 + 160))(v12, this[175], 1);
  *((_BYTE *)v12 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v12, 0xFF77C5D1);
  *((_DWORD *)v12 + 34) = 4099;
  *((_DWORD *)v12 + 131) = 2;
  CREDialog::AddControl((CREDialog *)this, v12);
  CREDialog::RefreshControlByZOrder((CREDialog *)this);
}

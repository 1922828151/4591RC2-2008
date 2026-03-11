/*
 * func-name: ?RefreshStatus@CLoginUI@@IAEXXZ_0
 * func-address: 0x102766a0
 * callers: 0x1000e17e
 * callees: 0x102bdb40, 0x102bdf50, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CLoginUI::RefreshStatus(struct CREControl **this)
{
  struct CREControl *Control; // eax
  CRECheckBox *v3; // edi
  char v4; // al
  int v5; // eax
  const char *v6; // eax
  const wchar_t *v7; // eax
  _DWORD v8[2]; // [esp-3Ch] [ebp-80h] BYREF
  int v9; // [esp-34h] [ebp-78h] BYREF
  int v10; // [esp-30h] [ebp-74h]
  int v11; // [esp-2Ch] [ebp-70h]
  int v12; // [esp-28h] [ebp-6Ch]
  int v13; // [esp-24h] [ebp-68h]
  int v14; // [esp-20h] [ebp-64h] BYREF
  int v15; // [esp-1Ch] [ebp-60h]
  char v16; // [esp-18h] [ebp-5Ch] BYREF
  int v17; // [esp-14h] [ebp-58h]
  int v18; // [esp-10h] [ebp-54h]
  int v19; // [esp-Ch] [ebp-50h]
  int v20; // [esp-8h] [ebp-4Ch]
  void ***v21; // [esp-4h] [ebp-48h]
  int v22; // [esp+0h] [ebp-44h]
  bool v23; // [esp+4h] [ebp-40h]
  _DWORD *v24; // [esp+14h] [ebp-30h]
  char *v25; // [esp+18h] [ebp-2Ch]
  _DWORD v26[7]; // [esp+1Ch] [ebp-28h] BYREF
  int v27; // [esp+40h] [ebp-4h]
  int retaddr; // [esp+44h] [ebp+0h]

  CREDialog::RequestFocus((CREDialog *)this, this[968]);
  v22 = 0;
  v21 = &CRECheckBox `RTTI Type Descriptor';
  Control = CREDialog::GetControl((CREDialog *)this, 4);
  v25 = &v16;
  v3 = (CRECheckBox *)_RTDynamicCast(Control, v18, 0, &CREControl `RTTI Type Descriptor');
  std::string::string(&v16, "Game.Networking");
  v26[0] = &v9;
  std::string::string(&v9, "RememberAccount");
  Engine::Instance(v9);
  retaddr = -1;
  v4 = sub_102BDB40(v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
  CRECheckBox::SetChecked(v3, v4);
  if ( *((_BYTE *)v3 + 816) )
  {
    v21 = 0;
    v25 = (char *)&v14;
    std::string::string(&v14, "Game.Networking");
    v24 = v8;
    v27 = 2;
    std::string::string(v8, "LastAccount");
    LOBYTE(v27) = 3;
    Engine::Instance(v26);
    v5 = sub_102BDF50(v8[1], v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
    v6 = (const char *)std::string::c_str(v5);
    v7 = atow(v6);
    CREEditBox::SetText(this[968], v7, v23);
    v27 = -1;
    std::string::~string(v26);
    CREDialog::RequestFocus((CREDialog *)this, this[969]);
  }
}

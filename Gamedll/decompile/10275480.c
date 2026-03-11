/*
 * func-name: ?Refresh@CHallMapUI@@QAEXXZ_0
 * func-address: 0x10275480
 * callers: 0x10009881
 * callees: 0x1000194c, 0x10002374, 0x10011a3b, 0x10011a4f, 0x100182fa, 0x10018377, 0x10018827, 0x102c8d6c, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CHallMapUI::Refresh(CHallMapUI *this)
{
  int *v2; // esi
  struct CREControl *Control; // eax
  CREStatic *v4; // ebx
  const char *v5; // eax
  const wchar_t *v6; // eax
  struct CREControl *v7; // eax
  size_t v8; // eax
  struct CREControl *v9; // eax
  CREStatic *v10; // eax
  int v11; // edx
  int v12; // eax
  const wchar_t *v13; // eax
  struct CREControl *v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  const char *v18; // eax
  const wchar_t *v19; // eax
  struct CREControl *v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  const char *v24; // eax
  const wchar_t *v25; // eax
  int v26; // [esp+24h] [ebp-178h] BYREF
  int v27; // [esp+28h] [ebp-174h]
  int v28; // [esp+2Ch] [ebp-170h]
  int v29; // [esp+30h] [ebp-16Ch]
  int v30; // [esp+34h] [ebp-168h]
  int v31; // [esp+38h] [ebp-164h]
  void ***v32; // [esp+3Ch] [ebp-160h]
  void ***p_rc; // [esp+40h] [ebp-15Ch]
  int v34; // [esp+44h] [ebp-158h]
  CREStatic *v35; // [esp+58h] [ebp-144h]
  _BYTE v36[4]; // [esp+5Ch] [ebp-140h] BYREF
  _BYTE v37[24]; // [esp+60h] [ebp-13Ch] BYREF
  struct tagRECT rc; // [esp+78h] [ebp-124h] BYREF
  _BYTE v39[28]; // [esp+88h] [ebp-114h] BYREF
  _BYTE v40[4]; // [esp+A4h] [ebp-F8h] BYREF
  _BYTE v41[24]; // [esp+A8h] [ebp-F4h] BYREF
  wchar_t Buffer[102]; // [esp+C0h] [ebp-DCh] BYREF
  int v43; // [esp+194h] [ebp-8h]
  int v44; // [esp+198h] [ebp-4h]

  v2 = (int *)sub_1000194C(0);
  if ( v2 )
  {
    Control = CREDialog::GetControl(this, 5);
    v4 = (CREStatic *)_RTDynamicCast(Control, v30, 0, &CREControl `RTTI Type Descriptor');
    v5 = (const char *)std::string::c_str(v2 + 2);
    v6 = atow(v5);
    CREStatic::SetText(v4, v6);
    v34 = 0;
    v7 = CREDialog::GetControl(this, 6);
    v35 = (CREStatic *)_RTDynamicCast(v7, v30, 0, &CREControl `RTTI Type Descriptor');
    std::wstring::wstring(v39, L"HALLMAP_EXPLOIT");
    v43 = 0;
    Precacher::GetText(v40, v39);
    LOBYTE(v43) = 2;
    std::wstring::~wstring(v39);
    p_rc = (void ***)v2[57];
    v8 = std::wstring::c_str(v40);
    sub_10011A4F(Buffer, v8, (wchar_t)p_rc);
    CREStatic::SetText(v35, Buffer);
    v34 = 0;
    p_rc = &CREStatic `RTTI Type Descriptor';
    v9 = CREDialog::GetControl(this, 7);
    v10 = (CREStatic *)_RTDynamicCast(v9, v30, 0, &CREControl `RTTI Type Descriptor');
    v11 = v2[15];
    v35 = v10;
    v12 = sub_10002374((int)v36, v11);
    LOBYTE(v43) = 3;
    std::wstring::operator=(v40, v12);
    LOBYTE(v43) = 2;
    std::wstring::~wstring(v36);
    v13 = (const wchar_t *)std::wstring::c_str(v40);
    CREStatic::SetText(v35, v13);
    sub_10018827(v2[1]);
    v34 = 0;
    v14 = CREDialog::GetControl(this, 8);
    v15 = _RTDynamicCast(v14, v30, 0, &CREControl `RTTI Type Descriptor');
    SetRect(&rc, 0, 0, 95, 72);
    v16 = v2[12];
    p_rc = (void ***)&rc;
    v17 = sub_10011A3B(v36, v16);
    LOBYTE(v43) = 4;
    v18 = (const char *)std::string::c_str(v17);
    v19 = atow(v18);
    v35 = (CREStatic *)&v26;
    std::wstring::wstring(&v26, v19);
    CPictureLabel::ChangeTexture(v15, v26, v27, v28, v29, v30, v31, v32, p_rc);
    LOBYTE(v44) = 2;
    std::string::~string(v37);
    v34 = 0;
    p_rc = &CPictureLabel `RTTI Type Descriptor';
    v32 = &CREControl `RTTI Type Descriptor';
    v31 = 0;
    v20 = CREDialog::GetControl(this, 9);
    v21 = _RTDynamicCast(v20, v30, v31, v32);
    v22 = v2[15];
    p_rc = 0;
    v23 = sub_10018377(v36, v22);
    LOBYTE(v43) = 5;
    v24 = (const char *)std::string::c_str(v23);
    v25 = atow(v24);
    v35 = (CREStatic *)&v26;
    std::wstring::wstring(&v26, v25);
    CPictureLabel::ChangeTexture(v21, v26, v27, v28, v29, v30, v31, v32, p_rc);
    LOBYTE(v44) = 2;
    std::string::~string(v37);
    v44 = -1;
    std::wstring::~wstring(v41);
  }
  CHallMapUI::RefreshBattleLoc(this);
}

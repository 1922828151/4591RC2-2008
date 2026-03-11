/*
 * func-name: ?Login@CLoginUI@@QAEXXZ_0
 * func-address: 0x10276ad0
 * callers: 0x10002856
 * callees: 0x10009b5b, 0x1000e56b, 0x102bf760, 0x102bf800, 0x102c8d66, 0x102c9d62, 0x102c9d98, 0x102c9ea8
 */

void __thiscall CLoginUI::Login(CLoginUI *this)
{
  int v2; // edi
  const char *v3; // eax
  const char *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  struct CREControl *Control; // eax
  int v9; // edi
  int v10; // eax
  const char *v11; // eax
  int v12; // eax
  _DWORD v13[6]; // [esp-38h] [ebp-B8h] BYREF
  int v14; // [esp-20h] [ebp-A0h] BYREF
  int v15; // [esp-1Ch] [ebp-9Ch] BYREF
  int v16; // [esp-18h] [ebp-98h]
  int v17; // [esp-14h] [ebp-94h]
  int v18; // [esp-10h] [ebp-90h]
  int v19; // [esp-Ch] [ebp-8Ch]
  int v20; // [esp-8h] [ebp-88h]
  void ***v21; // [esp-4h] [ebp-84h]
  int v22; // [esp+0h] [ebp-80h]
  int v23; // [esp+4h] [ebp-7Ch]
  int v24; // [esp+14h] [ebp-6Ch]
  int *v25; // [esp+18h] [ebp-68h]
  _BYTE v26[28]; // [esp+1Ch] [ebp-64h] BYREF
  _BYTE v27[4]; // [esp+38h] [ebp-48h] BYREF
  _BYTE v28[24]; // [esp+3Ch] [ebp-44h] BYREF
  _BYTE v29[28]; // [esp+54h] [ebp-2Ch] BYREF
  int v30; // [esp+7Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+80h] [ebp+0h]

  if ( dword_103B665C )
  {
    v2 = *(_DWORD *)(dword_103B665C + 16);
    if ( !*(_DWORD *)(v2 + 8) )
    {
      v3 = wtoa(*(const wchar_t **)(*((_DWORD *)this + 968) + 532));
      std::string::operator=(v2 + 12, v3);
      v4 = wtoa(*(const wchar_t **)(*((_DWORD *)this + 969) + 532));
      std::string::operator=(v2 + 40, v4);
      sub_1000E56B(v22, v23);
      sub_10009B5B(v22, v23);
      LogPrintf("Connect login server...");
      std::wstring::wstring(v26, L"IN_LOGIN");
      v30 = 0;
      Precacher::GetText(v29, v26);
      LOBYTE(v30) = 2;
      std::wstring::~wstring(v26);
      v5 = operator new(4u);
      if ( v5 )
        *v5 = &CLoginingHandler::`vftable';
      v6 = std::wstring::c_str(v29);
      std::wstring::wstring(v27, v6);
      LOBYTE(v30) = 3;
      v7 = CDlgMgr::Instance();
      CDlgMgr::ConfirmMessage(v7);
      LOBYTE(retaddr) = 2;
      std::wstring::~wstring(v28);
      v22 = 0;
      v21 = &CRECheckBox `RTTI Type Descriptor';
      Control = CREDialog::GetControl(this, 4);
      v9 = _RTDynamicCast(Control, v18, 0, &CREControl `RTTI Type Descriptor');
      LOBYTE(v24) = *(_BYTE *)(v9 + 816);
      v21 = (void ***)v24;
      v24 = (int)&v14;
      std::string::string(&v14, "RememberAccount");
      LOBYTE(v30) = 4;
      v10 = Engine::Instance(v14);
      LOBYTE(v30) = 2;
      sub_102BF800(*(_DWORD *)(v10 + 116), v14, v15, v16, v17, v18, v19, v20, (int)v21);
      if ( *(_BYTE *)(v9 + 816) )
      {
        v11 = wtoa(*(const wchar_t **)(*((_DWORD *)this + 968) + 532));
        v24 = (int)&v15;
        std::string::string(&v15, v11);
        v25 = v13;
        LOBYTE(v30) = 5;
        std::string::string(v13, "LastAccount");
        LOBYTE(v30) = 6;
      }
      else
      {
        v25 = &v15;
        std::string::string(&v15, &unk_10322306);
        v24 = (int)v13;
        LOBYTE(v30) = 7;
        std::string::string(v13, "LastAccount");
        LOBYTE(v30) = 8;
      }
      v12 = Engine::Instance(v13[0]);
      LOBYTE(v30) = 2;
      sub_102BF760(
        *(_DWORD *)(v12 + 116),
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        (int)v21);
      v30 = -1;
      std::wstring::~wstring(v29);
    }
  }
}

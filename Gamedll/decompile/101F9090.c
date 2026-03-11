/*
 * func-name: ?ReceiveInvite@GroupManager@GameClient@@QAEXKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@@Z_0
 * func-address: 0x101f9090
 * callers: 0x1000f6f0
 * callees: 0x1000332d, 0x10011a4f, 0x102c8d6c, 0x102c9d62, 0x102c9d98
 */

void __stdcall GameClient::GroupManager::ReceiveInvite(char a1, int a2, Outpop::Utility::Ref_Object *a3)
{
  int v3; // ebp
  Outpop::Utility::Ref_Object **v4; // esi
  Outpop::Utility::Ref_Object *v5; // edi
  bool v6; // zf
  const char *v7; // eax
  size_t v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wchar_t v14; // [esp-4h] [ebp-208h]
  _BYTE v15[28]; // [esp+10h] [ebp-1F4h] BYREF
  _BYTE v16[28]; // [esp+2Ch] [ebp-1D8h] BYREF
  _BYTE v17[28]; // [esp+48h] [ebp-1BCh] BYREF
  wchar_t Buffer[200]; // [esp+64h] [ebp-1A0h] BYREF
  int v19; // [esp+200h] [ebp-4h]

  v3 = a2;
  v19 = 0;
  v4 = (Outpop::Utility::Ref_Object **)sub_1000332D((int)&a1);
  if ( *v4 )
    Outpop::Utility::Ref_Object::release(*v4);
  v5 = a3;
  v6 = a3 == 0;
  *v4 = a3;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v5);
  std::wstring::wstring(v15, L"RECEIVED_INVITE");
  LOBYTE(v19) = 1;
  Precacher::GetText(v17, v15);
  LOBYTE(v19) = 3;
  std::wstring::~wstring(v15);
  v7 = (const char *)std::string::c_str(v3);
  v14 = (unsigned __int16)atow(v7);
  v8 = std::wstring::c_str(v17);
  sub_10011A4F(Buffer, v8, v14);
  std::wstring::wstring(v16, Buffer);
  LOBYTE(v19) = 4;
  *(_BYTE *)(*(_DWORD *)(CDlgMgr::Instance() + 20) + 4005) = 0;
  v9 = operator new(4u);
  if ( v9 )
    *v9 = &GameClient::CReceiveInviteObserver::`vftable';
  v10 = CDlgMgr::Instance();
  CDlgMgr::ConfirmMessage(v10);
  v11 = CDlgMgr::Instance();
  CTYDialog::SetHasInput(*(CTYDialog **)(v11 + 20), 0);
  v12 = CDlgMgr::Instance();
  CTYDialog::CenterDialog(*(CTYDialog **)(v12 + 20), 0, 1);
  v13 = CDlgMgr::Instance();
  CTYDialog::NestToEdge(*(CTYDialog **)(v13 + 20), 1u);
  LOBYTE(v19) = 3;
  std::wstring::~wstring(v16);
  LOBYTE(v19) = 0;
  std::wstring::~wstring(v17);
  v19 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
}

/*
 * func-name: ?OnProduceResult@Func_Receive@GameClient@@UAEXKK@Z_0
 * func-address: 0x101c03a0
 * callers: 0x1000f09c
 * callees: 0x10016a4f, 0x102c9d62
 */

void __thiscall GameClient::Func_Receive::OnProduceResult(GameClient::Func_Receive *this, char a2, unsigned int a3)
{
  CDlgMgr *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _BYTE v8[28]; // [esp+Ch] [ebp-80h] BYREF
  _BYTE v9[28]; // [esp+28h] [ebp-64h] BYREF
  _BYTE v10[28]; // [esp+44h] [ebp-48h] BYREF
  _BYTE v11[28]; // [esp+60h] [ebp-2Ch] BYREF
  int v12; // [esp+88h] [ebp-4h]

  v4 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::EndMessage(v4);
  switch ( a3 )
  {
    case 0x4A3Au:
      v7 = sub_10016A4F(a2);
      if ( v7 )
        (*(void (__thiscall **)(GameClient::Func_Receive *, int))(*(_DWORD *)this + 44))(this, v7);
      break;
    case 0x4A3Bu:
      std::wstring::wstring(v8, L"RECEIVER_ERROR_NOTENOUGH");
      v12 = 3;
      Precacher::GetText(v11, v8);
      LOBYTE(v12) = 5;
      std::wstring::~wstring(v8);
      v6 = CDlgMgr::Instance();
      CDlgMgr::ConfirmMessage(v6);
      v12 = -1;
      std::wstring::~wstring(v11);
      break;
    case 0x4A3Cu:
      std::wstring::wstring(v9, L"RECEIVER_ERROR_NOTSUIT");
      v12 = 0;
      Precacher::GetText(v10, v9);
      LOBYTE(v12) = 2;
      std::wstring::~wstring(v9);
      v5 = CDlgMgr::Instance();
      CDlgMgr::ConfirmMessage(v5);
      v12 = -1;
      std::wstring::~wstring(v10);
      break;
  }
}

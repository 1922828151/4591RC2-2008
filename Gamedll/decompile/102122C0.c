/*
 * func-name: sub_102122C0
 * func-address: 0x102122c0
 * callers: 0x1001a762
 * callees: 0x1000169a, 0x10004886, 0x10009e6c, 0x1000e56b, 0x10010a32, 0x102c9d62
 */

void __stdcall sub_102122C0(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  CDlgMgr *v7; // eax
  struct BinStream *v8; // eax
  int v9; // ecx
  unsigned int v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  struct GameClient::LocalUser *User; // eax
  int v16; // [esp+0h] [ebp-40h]
  int v17; // [esp+0h] [ebp-40h]
  int v18; // [esp+4h] [ebp-3Ch]
  unsigned int v19; // [esp+10h] [ebp-30h]
  _BYTE v20[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v21; // [esp+3Ch] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = v19;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  if ( v4 )
  {
    Precacher::GetErrorText(v20, v4);
    v21 = 0;
    v5 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v5);
    v6 = CDlgMgr::Instance();
    CTYDialog::CenterDialog(*(CTYDialog **)(v6 + 20), 1, 1);
    v21 = -1;
    std::wstring::~wstring(v20);
  }
  else
  {
    v7 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::EndMessage(v7);
    v8 = Event::GetStream(a1);
    v9 = *((_DWORD *)v8 + 3);
    v10 = *((_DWORD *)v8 + 2);
    if ( v9 + 4 > v10 )
    {
      v11 = v19;
    }
    else
    {
      v11 = *(_DWORD *)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v9 + 4;
    }
    v12 = *((_DWORD *)v8 + 3);
    v13 = v12 + 4;
    if ( v12 + 4 > v10 )
    {
      v14 = v19;
    }
    else
    {
      v14 = *(_DWORD *)(v12 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v13;
    }
    User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, v14);
    if ( User )
    {
      *((_DWORD *)User + 9) = v11;
      sub_1000E56B(v11, v18);
      sub_1000169A(v16);
      LogPrintf("connect gate success. GateID: %d", v11);
      v17 = *(_DWORD *)(sub_10009E6C() + 24);
      sub_10009E6C();
      sub_10004886(v17);
    }
  }
}

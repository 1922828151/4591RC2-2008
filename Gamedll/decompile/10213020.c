/*
 * func-name: sub_10213020
 * func-address: 0x10213020
 * callers: 0x10002649
 * callees: 0x10001181, 0x100045f7, 0x100052a4, 0x10006497, 0x1000bc76, 0x1000e56b, 0x10010a32, 0x10011abd, 0x100128e1, 0x100154d3, 0x10017db9, 0x10017fe9, 0x102c9d62
 */

void __stdcall sub_10213020(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v7; // esi
  Outpop::Message::Message *v8; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  Outpop::Message::Message **v11; // eax
  GameClient::LocalUserManager *v12; // edi
  Outpop::Message::Message *v13; // ecx
  unsigned int v14; // eax
  int *v15; // edi
  unsigned __int8 v16; // bl
  bool v17; // zf
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  Outpop::Message::Message **v24; // eax
  GameClient::LocalUserManager *v25; // esi
  Outpop::Message::Message *v26; // ecx
  unsigned int v27; // eax
  struct GameClient::LocalUser *v28; // esi
  unsigned int v29; // [esp+0h] [ebp-160h]
  int v30; // [esp+4h] [ebp-15Ch]
  int v31; // [esp+4h] [ebp-15Ch]
  int v32; // [esp+4h] [ebp-15Ch]
  int v33; // [esp+8h] [ebp-158h]
  int v34; // [esp+8h] [ebp-158h]
  int v35; // [esp+Ch] [ebp-154h]
  int v36; // [esp+Ch] [ebp-154h]
  Outpop::Utility::Ref_Object *v37; // [esp+1Ch] [ebp-144h] BYREF
  Outpop::Utility::Ref_Object *v38; // [esp+20h] [ebp-140h] BYREF
  int v39; // [esp+24h] [ebp-13Ch] BYREF
  Outpop::Utility::Ref_Object *v40; // [esp+28h] [ebp-138h] BYREF
  _BYTE v41[28]; // [esp+2Ch] [ebp-134h] BYREF
  _DWORD v42[7]; // [esp+48h] [ebp-118h] BYREF
  _BYTE v43[28]; // [esp+64h] [ebp-FCh] BYREF
  int v44; // [esp+80h] [ebp-E0h] BYREF
  _BYTE v45[28]; // [esp+84h] [ebp-DCh] BYREF
  _BYTE v46[4]; // [esp+A0h] [ebp-C0h] BYREF
  _BYTE v47[5]; // [esp+A4h] [ebp-BCh] BYREF
  _BYTE v48[167]; // [esp+A9h] [ebp-B7h] BYREF
  int v49; // [esp+15Ch] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v37);
  v49 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v3 = -1;
  v49 = -1;
  if ( v37 )
    Outpop::Utility::Ref_Object::release(v37);
  if ( v2 )
  {
    LogPrintf("Get character list failed.");
    std::wstring::wstring(v41, L"CHARACTER_FETCH_FAILED");
    v49 = 1;
    Precacher::GetText(v42, v41);
    LOBYTE(v49) = 3;
    std::wstring::~wstring(v41);
    v4 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v4);
    v5 = CDlgMgr::Instance();
    CTYDialog::CenterDialog(*(CTYDialog **)(v5 + 20), 1, 1);
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v37);
    v7 = GameClient::LocalUserManager::s_pInstance;
    v8 = *RequestMessage;
    LOBYTE(v49) = 4;
    multi_id = Outpop::Message::Message::get_multi_id(v8);
    User = GameClient::LocalUserManager::GetUser(v7, multi_id);
    LOBYTE(v49) = 3;
    if ( v37 )
      Outpop::Utility::Ref_Object::release(v37);
    if ( User )
    {
      sub_1000E56B(*((_DWORD *)User + 9), v33);
      sub_100154D3(v30);
    }
    v49 = -1;
    std::wstring::~wstring(v42);
  }
  else
  {
    v11 = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v37);
    v12 = GameClient::LocalUserManager::s_pInstance;
    v13 = *v11;
    v49 = 5;
    v14 = Outpop::Message::Message::get_multi_id(v13);
    v15 = (int *)GameClient::LocalUserManager::GetUser(v12, v14);
    v49 = -1;
    if ( v37 )
      Outpop::Utility::Ref_Object::release(v37);
    if ( v15 )
    {
      Event::GetAckMessage(a1, &v38);
      v49 = 6;
      sub_10001181((int)&v39);
      v49 = -1;
      if ( v38 )
        Outpop::Utility::Ref_Object::release(v38);
      v16 = 0;
      v17 = v39 == 0;
      if ( v39 > 0 )
      {
        do
        {
          sub_10017DB9(v33, v35);
          v49 = 7;
          Event::GetAckMessage(a1, &v38);
          LOBYTE(v49) = 8;
          sub_10001181((int)&v44);
          sub_10017FE9((int)v45);
          sub_100128E1((int)v46);
          sub_10001181((int)v47);
          sub_100128E1((int)v48);
          LOBYTE(v49) = 7;
          if ( v38 )
            Outpop::Utility::Ref_Object::release(v38);
          v18 = v15[17];
          v19 = v15[1];
          v42[1] = v15[9];
          v42[3] = v18;
          v42[0] = v19;
          v20 = v15[18];
          v42[2] = -1;
          v42[4] = v20;
          v21 = sub_10006497((int)&v44, (int)v42);
          sub_100052A4(*(_DWORD *)(v21 + 4));
          if ( v3 == -1 )
            v3 = v44;
          v49 = -1;
          sub_1000BC76(v34, v36);
          ++v16;
        }
        while ( v16 < v39 );
        v17 = v39 == 0;
      }
      if ( v17 )
      {
        std::wstring::wstring(v41, L"CHARACTER_NOT_EXIST");
        v49 = 9;
        Precacher::GetText(v43, v41);
        LOBYTE(v49) = 11;
        std::wstring::~wstring(v41);
        v22 = CDlgMgr::Instance();
        CDlgMgr::ConfirmMessage(v22);
        v23 = CDlgMgr::Instance();
        CTYDialog::CenterDialog(*(CTYDialog **)(v23 + 20), 1, 1);
        v24 = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v40);
        v25 = GameClient::LocalUserManager::s_pInstance;
        v26 = *v24;
        LOBYTE(v49) = 12;
        v27 = Outpop::Message::Message::get_multi_id(v26);
        v28 = GameClient::LocalUserManager::GetUser(v25, v27);
        LOBYTE(v49) = 11;
        if ( v40 )
          Outpop::Utility::Ref_Object::release(v40);
        if ( v28 )
        {
          sub_1000E56B(*((_DWORD *)v28 + 9), v33);
          sub_100154D3(v31);
        }
        v49 = -1;
        std::wstring::~wstring(v43);
      }
      else
      {
        LogPrintf("Send character online.");
        sub_10011ABD(v15[1], v3);
        sub_100045F7(v29, v32);
      }
    }
  }
}

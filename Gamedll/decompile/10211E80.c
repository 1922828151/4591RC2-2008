/*
 * func-name: sub_10211E80
 * func-address: 0x10211e80
 * callers: 0x10008cb0
 * callees: 0x10001181, 0x100052b8, 0x100068e8, 0x100076a8, 0x1000bb36, 0x1000d364, 0x1000e56b, 0x1000e63d, 0x1000f259, 0x100154d3, 0x10017fe9, 0x1001a2e9, 0x102c9d62
 */

void __stdcall sub_10211E80(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  Outpop::Message::Message *v3; // ecx
  unsigned __int16 result; // ax
  Outpop::Message::Message *v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  Outpop::Message::Message *v11; // ecx
  int v12; // eax
  int v13; // [esp-38h] [ebp-148h]
  unsigned int v14; // [esp-34h] [ebp-144h]
  int v15; // [esp-2Ch] [ebp-13Ch]
  int v16; // [esp+0h] [ebp-110h]
  int v17; // [esp+4h] [ebp-10Ch]
  int v18; // [esp+4h] [ebp-10Ch]
  int v19; // [esp+4h] [ebp-10Ch]
  int v20; // [esp+4h] [ebp-10Ch]
  int v21; // [esp+4h] [ebp-10Ch]
  int v22; // [esp+8h] [ebp-108h]
  int v23; // [esp+8h] [ebp-108h]
  int v24; // [esp+8h] [ebp-108h]
  int v25; // [esp+8h] [ebp-108h]
  Outpop::Utility::Ref_Object *v26; // [esp+14h] [ebp-FCh] BYREF
  unsigned __int16 v27; // [esp+18h] [ebp-F8h] BYREF
  unsigned int v28; // [esp+1Ch] [ebp-F4h] BYREF
  Outpop::Utility::Ref_Object *v29; // [esp+20h] [ebp-F0h] BYREF
  int v30; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v31[4]; // [esp+28h] [ebp-E8h] BYREF
  _BYTE v32[28]; // [esp+2Ch] [ebp-E4h] BYREF
  _BYTE v33[28]; // [esp+48h] [ebp-C8h] BYREF
  _BYTE v34[28]; // [esp+64h] [ebp-ACh] BYREF
  _BYTE v35[28]; // [esp+80h] [ebp-90h] BYREF
  _BYTE v36[28]; // [esp+9Ch] [ebp-74h] BYREF
  int v37; // [esp+B8h] [ebp-58h] BYREF
  _BYTE v38[32]; // [esp+BCh] [ebp-54h] BYREF
  _BYTE v39[36]; // [esp+DCh] [ebp-34h] BYREF
  int v40; // [esp+10Ch] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v26);
  v40 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v40 = -1;
  if ( v26 )
    Outpop::Utility::Ref_Object::release(v26);
  if ( v2 )
  {
    v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v26);
    v40 = 1;
    result = Outpop::Message::Message::get_result(v3);
    LogPrintf("validate failed. Error Code: %d", result);
    v40 = -1;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    v5 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v26);
    v40 = 2;
    v6 = Outpop::Message::Message::get_result(v5);
    Precacher::GetErrorText(v35, v6);
    LOBYTE(v40) = 4;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    v7 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v7);
    v8 = CDlgMgr::Instance();
    CTYDialog::CenterDialog(*(CTYDialog **)(v8 + 20), 1, 1);
    v40 = -1;
    std::wstring::~wstring(v35);
  }
  else
  {
    v9 = sub_100068E8(v17, v22);
    sub_1000E56B(*(_DWORD *)(v9 + 4), v18);
    sub_100154D3(v16);
    sub_1000E56B(v19, v23);
    sub_1000E63D();
    LogPrintf("close login connect.");
    std::string::string(v33);
    v40 = 5;
    Event::GetAckMessage(a1, &v26);
    LOBYTE(v40) = 6;
    sub_1000F259((int)&v30);
    sub_1000F259((int)&v28);
    sub_100052B8((int)&v27);
    sub_10017FE9((int)v33);
    LOBYTE(v40) = 5;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    v10 = Factory::hash(v33);
    std::string::string(v34);
    LOBYTE(v40) = 7;
    std::string::string(v36);
    LOBYTE(v40) = 8;
    v11 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v26);
    LOBYTE(v40) = 9;
    Outpop::Message::Message::reset_to_data(v11);
    LOBYTE(v40) = 8;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    Event::GetRequestMessage(a1, &v26);
    LOBYTE(v40) = 10;
    sub_10001181((int)v31);
    sub_10017FE9((int)v34);
    sub_10017FE9((int)v36);
    LOBYTE(v40) = 8;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    sub_1000D364(v20, v24);
    LOBYTE(v40) = 11;
    v37 = v10;
    std::string::operator=(v38, v34);
    std::string::operator=(v39, v33);
    GameClient::LocalUserManager::AddUser(
      GameClient::LocalUserManager::s_pInstance,
      (const struct GameClient::DESC_LOCALUSER *)&v37);
    Sleep(4u);
    v29 = 0;
    LOBYTE(v40) = 12;
    v12 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v32, v27, v28);
    v15 = v30;
    LOBYTE(v40) = 13;
    sub_1000E56B(v12, v10);
    sub_1001A2E9(v13, v14, 9, v15, 11, (int)&v29, 0, 0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 10000, 1, 5);
    LOBYTE(v40) = 12;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v32);
    LOBYTE(v40) = 11;
    if ( v29 )
      Outpop::Utility::Ref_Object::release(v29);
    LogPrintf("connect gate. IP: %d, Port: %d, UserID: %d, GateID: %d", v28, v27, v10, v30);
    LOBYTE(v40) = 8;
    sub_100076A8(v21, v25);
    LOBYTE(v40) = 7;
    std::string::~string(v36);
    LOBYTE(v40) = 5;
    std::string::~string(v34);
    v40 = -1;
    std::string::~string(v33);
  }
}

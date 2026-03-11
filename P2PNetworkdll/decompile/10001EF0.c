/*
 * func-name: ?on_item@P2P_Context@P2P@Outpop@@UAEXAAVConfig_Item@Utility@3@@Z
 * func-address: 0x10001ef0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::on_item(
        Outpop::P2P::P2P_Context *this,
        struct Outpop::Utility::Config_Item *a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int16 v19; // ax
  int v20; // eax
  const char *v21; // [esp+42h] [ebp-BCh]
  char v22; // [esp+59h] [ebp-A5h]
  char v23; // [esp+59h] [ebp-A5h]
  char v24; // [esp+59h] [ebp-A5h]
  char v25; // [esp+59h] [ebp-A5h]
  char v26; // [esp+59h] [ebp-A5h]
  char v27; // [esp+59h] [ebp-A5h]
  _BYTE v28[28]; // [esp+5Ah] [ebp-A4h] BYREF
  _BYTE v29[4]; // [esp+76h] [ebp-88h] BYREF
  _BYTE v30[4]; // [esp+7Ah] [ebp-84h] BYREF
  _DWORD v31[7]; // [esp+7Eh] [ebp-80h] BYREF
  _BYTE v32[28]; // [esp+9Ah] [ebp-64h] BYREF
  int v33; // [esp+B6h] [ebp-48h] BYREF
  _BYTE v34[20]; // [esp+BEh] [ebp-40h] BYREF
  _BYTE v35[32]; // [esp+D2h] [ebp-2Ch] BYREF
  int v36; // [esp+FAh] [ebp-4h]

  v3 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 0;
  v22 = std::operator==<char>(v3, "DetectedNetwork");
  v36 = -1;
  std::string::~string(v28);
  if ( v22 )
  {
    std::string::string(v28, "Time");
    v36 = 1;
    v4 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _DWORD))(*(_DWORD *)a2 + 20))(
           a2,
           v28,
           0);
    v5 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v30, v4);
    *((_DWORD *)this + 2) = *v5;
    *((_DWORD *)this + 3) = v5[1];
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
    v36 = -1;
    std::string::~string(v28);
  }
  v6 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 2;
  v23 = std::operator==<char>(v6, "ReportAddress");
  v36 = -1;
  std::string::~string(v28);
  if ( v23 )
  {
    std::string::string(v28, "Time");
    v36 = 3;
    v7 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _DWORD))(*(_DWORD *)a2 + 20))(
           a2,
           v28,
           0);
    v8 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v30, v7);
    *((_DWORD *)this + 4) = *v8;
    *((_DWORD *)this + 5) = v8[1];
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
    v36 = -1;
    std::string::~string(v28);
  }
  v9 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 4;
  v24 = std::operator==<char>(v9, "ReqeustRemoteConnect");
  v36 = -1;
  std::string::~string(v28);
  if ( v24 )
  {
    std::string::string(v28, "Time");
    v36 = 5;
    v10 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _DWORD))(*(_DWORD *)a2 + 20))(
            a2,
            v28,
            0);
    v11 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v30, v10);
    *((_DWORD *)this + 6) = *v11;
    *((_DWORD *)this + 7) = v11[1];
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
    v36 = -1;
    std::string::~string(v28);
    std::string::string(v28, "Count");
    v36 = 6;
    *((_DWORD *)this + 8) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(
                              a2,
                              v28);
    v36 = -1;
    std::string::~string(v28);
  }
  v12 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 7;
  v25 = std::operator==<char>(v12, "SAPKeepAlive");
  v36 = -1;
  std::string::~string(v28);
  if ( v25 )
  {
    std::string::string(v28, "Time");
    v36 = 8;
    v13 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _DWORD))(*(_DWORD *)a2 + 20))(
            a2,
            v28,
            0);
    v14 = (_DWORD *)Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v30, v13);
    *((_DWORD *)this + 9) = *v14;
    *((_DWORD *)this + 10) = v14[1];
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v29);
    v36 = -1;
    std::string::~string(v28);
    std::string::string(v28, "Count");
    v36 = 9;
    *((_DWORD *)this + 11) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(
                               a2,
                               v28);
    v36 = -1;
    std::string::~string(v28);
  }
  v15 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 10;
  v26 = std::operator==<char>(v15, "UPNP");
  v36 = -1;
  std::string::~string(v28);
  if ( v26 )
  {
    std::string::string(v28, "Enable");
    v36 = 11;
    *((_BYTE *)this + 82) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                              a2,
                              v28);
    v36 = -1;
    std::string::~string(v28);
    std::string::string(v28, "FixPort");
    v36 = 12;
    *((_WORD *)this + 40) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 92))(
                              a2,
                              v28);
    v36 = -1;
    std::string::~string(v28);
  }
  v16 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v28);
  v36 = 13;
  v27 = std::operator==<char>(v16, "ADServer");
  v36 = -1;
  std::string::~string(v28);
  if ( v27 )
  {
    std::string::string(v32, "Address");
    v36 = 14;
    std::string::string(v31, "Port");
    LOBYTE(v36) = 15;
    v17 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
            a2,
            v35,
            v32);
    LOBYTE(v36) = 16;
    if ( *(_DWORD *)(v17 + 24) < 0x10u )
      v18 = v17 + 4;
    else
      v18 = *(_DWORD *)(v17 + 4);
    v19 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 92))(
            a2,
            v31,
            v18,
            0);
    v20 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v34, v19, v21);
    LOBYTE(v36) = 17;
    Outpop::IONetwork::INET_Addr::operator=((char *)this + 48, v20);
    LOBYTE(v36) = 16;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)&v33);
    LOBYTE(v36) = 15;
    std::string::~string(v35);
    LOBYTE(v36) = 14;
    std::string::~string(v31);
    v36 = -1;
    std::string::~string(v32);
  }
}

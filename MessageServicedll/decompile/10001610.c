/*
 * func-name: ?on_item@Message_Config_Paser@Message@Outpop@@UAEXAAVConfig_Item@Utility@3@@Z
 * func-address: 0x10001610
 * callers: none
 * callees: 0x10001000, 0x10002c00, 0x10006e10, 0x10007810, 0x1000ba00, 0x100294e2, 0x100295c0
 */

void __thiscall Outpop::Message::Message_Config_Paser::on_item(
        Outpop::Message::Message_Config_Paser *this,
        struct Outpop::Utility::Config_Item *a2)
{
  int (__thiscall *v2)(struct Outpop::Utility::Config_Item *, _BYTE *); // edx
  int v3; // eax
  char v4; // bl
  int v5; // eax
  char v6; // bl
  int v7; // eax
  char v8; // bl
  void *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  char v12; // bl
  int v13; // eax
  char v14; // bl
  int v15; // ebx
  _DWORD **v16; // eax
  int v17; // eax
  char v18; // bl
  void *v19; // eax
  Outpop::Message::Message_Connector_Config *v20; // esi
  int v21; // eax
  char v22; // bl
  int v23; // eax
  char v24; // bl
  int v25; // eax
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // ebx
  _DWORD **v29; // eax
  int v30; // eax
  int v31; // eax
  char v32; // bl
  char v33; // bl
  int v34; // ebx
  int v35; // eax
  char v36; // bl
  char v37; // bl
  int v38; // eax
  char v39; // bl
  Outpop::IONetwork::INET_Addr *v40; // eax
  void *ip_address; // ebx
  int v42; // eax
  int v43; // [esp+F8h] [ebp-B4h]
  int v44; // [esp+FCh] [ebp-B0h]
  int v45; // [esp+110h] [ebp-9Ch] BYREF
  void *v46; // [esp+114h] [ebp-98h] BYREF
  _BYTE v47[28]; // [esp+118h] [ebp-94h] BYREF
  Outpop::Message::Message_Config_Paser *v48; // [esp+134h] [ebp-78h]
  _BYTE v49[28]; // [esp+138h] [ebp-74h] BYREF
  _BYTE v50[12]; // [esp+154h] [ebp-58h] BYREF
  _BYTE v51[8]; // [esp+160h] [ebp-4Ch] BYREF
  _BYTE v52[20]; // [esp+168h] [ebp-44h] BYREF
  _BYTE v53[28]; // [esp+17Ch] [ebp-30h] BYREF
  int v54; // [esp+1A8h] [ebp-4h]

  v2 = *(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4);
  v48 = this;
  v3 = v2(a2, v51);
  v54 = 0;
  v4 = std::operator==<char>(v3, "IOThread");
  v54 = -1;
  std::string::~string(v51);
  if ( v4 )
  {
    std::string::string(v53, "Size");
    v54 = 1;
    *(_DWORD *)(*((_DWORD *)v48 + 1) + 52) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(
                                               a2,
                                               v53);
    v54 = -1;
    std::string::~string(v53);
  }
  v5 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v51);
  v54 = 2;
  v6 = std::operator==<char>(v5, "BlockThread");
  v54 = -1;
  std::string::~string(v51);
  if ( v6 )
  {
    std::string::string(v53, "Size");
    v54 = 3;
    *(_DWORD *)(*((_DWORD *)v48 + 1) + 56) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(
                                               a2,
                                               v53);
    v54 = -1;
    std::string::~string(v53);
  }
  v7 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v51);
  v54 = 4;
  v8 = std::operator==<char>(v7, "Acceptor");
  v54 = -1;
  std::string::~string(v51);
  if ( v8 )
  {
    v9 = operator new(0x74u);
    v46 = v9;
    v54 = 5;
    if ( v9 )
      v10 = (_DWORD *)Outpop::IONetwork::Acceptor_Config::Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)v9);
    else
      v10 = 0;
    v54 = -1;
    v46 = v10;
    std::string::string(v47, "Type");
    v54 = 6;
    v11 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
            a2,
            v51,
            v47);
    LOBYTE(v54) = 7;
    v12 = std::operator==<char>(v11, "Stream");
    LOBYTE(v54) = 6;
    std::string::~string(v51);
    v54 = -1;
    std::string::~string(v47);
    if ( v12 )
    {
      v10[22] = 0;
    }
    else
    {
      std::string::string(v47, "Type");
      v54 = 8;
      v13 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
              a2,
              v51,
              v47);
      LOBYTE(v54) = 9;
      v14 = std::operator==<char>(v13, "Dgram");
      LOBYTE(v54) = 8;
      std::string::~string(v51);
      v54 = -1;
      std::string::~string(v47);
      v10[22] = v14 != 0;
    }
    std::string::string(v47, "LocalID");
    v54 = 10;
    *v10 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(a2, v47);
    v54 = -1;
    std::string::~string(v47);
    std::string::string(v47, "ListenAddress");
    v54 = 11;
    (*(void (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(a2, v53, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( (unsigned __int8)std::operator!=<char>(v53, &unk_1002F41A) )
      std::string::operator=(v10 + 11, v53);
    std::string::string(v47, "LocalType");
    LOBYTE(v54) = 14;
    v10[2] = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    std::string::string(v47, "ListenPort");
    LOBYTE(v54) = 15;
    *((_WORD *)v10 + 36) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(
                             a2,
                             v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    std::string::string(v47, "MaxAllowAccept");
    LOBYTE(v54) = 16;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[19] = v45;
    std::string::string(v47, "Security");
    LOBYTE(v54) = 17;
    *((_BYTE *)v10 + 80) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                             a2,
                             v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    std::string::string(v47, "Backlog");
    LOBYTE(v54) = 18;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[21] = v45;
    std::string::string(v47, "SendBufferSize");
    LOBYTE(v54) = 19;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[4] = v45;
    std::string::string(v47, "RecvBufferSize");
    LOBYTE(v54) = 20;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[5] = v45;
    std::string::string(v47, "KeepAlive");
    LOBYTE(v54) = 21;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[8] = v45;
    std::string::string(v47, "AESAlgorithmType");
    LOBYTE(v54) = 22;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[23] = v45;
    std::string::string(v47, "UDPResendTime");
    LOBYTE(v54) = 23;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[6] = v45;
    std::string::string(v47, "UDPTimeTick");
    LOBYTE(v54) = 24;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[7] = v45;
    std::string::string(v47, "UDPChannelKeepAlive");
    LOBYTE(v54) = 25;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[9] = v45;
    std::string::string(v47, "UDPPostReadNum");
    LOBYTE(v54) = 26;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[25] = v45;
    std::string::string(v47, "EnableFirewallFunc");
    LOBYTE(v54) = 27;
    *((_BYTE *)v10 + 112) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                              a2,
                              v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    std::string::string(v47, "TCPEnableRecvTimeOut");
    LOBYTE(v54) = 28;
    *((_BYTE *)v10 + 113) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                              a2,
                              v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    std::string::string(v47, "TCPRecvTimeOutTimer");
    LOBYTE(v54) = 29;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      *((_WORD *)v10 + 57) = v45;
    std::string::string(v47, "FirewallMaxReciveSizePerSecond");
    LOBYTE(v54) = 30;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[26] = v45;
    std::string::string(v47, "FirewallMaxRecivePacketNumSecond");
    LOBYTE(v54) = 31;
    v45 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 13;
    std::string::~string(v47);
    if ( v45 )
      v10[27] = v45;
    v15 = *(_DWORD *)(*((_DWORD *)v48 + 1) + 8);
    v46 = (void *)sub_10002C00(v15, *(_DWORD *)(v15 + 4), &v46);
    sub_1000BA00();
    v16 = (_DWORD **)v46;
    *(_DWORD *)(v15 + 4) = v46;
    *v16[1] = v16;
    v54 = -1;
    std::string::~string(v53);
  }
  v17 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v51);
  v54 = 32;
  v18 = std::operator==<char>(v17, "Connector");
  v54 = -1;
  std::string::~string(v51);
  if ( v18 )
  {
    v19 = operator new(0x68u);
    v46 = v19;
    v54 = 33;
    if ( v19 )
      v20 = Outpop::Message::Message_Connector_Config::Message_Connector_Config((Outpop::Message::Message_Connector_Config *)v19);
    else
      v20 = 0;
    v54 = -1;
    v45 = (int)v20;
    std::string::string(v47, "Type");
    v54 = 34;
    v21 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
            a2,
            v53,
            v47);
    LOBYTE(v54) = 35;
    v22 = std::operator==<char>(v21, "Stream");
    LOBYTE(v54) = 34;
    std::string::~string(v53);
    v54 = -1;
    std::string::~string(v47);
    if ( v22 )
    {
      *((_DWORD *)v20 + 19) = 0;
    }
    else
    {
      std::string::string(v47, "Type");
      v54 = 36;
      v23 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
              a2,
              v53,
              v47);
      LOBYTE(v54) = 37;
      v24 = std::operator==<char>(v23, "Dgram");
      LOBYTE(v54) = 36;
      std::string::~string(v53);
      v54 = -1;
      std::string::~string(v47);
      *((_DWORD *)v20 + 19) = v24 != 0;
    }
    std::string::string(v53, "RemoteAddress");
    v54 = 38;
    std::string::string(v47, "RemotePort");
    LOBYTE(v54) = 39;
    v25 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(
            a2,
            v49,
            v53);
    LOBYTE(v54) = 40;
    if ( *(_DWORD *)(v25 + 24) < 0x10u )
      v26 = v25 + 4;
    else
      v26 = *(_DWORD *)(v25 + 4);
    v27 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, int, _DWORD))(*(_DWORD *)a2 + 92))(
            a2,
            v47,
            v26,
            0);
    Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v52, v27);
    LOBYTE(v54) = 42;
    std::string::~string(v49);
    LOBYTE(v54) = 43;
    std::string::~string(v47);
    LOBYTE(v54) = 44;
    std::string::~string(v53);
    Outpop::IONetwork::INET_Addr::operator=((char *)v20 + 44, v51);
    std::string::string(v47, "LocalID");
    LOBYTE(v54) = 45;
    *(_DWORD *)v20 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(
                       a2,
                       v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "LocalType");
    LOBYTE(v54) = 46;
    *((_DWORD *)v20 + 2) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(
                             a2,
                             v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "RemoteID");
    LOBYTE(v54) = 47;
    *((_DWORD *)v20 + 1) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(
                             a2,
                             v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "RemoteType");
    LOBYTE(v54) = 48;
    *((_DWORD *)v20 + 3) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(
                             a2,
                             v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "Security");
    LOBYTE(v54) = 49;
    *((_BYTE *)v20 + 72) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                             a2,
                             v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "SendBufferSize");
    LOBYTE(v54) = 50;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 4) = v46;
    std::string::string(v47, "RecvBufferSize");
    LOBYTE(v54) = 51;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 5) = v46;
    std::string::string(v47, "AutoReConnect");
    LOBYTE(v54) = 52;
    *((_BYTE *)v20 + 96) = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(
                             a2,
                             v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    std::string::string(v47, "AutoReConnectTime");
    LOBYTE(v54) = 53;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 28))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 25) = v46;
    else
      *((_DWORD *)v20 + 25) = 5;
    std::string::string(v47, "KeepAlive");
    LOBYTE(v54) = 54;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 8) = v46;
    std::string::string(v47, "AESAlgorithmType");
    LOBYTE(v54) = 55;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 21) = v46;
    std::string::string(v47, "UDPResendTime");
    LOBYTE(v54) = 56;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 6) = v46;
    std::string::string(v47, "UDPTimeTick");
    LOBYTE(v54) = 57;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 7) = v46;
    std::string::string(v47, "UDPChannelKeepAlive");
    LOBYTE(v54) = 58;
    v46 = (void *)(*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v47);
    LOBYTE(v54) = 44;
    std::string::~string(v47);
    if ( v46 )
      *((_DWORD *)v20 + 9) = v46;
    v28 = *(_DWORD *)(*((_DWORD *)v48 + 1) + 20);
    v46 = (void *)sub_10002C00(v28, *(_DWORD *)(v28 + 4), &v45);
    sub_1000BA00();
    v29 = (_DWORD **)v46;
    *(_DWORD *)(v28 + 4) = v46;
    *v29[1] = v29;
    v54 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v51);
  }
  v30 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v49);
  v54 = 59;
  std::operator==<char>(v30, "MessageRouteItem");
  v54 = -1;
  std::string::~string(v49);
  v31 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v49);
  v54 = 60;
  v32 = std::operator==<char>(v31, "RequestAckOption");
  v54 = -1;
  std::string::~string(v49);
  if ( v32 )
  {
    std::string::string(v51, "EnableTimeOut");
    v54 = 61;
    v33 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(a2, v51);
    v54 = -1;
    std::string::~string(v51);
    if ( v33 )
      *(_BYTE *)(*((_DWORD *)v48 + 1) + 84) = 1;
    std::string::string(v51, "DefaultTime");
    v54 = 62;
    v34 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 20))(a2, v51);
    v54 = -1;
    std::string::~string(v51);
    if ( v34 && v34 != -1 )
      *(_DWORD *)(*((_DWORD *)v48 + 1) + 88) = v34;
  }
  v35 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v49);
  v54 = 63;
  v36 = std::operator==<char>(v35, "AcceptorAddressFilterConfig");
  v54 = -1;
  std::string::~string(v49);
  if ( v36 )
  {
    std::string::string(v51, "Enable");
    v54 = 64;
    v37 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 100))(a2, v51);
    v54 = -1;
    std::string::~string(v51);
    if ( v37 )
    {
      std::string::string(v51, "Port");
      v54 = 65;
      word_10046298 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 92))(
                        a2,
                        v51);
      v54 = -1;
      std::string::~string(v51);
    }
    else
    {
      word_10046298 = 0;
    }
  }
  v38 = (*(int (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, v49);
  v54 = 66;
  v39 = std::operator==<char>(v38, "AcceptorAddressAllow");
  v54 = -1;
  std::string::~string(v49);
  if ( v39 )
  {
    std::string::string(v51, "Address");
    v54 = 67;
    (*(void (__thiscall **)(struct Outpop::Utility::Config_Item *, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 12))(a2, v47, v51);
    LOBYTE(v54) = 68;
    v40 = (Outpop::IONetwork::INET_Addr *)Outpop::IONetwork::INET_Addr::INET_Addr(
                                            (Outpop::IONetwork::INET_Addr *)v49,
                                            0);
    LOBYTE(v54) = 69;
    ip_address = (void *)Outpop::IONetwork::INET_Addr::get_ip_address(v40);
    LOBYTE(v54) = 68;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v49);
    LOBYTE(v54) = 67;
    std::string::~string(v47);
    v54 = -1;
    std::string::~string(v51);
    if ( ip_address )
    {
      if ( word_10046298 )
      {
        v45 = (unsigned __int16)word_10046298;
        v46 = ip_address;
        v42 = sub_10006E10(v50, &v46);
        sub_10007810(v42, v43, v44);
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, struct Outpop::Utility::Config_Item *))(**((_DWORD **)v48 + 2) + 4))(
    *((_DWORD *)v48 + 2),
    a2);
}

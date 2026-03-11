/*
 * func-name: ?OnBegin@ReceiveChatMessageObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101f4c10
 * callers: 0x10016c39
 * callees: 0x10002275, 0x10003bf2, 0x100050ba, 0x10012aee, 0x1001a159, 0x102c9d62
 */

void __thiscall GameClient::ReceiveChatMessageObserver::OnBegin(
        GameClient::ReceiveChatMessageObserver *this,
        struct Event *a2)
{
  int v2; // edi
  struct BinStream *Stream; // eax
  unsigned int v4; // ecx
  _BYTE *v5; // ecx
  char v6; // [esp-2Ch] [ebp-B0h] BYREF
  int v7; // [esp-28h] [ebp-ACh]
  int v8; // [esp-24h] [ebp-A8h]
  int v9; // [esp-20h] [ebp-A4h]
  int v10; // [esp-1Ch] [ebp-A0h]
  int v11; // [esp-18h] [ebp-9Ch]
  int v12; // [esp-14h] [ebp-98h]
  int v13; // [esp-10h] [ebp-94h]
  int v14; // [esp-Ch] [ebp-90h]
  int v15; // [esp-8h] [ebp-8Ch]
  int v16; // [esp-4h] [ebp-88h]
  float v17; // [esp+0h] [ebp-84h]
  int v18; // [esp+4h] [ebp-80h]
  float v19; // [esp+8h] [ebp-7Ch]
  int v20; // [esp+Ch] [ebp-78h]
  char *v21; // [esp+1Ch] [ebp-68h]
  float v22[7]; // [esp+20h] [ebp-64h] BYREF
  _BYTE v23[28]; // [esp+3Ch] [ebp-48h] BYREF
  _BYTE v24[28]; // [esp+58h] [ebp-2Ch] BYREF
  int v25; // [esp+80h] [ebp-4h]

  switch ( Event::GetSubID(a2) )
  {
    case 0x52D0u:
    case 0x52D1u:
    case 0x52D2u:
    case 0x52D3u:
    case 0x52D4u:
    case 0x52DAu:
    case 0x52DBu:
    case 0x52DCu:
      switch ( Event::GetSubID(a2) )
      {
        case 0x52D0u:
          v2 = 1;
          break;
        case 0x52D1u:
          v2 = 2;
          break;
        case 0x52D2u:
          v2 = 4;
          break;
        case 0x52D3u:
          v2 = 5;
          break;
        case 0x52D4u:
          v2 = 6;
          break;
        case 0x52DAu:
          v2 = 9;
          break;
        case 0x52DBu:
          v2 = 3;
          break;
        case 0x52DCu:
          v2 = 11;
          break;
        default:
          v2 = (int)v21;
          break;
      }
      std::string::string(v23);
      v25 = 0;
      std::string::string(v22);
      LOBYTE(v25) = 1;
      Stream = Event::GetStream(a2);
      v4 = *((_DWORD *)Stream + 3) + 4;
      if ( v4 <= *((_DWORD *)Stream + 2) )
        *((_DWORD *)Stream + 3) = v4;
      sub_100050BA((int)v23);
      sub_100050BA((int)v22);
      GameClient::ChatManager::Instance();
      GameClient::ChatManager::AddMessage(v2, (int)v23, (int)v22);
      LOBYTE(v25) = 0;
      std::string::~string(v22);
      v5 = v23;
      goto LABEL_16;
    case 0x52D5u:
      std::string::string(v24);
      v25 = 2;
      Event::GetStream(a2);
      sub_100050BA((int)v24);
      v20 = 0;
      v19 = 1.0;
      v18 = 1;
      v17 = 30.0;
      v22[0] = 1.0;
      *(float *)&v13 = 1.0;
      v22[1] = 0.0;
      v21 = &v6;
      v22[2] = 0.0;
      *(float *)&v14 = 0.0;
      *(float *)&v15 = 0.0;
      v22[3] = 1.0;
      *(float *)&v16 = 1.0;
      std::string::string(&v6, v24);
      LOBYTE(v25) = 3;
      sub_10012AEE();
      LOBYTE(v25) = 2;
      sub_10002275(v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
      v5 = v24;
LABEL_16:
      v25 = -1;
      std::string::~string(v5);
      break;
    default:
      return;
  }
}

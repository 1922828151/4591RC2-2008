/*
 * func-name: sub_1021C440
 * func-address: 0x1021c440
 * callers: 0x10005709
 * callees: 0x10001181, 0x100045f7, 0x100052a4, 0x10006497, 0x1000bc76, 0x10010a32, 0x10011abd, 0x100128e1, 0x10017db9, 0x10017fe9, 0x102c9d62
 */

void __stdcall sub_1021C440(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  int v3; // edi
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v5; // esi
  Outpop::Message::Message *v6; // ecx
  unsigned int multi_id; // eax
  int *User; // esi
  unsigned __int8 i; // bl
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // edi
  unsigned int v14; // [esp-8h] [ebp-120h]
  int v15; // [esp-4h] [ebp-11Ch]
  int v16; // [esp+0h] [ebp-118h]
  int v17; // [esp+0h] [ebp-118h]
  int v18; // [esp+4h] [ebp-114h]
  int v19; // [esp+4h] [ebp-114h]
  Outpop::Utility::Ref_Object *v20; // [esp+14h] [ebp-104h] BYREF
  int v21; // [esp+18h] [ebp-100h] BYREF
  Outpop::Utility::Ref_Object *v22; // [esp+1Ch] [ebp-FCh] BYREF
  Outpop::Utility::Ref_Object *v23; // [esp+20h] [ebp-F8h] BYREF
  _DWORD v24[5]; // [esp+24h] [ebp-F4h] BYREF
  int v25; // [esp+38h] [ebp-E0h] BYREF
  _BYTE v26[28]; // [esp+3Ch] [ebp-DCh] BYREF
  _BYTE v27[4]; // [esp+58h] [ebp-C0h] BYREF
  _BYTE v28[5]; // [esp+5Ch] [ebp-BCh] BYREF
  _BYTE v29[167]; // [esp+61h] [ebp-B7h] BYREF
  int v30; // [esp+114h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v20);
  v30 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v3 = -1;
  v30 = -1;
  if ( v20 )
    Outpop::Utility::Ref_Object::release(v20);
  if ( v2 )
  {
    LogPrintf("Get character list failed.");
  }
  else
  {
    LogPrintf("Get character list success.");
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v20);
    v5 = GameClient::LocalUserManager::s_pInstance;
    v6 = *RequestMessage;
    v30 = 1;
    multi_id = Outpop::Message::Message::get_multi_id(v6);
    User = (int *)GameClient::LocalUserManager::GetUser(v5, multi_id);
    v30 = -1;
    if ( v20 )
      Outpop::Utility::Ref_Object::release(v20);
    if ( User )
    {
      Event::GetAckMessage(a1, &v22);
      v30 = 2;
      sub_10001181((int)&v21);
      v30 = -1;
      if ( v22 )
        Outpop::Utility::Ref_Object::release(v22);
      for ( i = 0; i < v21; ++i )
      {
        sub_10017DB9(v16, v18);
        v30 = 3;
        Event::GetAckMessage(a1, &v23);
        LOBYTE(v30) = 4;
        sub_10001181((int)&v25);
        sub_10017FE9((int)v26);
        sub_100128E1((int)v27);
        sub_10001181((int)v28);
        sub_100128E1((int)v29);
        LOBYTE(v30) = 3;
        if ( v23 )
          Outpop::Utility::Ref_Object::release(v23);
        v10 = User[17];
        v11 = User[1];
        v24[1] = User[9];
        v24[3] = v10;
        v24[0] = v11;
        v12 = User[18];
        v24[2] = -1;
        v24[4] = v12;
        v13 = sub_10006497((int)&v25, (int)v24);
        if ( !v13 )
          Error("Repeat character ID %d", v25);
        sub_100052A4(*(_DWORD *)(v13 + 4));
        v3 = v25;
        v30 = -1;
        sub_1000BC76(v17, v19);
      }
      LogPrintf("Send character online.");
      sub_10011ABD(User[1], v3);
      sub_100045F7(v14, v15);
    }
    else
    {
      LogPrintf("Error: GetCharacterList get user failed.");
    }
  }
}

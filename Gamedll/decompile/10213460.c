/*
 * func-name: sub_10213460
 * func-address: 0x10213460
 * callers: 0x1001677f
 * callees: 0x100047af, 0x10004886, 0x10004bfb, 0x10008f12, 0x10009e6c, 0x1000b1a4, 0x1000bc76, 0x1000ca6d, 0x1000cf90, 0x10010a32, 0x10011abd, 0x10013c73, 0x10016a4f, 0x10017db9, 0x1001816a, 0x10018930, 0x102c9d62, 0x102c9d98, 0x102c9dc8, 0x102ca13e
 */

void __stdcall sub_10213460(int a1)
{
  Outpop::Message::Message *v1; // ecx
  Outpop::Utility::Stream_Base **AckMessage; // esi
  Outpop::Utility::Stream_Base **v3; // eax
  Outpop::Utility::Stream_Base *v4; // ecx
  Outpop::Utility::Stream_Base *v5; // ebp
  size_t readable; // esi
  char *ptr; // ebp
  int v8; // eax
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v10; // esi
  Outpop::Message::Message *v11; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  int v14; // esi
  CDlgMgr *v15; // eax
  int v16; // [esp+10h] [ebp-118h]
  int v17; // [esp+10h] [ebp-118h]
  int v18; // [esp+14h] [ebp-114h]
  int v19; // [esp+14h] [ebp-114h]
  int v20; // [esp+14h] [ebp-114h]
  int v21; // [esp+14h] [ebp-114h]
  int v22; // [esp+18h] [ebp-110h]
  int v23; // [esp+18h] [ebp-110h]
  int v24; // [esp+18h] [ebp-110h]
  bool v25; // [esp+2Bh] [ebp-FDh]
  Outpop::Utility::Ref_Object *v26; // [esp+2Ch] [ebp-FCh] BYREF
  Outpop::Utility::Ref_Object *v27; // [esp+30h] [ebp-F8h] BYREF
  void **v28; // [esp+34h] [ebp-F4h] BYREF
  void *v29; // [esp+38h] [ebp-F0h]
  int v30; // [esp+3Ch] [ebp-ECh]
  int v31; // [esp+40h] [ebp-E8h]
  int v32; // [esp+44h] [ebp-E4h]
  int v33[10]; // [esp+48h] [ebp-E0h] BYREF
  char v34; // [esp+70h] [ebp-B8h]
  int v35; // [esp+124h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v27);
  v35 = 0;
  v25 = Outpop::Message::Message::get_result(v1) != 0;
  v35 = -1;
  if ( v27 )
    Outpop::Utility::Ref_Object::release(v27);
  if ( v25 )
  {
    LogPrintf("Send character online is failed.");
  }
  else
  {
    LogPrintf("Send character online is success.");
    v28 = &BinStream::`vftable';
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v35 = 1;
    AckMessage = (Outpop::Utility::Stream_Base **)Event::GetAckMessage(a1, &v26);
    LOBYTE(v35) = 2;
    v3 = (Outpop::Utility::Stream_Base **)Event::GetAckMessage(a1, &v27);
    v4 = *AckMessage;
    v5 = *v3;
    LOBYTE(v35) = 3;
    readable = Outpop::Utility::Stream_Base::get_readable(v4);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v5);
    sub_1001816A(readable);
    memcpy((char *)v29 + v30, ptr, readable);
    v30 += readable;
    LOBYTE(v35) = 2;
    if ( v27 )
      Outpop::Utility::Ref_Object::release(v27);
    LOBYTE(v35) = 1;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    sub_10017DB9(v18, v22);
    LOBYTE(v35) = 4;
    sub_1000CA6D((int)&v28, (int)v33);
    sub_10016A4F(v33[0]);
    sub_1000B1A4((int)v33);
    v26 = (Outpop::Utility::Ref_Object *)operator new(8u);
    LOBYTE(v35) = 5;
    if ( v26 )
      v8 = sub_10004BFB();
    else
      v8 = 0;
    LOBYTE(v35) = 4;
    sub_10008F12(v8);
    sub_1000CF90(v19, v23);
    sub_10011ABD(v33[0], v20);
    sub_10018930(v16);
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v26);
    v10 = GameClient::LocalUserManager::s_pInstance;
    v11 = *RequestMessage;
    LOBYTE(v35) = 6;
    multi_id = Outpop::Message::Message::get_multi_id(v11);
    User = GameClient::LocalUserManager::GetUser(v10, multi_id);
    LOBYTE(v35) = 4;
    if ( v26 )
      Outpop::Utility::Ref_Object::release(v26);
    if ( User )
    {
      *((_DWORD *)User + 19) = v33[0];
      v14 = sub_10016A4F(v33[0]);
      if ( v14 )
      {
        sub_100047AF((int)&v26);
        LOBYTE(v35) = 7;
        sub_10013C73(v14);
        LOBYTE(v35) = 4;
        if ( v26 )
          Outpop::Utility::Ref_Object::release(v26);
      }
      v17 = *(_DWORD *)(sub_10009E6C() + 28);
      sub_10009E6C();
      sub_10004886(v17);
      if ( (unsigned __int8)(v34 - 101) <= 9u )
      {
        v15 = (CDlgMgr *)CDlgMgr::Instance();
        CDlgMgr::ShowDialog(v15);
      }
    }
    LOBYTE(v35) = 1;
    sub_1000BC76(v21, v24);
    v28 = &BinStream::`vftable';
    if ( v29 )
      operator delete[](v29);
  }
}

/*
 * func-name: sub_102AD3A0
 * func-address: 0x102ad3a0
 * callers: 0x100016fe
 * callees: 0x100068e8, 0x10007a7c, 0x10010a32, 0x10015eab
 */

void __stdcall sub_102AD3A0(
        Outpop::Utility::Ref_Object *a1,
        u_short *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  Outpop::Utility::Ref_Object *v16; // edi
  struct GameClient::LocalUser *User; // esi
  Outpop::Utility::Binary_Stream *v18; // eax
  Outpop::Utility::Ref_Object *v19; // edi
  Outpop::Utility::Ref_Object *v20; // ecx
  int v21; // eax
  int v22; // ebx
  u_short *v23; // esi
  int started; // edi
  const char *host_addr; // eax
  int v26; // [esp-4h] [ebp-38h]
  int v27; // [esp+0h] [ebp-34h]
  int v28; // [esp+4h] [ebp-30h]
  _DWORD v29[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v30[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v31; // [esp+30h] [ebp-4h]

  v16 = a1;
  User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, (unsigned int)a1);
  if ( User )
  {
    v18 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v19 = v18;
    v29[0] = v18;
    v31 = 0;
    if ( v18 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v18, 32);
      *(_DWORD *)v19 = &Outpop::Utility::Binary_Stream::`vftable';
      v20 = v19;
    }
    else
    {
      v20 = 0;
    }
    v31 = -1;
    a1 = v20;
    if ( v20 )
      Outpop::Utility::Ref_Object::addref(v20);
    v31 = 1;
    sub_10015EAB((int)User + 72);
    v21 = sub_100068E8(v27, v28);
    v22 = a3;
    v23 = a2;
    started = Outpop::Message::Message_Facade::cache_start_connector_with_first_message(
                a2,
                a3,
                a4,
                a5,
                a6,
                &a1,
                a7,
                *(_DWORD *)(v21 + 16),
                a10,
                a11,
                a12,
                a15,
                a16,
                0,
                0,
                0);
    v26 = ntohs(v23[7]);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((Outpop::IONetwork::INET_Addr *)v23);
    LogPrintf("connect game server. ip: %s:%d", host_addr, v26);
    if ( started != -1 )
    {
      v29[0] = v22;
      v29[1] = started;
      sub_10007A7C((int)v30, (int)v29);
    }
    v31 = -1;
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
  else
  {
    LogPrintf("connect game server failed. user not found: %d", v16);
  }
}

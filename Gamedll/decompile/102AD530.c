/*
 * func-name: sub_102AD530
 * func-address: 0x102ad530
 * callers: 0x1001a2e9
 * callees: 0x10002842, 0x10007a7c, 0x10010a32
 */

void __stdcall sub_102AD530(
        int a1,
        Outpop::Utility::Ref_Object *a2,
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
        int a15)
{
  Outpop::Utility::Ref_Object *v15; // edi
  struct GameClient::LocalUser *User; // ebx
  Outpop::Utility::Binary_Stream *v17; // eax
  Outpop::Utility::Ref_Object *v18; // esi
  Outpop::Utility::Ref_Object *v19; // ecx
  int started; // eax
  _DWORD v21[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v22[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v23; // [esp+30h] [ebp-4h]

  v15 = a2;
  User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, (unsigned int)a2);
  if ( User )
  {
    v17 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v18 = v17;
    v21[0] = v17;
    v19 = 0;
    v23 = 0;
    if ( v17 )
    {
      Outpop::Utility::Binary_Stream::Binary_Stream(v17, 32);
      *(_DWORD *)v18 = &Outpop::Utility::Binary_Stream::`vftable';
      v19 = v18;
    }
    v23 = -1;
    a2 = v19;
    if ( v19 )
      Outpop::Utility::Ref_Object::addref(v19);
    v23 = 1;
    sub_10002842((int)User + 40);
    started = Outpop::Message::Message_Facade::cache_start_connector_with_first_message(
                a1,
                v15,
                a3,
                a4,
                a5,
                &a2,
                a6,
                a7,
                1,
                a10,
                a11,
                a14,
                a15,
                0,
                0,
                0);
    if ( started != -1 )
    {
      v21[1] = started;
      v21[0] = v15;
      sub_10007A7C((int)v22, (int)v21);
    }
    v23 = -1;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
  else
  {
    LogPrintf("connect gate server failed. user not found: %d", v15);
  }
}

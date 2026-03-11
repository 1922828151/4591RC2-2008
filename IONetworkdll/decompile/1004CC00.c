/*
 * func-name: ?erase_channel_from_map@P2PUdpBuilder@IONetwork@Outpop@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004cc00
 * callers: 0x100450a0, 0x100455d0
 * callees: 0x1004d820
 */

char __thiscall Outpop::IONetwork::P2PUdpBuilder::erase_channel_from_map(int this, int a2)
{
  Outpop::Utility::Thread_Mutex *v2; // edi
  int v3; // eax

  v2 = (Outpop::Utility::Thread_Mutex *)(this + 168);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 168)) - 1;
  if ( v3 != -1 )
  {
    sub_1004D820();
    LOBYTE(v3) = Outpop::Utility::Thread_Mutex::release(v2);
  }
  return v3;
}

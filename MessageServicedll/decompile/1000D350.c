/*
 * func-name: ?start_acceptor@Message_Facade@Message@Outpop@@SAXHIGABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ETransmitType@Utility@3@I_N2HIIIHHHHHH22HHH@Z
 * func-address: 0x1000d350
 * callers: none
 * callees: 0x1000ed90, 0x100294e2
 */

void __cdecl Outpop::Message::Message_Facade::start_acceptor(
        int a1,
        int a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        char a19,
        char a20,
        int a21,
        int a22,
        int a23)
{
  _DWORD v23[11]; // [esp+8h] [ebp-84h] BYREF
  _BYTE v24[28]; // [esp+34h] [ebp-58h] BYREF
  __int16 v25; // [esp+50h] [ebp-3Ch]
  int v26; // [esp+54h] [ebp-38h]
  char v27; // [esp+58h] [ebp-34h]
  int v28; // [esp+5Ch] [ebp-30h]
  int v29; // [esp+60h] [ebp-2Ch]
  int v30; // [esp+64h] [ebp-28h]
  int v31; // [esp+6Ch] [ebp-20h]
  int v32; // [esp+70h] [ebp-1Ch]
  int v33; // [esp+74h] [ebp-18h]
  char v34; // [esp+78h] [ebp-14h]
  char v35; // [esp+79h] [ebp-13h]
  __int16 v36; // [esp+7Ah] [ebp-12h]
  int v37; // [esp+88h] [ebp-4h]

  Outpop::IONetwork::Acceptor_Config::Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)v23);
  v37 = 0;
  v23[0] = a1;
  v23[2] = a2;
  v25 = a3;
  v29 = a5;
  v26 = a6;
  v27 = a8;
  v30 = a14;
  v28 = a9;
  v23[4] = a10;
  v23[5] = a11;
  std::string::operator=(v24, a4);
  if ( a18 )
    v23[6] = a15;
  if ( a16 )
    v23[7] = a16;
  if ( a17 )
    v23[9] = a17;
  if ( a18 )
    v31 = a18;
  v34 = a19;
  v35 = a20;
  if ( a21 )
    v36 = a21;
  if ( a22 )
    v32 = a22;
  if ( a23 )
    v33 = a23;
  Outpop::Message::Acceptor_Manager::add_acceptor(
    *((Outpop::Message::Acceptor_Manager **)Outpop::Message::Message_Facade::g_c_ + 7),
    (struct Outpop::IONetwork::Acceptor_Config *)v23);
  v37 = -1;
  Outpop::IONetwork::Acceptor_Config::~Acceptor_Config((Outpop::IONetwork::Acceptor_Config *)v23);
}

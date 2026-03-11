/*
 * func-name: ?send_immediacy@P2P_Channel@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10044050
 * callers: none
 * callees: 0x1004bb00
 */

int __thiscall Outpop::IONetwork::P2P_Channel::send_immediacy(char *this, int a2)
{
  char v4[8]; // [esp-24h] [ebp-3Ch] BYREF
  int v5; // [esp-1Ch] [ebp-34h]
  int v6; // [esp-18h] [ebp-30h]
  int v7; // [esp-14h] [ebp-2Ch]
  int v8; // [esp-10h] [ebp-28h]
  int v9; // [esp-Ch] [ebp-24h]
  int v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]
  char *v12; // [esp+8h] [ebp-10h]
  int v13; // [esp+14h] [ebp-4h]

  v11 = 0;
  v10 = 0;
  v12 = v4;
  std::string::string(this + 636);
  v13 = -1;
  return Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(a2, this + 80, v4[0], v4[4], v5, v6, v7, v8, v9, v10, v11);
}

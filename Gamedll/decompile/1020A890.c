/*
 * func-name: sub_1020A890
 * func-address: 0x1020a890
 * callers: 0x10013c73
 * callees: none
 */

void __thiscall sub_1020A890(_BYTE *this, int a2)
{
  char *v3; // eax
  int v4; // eax
  _BYTE v5[28]; // [esp+8h] [ebp-28h] BYREF
  int v6; // [esp+2Ch] [ebp-4h]

  if ( this[164] )
  {
    v3 = _itoa(*(_DWORD *)(a2 + 4), byte_103B6678, 10);
    v4 = std::string::string(v5, v3);
    v6 = 0;
    Outpop::P2P::Peer::change_peer_id(this, v4);
    v6 = -1;
    std::string::~string(v5);
  }
}

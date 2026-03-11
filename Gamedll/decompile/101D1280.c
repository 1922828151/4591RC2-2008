/*
 * func-name: ?WriteSynaData@Aura@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101d1280
 * callers: 0x10008a62
 * callees: 0x1000bf05, 0x10010519, 0x10014669, 0x100163b0, 0x1001a5d2
 */

char __thiscall GameClient::Aura::WriteSynaData(GameClient::Aura *this, struct BinStream *a2)
{
  int v3; // ecx
  int v4; // eax
  _BYTE v6[48]; // [esp+14h] [ebp-40h] BYREF
  _BYTE v7[16]; // [esp+44h] [ebp-10h] BYREF

  v3 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((_DWORD *)this + 5) = *(_DWORD *)(v3 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    if ( v4 == 1 && !*(_DWORD *)(*((_DWORD *)this + 2) + 112) )
      (*(void (__thiscall **)(GameClient::Aura *))(*(_DWORD *)this + 48))(this);
  }
  else
  {
    if ( sub_1000BF05() && !(unsigned __int8)sub_100163B0() )
    {
      sub_10014669(v6);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 8) + 88))(
             *((_DWORD *)this + 8),
             *((_DWORD *)this + 2) + 228,
             v6,
             0) )
      {
        sub_10010519((int)v6, (int)v7);
      }
      else
      {
        sub_10010519(*((_DWORD *)this + 8) + 36, *((_DWORD *)this + 8) + 24);
      }
      sub_1001A5D2(1);
    }
    if ( !*(_DWORD *)(*((_DWORD *)this + 2) + 112) )
    {
      (*(void (__thiscall **)(GameClient::Aura *, _DWORD))(*(_DWORD *)this + 44))(this, 0.0);
      return 1;
    }
  }
  return 1;
}

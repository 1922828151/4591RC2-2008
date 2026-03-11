/*
 * func-name: ?WriteSnapshot@PedrailVehicle@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101b75b0
 * callers: 0x1000d38c
 * callees: 0x1000c4f5
 */

bool __thiscall GameClient::PedrailVehicle::WriteSnapshot(GameClient::PedrailVehicle *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  unsigned int v5; // edx
  struct BinStream *v6; // ebp
  int v7; // eax
  struct BinStream *v8; // ebx
  int v9; // eax

  result = GameClient::ControlledEstab::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = *((_DWORD *)a2 + 2);
    if ( v4 + 4 > v5 )
    {
      v6 = a2;
    }
    else
    {
      v6 = *(struct BinStream **)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v4 + 4;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 + 4 > v5 )
    {
      v8 = a2;
    }
    else
    {
      v8 = *(struct BinStream **)(v7 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v7 + 4;
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( v9 + 1 <= v5 )
    {
      *((_BYTE *)this + 552) = *(_BYTE *)(v9 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    *((_DWORD *)this + 137) = v6;
    *((_DWORD *)this + 136) = v8;
    return 1;
  }
  return result;
}
